# Low-Latency C++ & HFT Systems Lab

Welcome to my 90-day intensive technical learning journey focused on Modern C++17, Linux systems programming, micro-benchmarking, and quant execution engine architectures.

## 📁 Repository Structure

- `01-binary-parser/`: Low-level binary file inspection utility (`hexdump`) & ELF memory segment mapping.
- `02-memory-layout/`: C++ Memory 4-Area Layout analysis (`Stack`, `Heap`, `.data`, `.text`) and physical address inspection.
- `03-branch-prediction/`: Hardware-aware CPU instruction pipeline & branch prediction micro-benchmarks.

## 🛠️ Toolchain & Environment
- **OS**: Linux (Ubuntu 22.04 LTS / WSL2)
- **Compiler**: GCC/g++ (C++17 standard) with `-O2 -Wall -Wextra`
- **Profiling & Debugging**: GDB, Linux `perf`, Valgrind, AddressSanitizer (ASan)

## 📌 Daily Learning Progress & Log
- **Day 01-03**: Built zero-copy `hexdump` tool; analyzed ELF headers.
- **Day 04**: Explored Stack vs. Heap allocation dynamics and pointer/reference internals.