# Dziedziczenie

C++ inheritance exercise ("dziedziczenie" means inheritance). The base class `Komputer` (computer) has an auto-incremented ID, a name and a static price. `Laptop` (with a Bluetooth flag) and `Serwer` (server, with a NAT flag) derive from it. Each class implements constructors, copy constructors and an `operator<<` for printing. `Source.cpp` creates sample objects and prints them, also through an array of base-class pointers.

## Build & run
Open `Dziedziczenie.sln` in Visual Studio, or:
```bash
g++ Dziedziczenie/*.cpp -o dziedziczenie && ./dziedziczenie
```
