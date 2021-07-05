FROM alpine:3.14
RUN apk add --no-cache gcc musl-dev make

RUN mkdir /app
COPY ./app /app
WORKDIR /app
