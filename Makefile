hello_world:
	mkdir -p build
	gcc ./src/main.c -o ./build/hello_world
	./build/hello_world
