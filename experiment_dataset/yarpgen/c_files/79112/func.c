/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79112
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [i_1 - 1] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-22804)) * (((/* implicit */int) (short)32767))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0] [(short)9] [i_2])))))));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_2] [i_4 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_4])))))));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_5] [i_1 + 1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)1]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_1 - 1])) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [i_3] [i_5] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_16 [i_0] [i_0] [(signed char)9] [i_2] [(signed char)12] [(signed char)12] [i_5]))))));
                            arr_18 [1U] [(signed char)8] [i_3] [i_5] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [10U] [10U] [i_5])))))));
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) / (arr_7 [(short)12])))) ? (((((/* implicit */_Bool) (short)22804)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (signed char)-124)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_5] [12LL])) : (((/* implicit */int) arr_5 [i_0]))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_15 += ((/* implicit */signed char) (+((~(((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [(unsigned char)7]))))));
                            var_16 = ((/* implicit */unsigned char) arr_16 [i_6] [i_1 + 1] [(short)6] [i_2] [i_1 + 1] [i_1] [i_0]);
                            arr_23 [i_3] [(unsigned char)12] [i_2] [i_3] [i_3] [i_0] &= ((/* implicit */unsigned char) ((arr_7 [i_1]) / (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_6])))))));
                            arr_24 [i_0] [i_1] [i_0] [(unsigned char)11] [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(0LL))))));
                        }
                        arr_25 [i_1] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_3] [i_0] [i_3]))))));
                    }
                    arr_26 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_2] [(unsigned char)1] [i_1] [i_0])) * ((~(((/* implicit */int) (signed char)-112))))));
                }
            } 
        } 
    } 
    var_17 = var_0;
}
