/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63477
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)22028))));
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 1]);
                arr_7 [i_1] |= ((/* implicit */short) ((long long int) ((((((/* implicit */int) var_1)) ^ (arr_5 [i_0 - 1] [i_1]))) | (min((((/* implicit */int) arr_2 [i_0 - 1])), (arr_0 [i_1] [i_0 + 1]))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */short) ((_Bool) var_3));
    var_21 = ((int) var_16);
    var_22 = ((/* implicit */unsigned long long int) var_18);
}
