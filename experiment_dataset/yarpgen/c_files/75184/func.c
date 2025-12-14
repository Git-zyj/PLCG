/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75184
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16170))) == (18289676430370088597ULL)))), (((var_9) - (18289676430370088608ULL))))))))));
                var_16 += ((/* implicit */unsigned short) var_0);
                var_17 = ((/* implicit */int) max((var_17), ((-(-1931039178)))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_8))));
    var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
}
