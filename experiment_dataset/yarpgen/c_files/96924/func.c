/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96924
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (((unsigned int) (~(var_18))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 *= ((unsigned short) arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [24U])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3 + 4])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_3 + 2])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_3 + 1])))))));
                            arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) var_4);
                            var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_4 [i_1 - 1] [i_2 - 2]), (max((((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_2])), (var_8))))))));
                            arr_14 [i_1] = ((/* implicit */signed char) ((unsigned int) max((min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_1])), (var_18))), (min((arr_2 [i_0] [i_0]), (arr_8 [i_3] [i_3] [i_3] [i_1]))))));
                            arr_15 [i_1] [i_1] = (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (min((var_11), (((/* implicit */unsigned int) (signed char)19)))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_1 + 1] [0U]))) & (2024699797U))), (min((((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1 + 1] [i_0] [(signed char)6])), (2024699797U)))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) var_4))), (((unsigned short) var_15))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) / (var_3))) : (var_0)));
}
