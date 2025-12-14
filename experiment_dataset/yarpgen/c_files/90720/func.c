/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90720
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
    var_14 &= ((/* implicit */_Bool) (signed char)19);
    var_15 -= var_11;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 -= (+(var_11));
                    arr_9 [i_2 - 2] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (3591171615U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))) : (var_5))), (((/* implicit */unsigned int) ((arr_7 [i_0]) * (((/* implicit */int) arr_5 [i_0] [i_1 + 1])))))));
                    var_17 &= ((/* implicit */unsigned int) ((var_12) & (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ^ (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                }
            } 
        } 
    } 
}
