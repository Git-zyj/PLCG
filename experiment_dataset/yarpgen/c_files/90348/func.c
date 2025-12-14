/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90348
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = var_16;
                    var_20 ^= ((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    var_21 = ((((752956948U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) - (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_16), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
    var_23 = ((/* implicit */unsigned short) ((var_9) - (((/* implicit */long long int) max((((/* implicit */int) (short)13979)), (729731037))))));
}
