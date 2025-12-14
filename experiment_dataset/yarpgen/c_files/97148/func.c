/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97148
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                var_16 = ((/* implicit */unsigned long long int) max((arr_0 [i_1] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])))))));
                arr_6 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_15);
    var_18 = ((/* implicit */long long int) min((var_18), (min(((-(((long long int) var_4)))), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_15)))))))));
}
