/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7185
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                var_20 &= ((/* implicit */unsigned char) min((max((((arr_1 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)3))))))), (((/* implicit */unsigned long long int) min((arr_4 [i_0 + 1]), (arr_4 [i_0 - 2]))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_2] [i_0] = ((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((((/* implicit */long long int) 3049981952U)) >= (-3711718029887526560LL)))));
                    arr_9 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) var_17);
                    arr_10 [i_0] [i_0] [i_0] [(short)1] = ((/* implicit */_Bool) ((1244985343U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [14LL])) ? (arr_11 [(short)8] [i_1] [i_2] [i_1]) : ((~(((/* implicit */int) (_Bool)1))))));
                                var_22 &= ((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */_Bool) (unsigned char)169)) ? (-3711718029887526583LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (3711718029887526566LL))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_1] [i_0])) ? (arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_2]) : (((/* implicit */int) arr_2 [i_0 - 3] [i_1])))))))));
                }
                arr_16 [i_1] = ((/* implicit */unsigned int) var_18);
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-((~(((/* implicit */int) ((signed char) arr_21 [i_5] [i_6]))))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_7 [i_5] [(short)6] [i_7]);
                            arr_28 [i_5] = ((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */int) (unsigned short)11)) + (((/* implicit */int) arr_0 [(_Bool)1]))))));
                            arr_29 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
