/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66463
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [18] [(short)16] [i_1] [i_2] &= ((/* implicit */_Bool) ((short) min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((unsigned short) arr_2 [i_1 - 1])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_14 [i_3] [i_0] [i_2] [i_0] = ((/* implicit */short) (((+((+((-9223372036854775807LL - 1LL)))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) ((unsigned char) arr_7 [i_2] [i_0 + 1])))))))));
                        var_14 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-(arr_12 [i_0])))))));
                        arr_15 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_20 [6] [i_2] [i_1] [6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1])))) ? ((-(((/* implicit */int) ((unsigned short) arr_5 [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [14U] [14U]))))))));
                        arr_21 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                    {
                        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min(((unsigned short)0), ((unsigned short)62))))) ? (((unsigned int) ((unsigned short) arr_10 [i_5] [i_2] [i_1] [10U]))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -6509099625443209046LL)) ? (((/* implicit */int) (unsigned short)57762)) : (var_9))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_12))));
                            arr_30 [i_0] [i_1 - 1] = arr_23 [i_6] [i_1];
                            var_17 = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) % (arr_2 [i_2])))), (max((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned short)16]))))), (min((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))))));
                            var_18 |= var_3;
                            arr_31 [i_6] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_11);
                        }
                        for (unsigned int i_7 = 2; i_7 < 24; i_7 += 4) 
                        {
                            arr_34 [i_7] [i_5] [i_0] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */int) ((short) min((arr_22 [i_7 - 2] [i_1 + 1] [i_0 - 1] [i_0]), (arr_22 [i_7 - 2] [i_1 + 1] [i_0 + 1] [i_0]))));
                            var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 + 1] [i_0] [4ULL]))) : (var_5))));
                            var_20 = ((/* implicit */int) ((unsigned long long int) (~(arr_26 [i_2 + 3] [i_2 + 2] [i_2] [i_2]))));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_5] [i_7 - 2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (arr_12 [i_1 + 1]) : (arr_12 [i_0 + 1]))) * (((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_12 [i_0 - 1]) : (((/* implicit */unsigned long long int) 0U))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
                            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [(unsigned short)6] [i_5] [23ULL] [i_5]))) ^ (min((arr_26 [i_8 + 1] [(signed char)7] [i_1] [i_0 + 1]), (((/* implicit */long long int) arr_5 [i_0] [i_5]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        arr_41 [i_0 + 1] [i_1] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_0] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_0]))));
                        arr_42 [i_0] = ((/* implicit */unsigned int) arr_28 [i_2 + 1] [i_2 + 2] [i_2] [i_2]);
                        var_23 = ((/* implicit */unsigned int) ((arr_7 [i_2 + 3] [i_0 + 1]) > (arr_7 [i_2 + 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                    {
                        arr_47 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_10] = arr_28 [i_10] [i_2] [i_1 - 1] [i_0];
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                        var_25 &= ((/* implicit */unsigned int) arr_39 [i_10] [i_2 + 2] [i_1] [i_0 + 1]);
                        arr_48 [15LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_28 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775782LL))) + (43LL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_26 ^= ((/* implicit */int) (unsigned char)255);
                                var_27 = ((/* implicit */short) ((min((9223372036854775807LL), (((/* implicit */long long int) 8184U)))) | (((/* implicit */long long int) ((int) arr_4 [i_0] [i_1 + 1])))));
                                var_28 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_36 [i_0 + 1] [i_0 - 1])) ? (arr_36 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) 8388607)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_51 [i_0] [i_1 + 1] [i_12])))) + (((unsigned int) (-9223372036854775807LL - 1LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = -8388607;
}
