/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84182
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
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((max((arr_5 [i_0 + 1] [i_1]), (arr_5 [i_1 - 4] [i_1 - 4]))), (max((arr_2 [i_0 + 1]), (((/* implicit */int) (short)(-32767 - 1)))))));
                    var_15 = ((/* implicit */unsigned short) ((var_9) * (((/* implicit */unsigned long long int) ((arr_4 [i_1 - 4] [i_1] [i_2 + 1]) - (((/* implicit */long long int) arr_6 [i_0])))))));
                    var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1941485560)) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_11))));
}
