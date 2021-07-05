
###########################################################
#
#   Makefile
#
###########################################################

# Compiler
CC=gcc -std=gnu11
# Source code
SRC=src
# Object files
OBJ=obj


###########################################################
# Compiler Optimizations
###########################################################

OPT=-g # Save everything for debugging
#OPT=-O3

###########################################################
# Parameters
###########################################################

# -Wunused = (Warn unused params)
# -Wall = (Warn all compilation errors)
CFLAGS=-Wunused -Wall $(OPT)

###########################################################
# Libraries
###########################################################
# Math lib
MTH=-lm

LIB=$(MTH)

###########################################################
# Modules and programs
###########################################################

# Directory for elements of common use
COMMON=

# Directories to be compiled
PROGRAMS=hello_world

# Directories that contain code
SRCDIR=$(COMMON) $(PROGRAMS)


###########################################################
# Dependencies and directories
###########################################################

# All .h files from common folders
DEPS := $(foreach i, $(COMMON), $(shell find $(SRC)/$(i) -name '*.h'))

# All .h files
HDRFILES := $(shell find $(SRC) -name '*.h')

#SRCFIles
SRCFILES := $(shell find $(SRC) -name '*.c')

# Object files .o, intermediate state of compilation
OBJFILES := $(foreach i, $(SRCFILES), $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(i)))

# Directories for object files .o
OBJDIR := $(patsubst $(SRC)/%, $(OBJ)/%, $(shell find $(SRC) -type d))

###########################################################
#Rules
###########################################################

# Calls rules $(OBJDIR) and $(PROGRAMS)
all: $(OBJDIR) $(PROGRAMS)
	@echo "done compiling"

clean:
	@rm -fv $(PROGRAMS) && rm -rfv obj && echo "done cleaning"

# Creates directories to savae .o objects
$(OBJDIR):
	@mkdir -p $@

# Following rules require two expansions
.SECONDEXPANSION:

# Local dependencies for .o files
LOCAL_DEPS = $(filter $(patsubst $(OBJ)/%, $(SRC)/%, $(dir $(1)))%, $(HDRFILES))

# Compiles every .o file but only if .c file was modified
obj/%.o: src/%.c $$(call LOCAL_DEPS,$$@) $(DEPS) Makefile
	@$(CC) $(CFLAGS) $< -c -o $@ $(LIB) && echo "compilled '$@'"
# Connects and compiles every program from .o but only after previous rule
# has been called with: (1) all .o files from each program (2) all .o
# files from common directories

$(PROGRAMS): $$(filter obj/$$@/% $(foreach i, $(COMMON), obj/$(i)/%), $(OBJFILES))
	@$(CC) $(CFLAGS) $^ -o $@ $(LIB) && echo "compiled '$@'"
