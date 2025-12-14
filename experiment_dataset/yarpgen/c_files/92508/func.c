/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92508
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
    var_12 = ((var_9) + (((((/* implicit */_Bool) var_1)) ? (((var_3) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)65518)))) : (var_9))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [(short)1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) var_11)) : (var_5))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [23] [14] [i_0] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))));
                                arr_15 [2LL] [2LL] [2LL] [2LL] [i_1] [i_1] [2LL] |= (~(((/* implicit */int) var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
