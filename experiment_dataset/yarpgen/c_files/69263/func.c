/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69263
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (unsigned short)8192);
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    arr_9 [i_0] [i_2] [i_1] |= ((/* implicit */unsigned short) arr_0 [(unsigned short)3]);
                    var_11 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1]))) & (max((var_8), (((/* implicit */unsigned long long int) var_10))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) / ((~(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) arr_7 [i_1]));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [(signed char)1] [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) arr_17 [i_0] [i_0]);
                                var_13 += ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_6 = 3; i_6 < 11; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_6] [(unsigned char)4] = ((/* implicit */int) arr_4 [i_6 - 3] [(unsigned short)8] [i_0]);
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) 140737488355328LL))));
                            arr_26 [i_6] [i_0] [i_0] [i_6] [(signed char)9] [i_3] [i_0] = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) <= (arr_10 [i_0] [(short)9] [i_0] [i_0]))));
                        }
                        for (short i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned char) var_8);
                            var_16 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)11581)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_8]))) : (arr_25 [i_1] [i_1] [i_0] [i_8] [i_8] [(_Bool)1] [i_0])))));
                            var_17 = ((unsigned long long int) 4294967295U);
                            arr_30 [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6 - 3] [i_8 + 1] [i_8 + 2])) ? (((/* implicit */int) arr_21 [i_6 - 1] [i_8 + 1] [i_8 - 2])) : (((/* implicit */int) arr_21 [i_6 - 1] [i_8 - 2] [i_8 + 1]))));
                            var_18 *= (unsigned short)11581;
                        }
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 4) 
                    {
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)11572))) ? (((unsigned long long int) 140737488355328LL)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 1) 
                        {
                            arr_37 [i_10 + 3] [i_10 + 3] [i_10 + 3] [5LL] [i_9] [i_10 + 3] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                            arr_38 [i_9] = ((((((/* implicit */_Bool) (short)28389)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_29 [i_0] [6] [i_0] [i_9] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (var_1)))));
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
                            arr_39 [i_0] [i_1] [i_3] [i_0] [i_3] [i_9] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1734381474) : (((/* implicit */int) (unsigned short)53955)))))));
                        }
                        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_21 = var_7;
                            arr_43 [i_9] [i_9] = ((/* implicit */int) (unsigned char)7);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_9] [i_9] [i_3] [i_9] [i_9] [i_1] [i_9] |= ((/* implicit */unsigned short) ((((arr_4 [i_0] [i_1] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1]))))) ? (((/* implicit */int) arr_46 [i_0] [i_9 - 3] [i_0])) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_3]))));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) var_0)))));
                            arr_52 [i_13] [i_9] [i_9] [i_0] [i_13] = ((/* implicit */short) arr_51 [i_3] [i_9] [(signed char)8] [i_1] [i_3]);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)0))) ? (((((/* implicit */_Bool) (short)22270)) ? (((/* implicit */int) arr_3 [i_0] [i_9])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                        var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4290772992U)) ? (((/* implicit */int) (unsigned short)17809)) : (((/* implicit */int) (signed char)-115)))) | (((/* implicit */int) arr_5 [i_1] [i_3] [i_9]))));
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_56 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) var_8);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_60 [i_0] [i_1] [6LL] [i_3] [i_14] [i_14] [9ULL] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_3] [i_15] [i_3] [i_14])) + (((/* implicit */int) arr_32 [(short)6] [i_3] [i_1] [i_0]))));
                            var_26 ^= ((/* implicit */_Bool) (-2147483647 - 1));
                        }
                        var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [10ULL] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
                    }
                }
                arr_61 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) >= (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))))))) ? (((/* implicit */int) (((-(var_1))) >= (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_0] [i_1])), (var_1)))) ? (((/* implicit */int) arr_40 [i_0] [i_0] [2ULL] [i_0] [i_0] [i_0])) : (((((/* implicit */int) var_5)) % (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_28 ^= ((/* implicit */unsigned short) var_6);
    var_29 |= ((/* implicit */unsigned char) ((var_7) % (((/* implicit */long long int) var_4))));
}
