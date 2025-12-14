/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99001
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = 31ULL;
                var_16 = ((/* implicit */unsigned short) ((31ULL) >> (((((/* implicit */int) (signed char)122)) - (62)))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) 2673492993U)) ? ((+(31ULL))) : (((18446744073709551585ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
