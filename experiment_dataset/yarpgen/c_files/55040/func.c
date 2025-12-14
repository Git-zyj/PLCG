/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55040
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) 2040008400U);
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_4])))))));
                                arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4] [i_0 - 1] |= ((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_2 + 3] [i_2 + 4] [i_4]);
                                var_22 = ((/* implicit */unsigned char) (signed char)103);
                                var_23 |= ((/* implicit */short) -1826050948);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_19)));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_3);
}
