/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57619
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
    var_17 &= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_9));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_18 = arr_13 [8LL] [(short)9] [(short)3] [(unsigned char)4] [(short)1];
                                var_19 = var_0;
                                arr_15 [(short)6] [7LL] [(short)10] [(unsigned char)8] [(short)5] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((1262155031U) + (1262155031U)))) ? (3032812267U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_4 + 2] [i_1 - 1] [i_3]))))) + ((~(min((3032812256U), (((/* implicit */unsigned int) (short)2326))))))));
                                arr_16 [(unsigned char)7] [(unsigned char)10] [(unsigned char)5] [3U] [i_3] [9LL] = ((/* implicit */short) (+((+(3032812265U)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_15), (1262155032U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [(short)6] [4U] [(short)10] [(short)3] [8LL]), (var_14))))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)8] [(short)8])) ? (1262155027U) : (3956884418U))))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (1262155048U)))))))));
                    var_22 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [i_5 + 2] [i_1 + 2])))) + (max((((((/* implicit */_Bool) 1262155053U)) ? (((/* implicit */int) arr_4 [(unsigned char)9] [(short)4] [(short)3])) : (((/* implicit */int) var_16)))), (((/* implicit */int) var_3))))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    arr_21 [(short)3] [(unsigned char)3] [6U] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_6 [(unsigned char)6] [(short)0] [5U] [(unsigned char)2])))) ? (((((/* implicit */_Bool) 3032812256U)) ? (((/* implicit */int) (short)-9288)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)10] [6U] [(unsigned char)6]))))))) + ((+((+(((/* implicit */int) arr_13 [(unsigned char)2] [1U] [(short)2] [(unsigned char)3] [(unsigned char)4]))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_0 - 1] [4U])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_1 - 1] [i_0 - 1])) / (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 + 2] [i_0 - 1])))))));
                    var_24 = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [8U] [i_1 + 1] [i_6] [i_6] [(unsigned char)1]))) / (min((3032812255U), (1262155033U))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 1]))) * (((3032812251U) / (1262155030U))))));
                    var_25 |= 3032812256U;
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_1] &= var_10;
                    var_26 += ((/* implicit */unsigned int) min(((~(((((/* implicit */int) var_1)) + (((/* implicit */int) arr_9 [(short)10] [(unsigned char)1] [9U] [2U] [(unsigned char)0])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((((/* implicit */_Bool) arr_17 [3U] [1U] [2U])) ? (((/* implicit */int) arr_3 [(short)6] [10U] [(short)1])) : (((/* implicit */int) arr_4 [10U] [3U] [(short)10]))))))));
                    var_27 = arr_22 [i_7] [(unsigned char)2] [5U] [(unsigned char)2];
                    var_28 = ((/* implicit */unsigned char) 3139774195U);
                }
                for (short i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1262155047U))));
                    var_30 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)44)), (3032812263U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (max(((~(var_0))), (((((/* implicit */_Bool) arr_26 [(short)1] [5U] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9LL] [2LL] [(short)0]))) : (338082878U)))))));
                    arr_27 [0U] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 338082875U)) ? (3956884420U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18751)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [(short)6] [i_8 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13688)))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((max((arr_18 [(short)8] [(short)6] [(short)9]), (((/* implicit */unsigned int) (short)13688)))) + (((((/* implicit */_Bool) 3956884409U)) ? (3956884416U) : (3956884430U))))))));
                    arr_28 [(short)6] [(unsigned char)5] [(short)6] [i_8] = ((/* implicit */unsigned char) var_8);
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    arr_32 [10U] [(unsigned char)2] [8U] [(short)7] = ((/* implicit */long long int) arr_14 [2U] [i_1]);
                    var_32 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)18765))))) + (((-9223372036854775786LL) + (((((/* implicit */_Bool) (short)13688)) ? (2705856121675751602LL) : (((/* implicit */long long int) 3956884429U))))))));
                    arr_33 [6U] [(short)10] = max(((((!(((/* implicit */_Bool) arr_31 [(short)5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)8] [i_0 - 2] [(short)5] [i_1 - 2] [5LL]))) : (((((/* implicit */_Bool) (unsigned char)44)) ? (1262155047U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))), (var_0));
                }
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 8; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        {
                            arr_40 [(short)10] [i_1] &= ((/* implicit */unsigned int) var_13);
                            arr_41 [3LL] [i_11] [0U] [1U] [(unsigned char)5] [(unsigned char)9] = ((/* implicit */long long int) arr_9 [(unsigned char)5] [4LL] [2U] [9U] [9U]);
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (short)-25166))));
                            /* LoopSeq 2 */
                            for (unsigned char i_12 = 2; i_12 < 9; i_12 += 2) 
                            {
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) min((var_4), (max((((/* implicit */unsigned int) arr_43 [(unsigned char)9] [(short)9] [(short)7] [(short)7] [10LL] [i_12 - 2])), (var_8))))))));
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)11826))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0 + 1] [i_1 - 2] [i_10 + 1]))))) : (((((/* implicit */int) arr_34 [i_0 - 1] [i_1 + 1] [i_10 + 2])) + (((/* implicit */int) arr_34 [i_0 - 2] [i_1 + 1] [i_10 + 3]))))));
                                var_36 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (max((((/* implicit */unsigned int) (short)13669)), (1262155027U))));
                            }
                            /* vectorizable */
                            for (short i_13 = 2; i_13 < 8; i_13 += 3) 
                            {
                                arr_48 [(unsigned char)7] [2LL] [i_11] [5LL] [(short)10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-18771)) + (((/* implicit */int) arr_38 [(unsigned char)5] [i_11])))))));
                                arr_49 [(unsigned char)0] [10U] [(short)7] [6U] [i_11] = ((/* implicit */unsigned int) (+(((arr_36 [1U] [5LL] [i_11] [7U] [1U] [(short)5]) + (((/* implicit */long long int) ((/* implicit */int) (short)-18726)))))));
                                var_37 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_38 [2U] [i_1]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) (unsigned char)105);
    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (var_15)))))) ? (((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13687))) : (var_7))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned char)14)) + (((/* implicit */int) (short)28)))) : (((/* implicit */int) (unsigned char)255))))))))));
}
