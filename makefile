all:
	mkdir Fib/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r Fib
run:
	cd Fib && ./FIB


