/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97142
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_5) - (var_17)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((483469295U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_16)), (481976813))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < (min((var_7), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) < (max((((/* implicit */unsigned int) arr_0 [4U])), (arr_3 [i_1] [i_4]))))))));
                                arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((var_15) ? (((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2] [(_Bool)1])) ? (var_5) : (arr_12 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2]))) : ((-(812930506U)))));
                                var_22 *= ((/* implicit */unsigned int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44)))));
                            }
                        } 
                    } 
                    var_23 = (-(((/* implicit */int) ((signed char) 872783609U))));
                }
            } 
        } 
    } 
}
