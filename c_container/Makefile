
APP=introduction_to_c
DOCKER=docker run --rm -v "pwd":/app $(APP)
FILE=
all: build compile
build:
	docker build . -t $(APP)
	@echo 'build completed'

clean:
	@$(DOCKER) make clean

compile:
	@$(DOCKER) make

execute:
	@$(DOCKER) obj/$(FILE)/$(FILE).o
