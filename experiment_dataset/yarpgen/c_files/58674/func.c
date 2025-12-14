/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58674
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) < (((unsigned long long int) arr_0 [i_0]))));
                var_15 -= ((/* implicit */unsigned int) arr_3 [4ULL] [0ULL]);
            }
        } 
    } 
}
