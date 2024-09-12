#include <cstdlib>
#include <string>

bool DebugOpenMPFlag;
void DebugOpenMPInit() {
    char *DebugStr = getenv("NUMBA_DEBUG_OPENMP_LLVM_PASS");
    DebugOpenMPFlag = false;
    if(DebugStr)
        DebugOpenMPFlag = (std::stoi(DebugStr) >= 1);
}