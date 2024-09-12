#ifdef NDEBUG

#define DEBUG_ENABLE(X)
#define DebugOpenMPInit()

#else

extern bool DebugOpenMPFlag;
void DebugOpenMPInit();

#define DEBUG_ENABLE(X)                                                        \
    do {                                                                       \
        if (DebugOpenMPFlag) {                                                       \
            X;                                                                 \
        }                                                                      \
    } while (false)

#endif
