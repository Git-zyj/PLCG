/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56848
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
    var_18 = ((/* implicit */_Bool) (-(var_14)));
    var_19 &= ((/* implicit */unsigned int) min(((~(max((((/* implicit */long long int) var_7)), (var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8388607U)) ? (8388588U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [(short)18] = ((/* implicit */signed char) (+(min(((~(var_10))), (((((/* implicit */_Bool) 4286578689U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)24]))) : (var_1)))))));
                var_20 = ((/* implicit */signed char) 8388607U);
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [(unsigned short)9]))))), (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 8388608U);
            }
        } 
    } 
}
