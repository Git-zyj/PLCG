/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9449
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
    var_14 -= var_13;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((unsigned long long int) (!(((/* implicit */_Bool) 2862867523400487697ULL)))))));
                    var_16 = 0ULL;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min(((((+(15583876550309063917ULL))) * (15583876550309063891ULL))), (var_9)))));
}
