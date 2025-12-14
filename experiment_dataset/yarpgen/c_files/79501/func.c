/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79501
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) (unsigned char)58)) ^ (((/* implicit */int) (short)(-32767 - 1))))))) | (max((var_7), (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)42067)) - (42062)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 - 3] [i_3] [i_0] [i_3 + 1] [i_3] = (unsigned short)37480;
                                var_18 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((var_1), (((/* implicit */unsigned long long int) -1))))))) <= (((arr_5 [i_0] [i_1] [(unsigned short)1] [i_4 - 1]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (44541687U)))), (((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
                                var_20 = (unsigned short)12205;
                                var_21 = ((/* implicit */unsigned int) max(((~(((arr_0 [i_0]) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_15)))))), (arr_10 [i_3] [i_2 - 1] [i_3])));
                            }
                        } 
                    } 
                    arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_0] = ((/* implicit */signed char) arr_5 [13] [i_0 - 1] [i_0 - 1] [(unsigned short)13]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 1885228723);
}
