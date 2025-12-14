/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85549
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
    var_17 = ((/* implicit */short) (((((+(((/* implicit */int) var_11)))) + (2147483647))) >> (((max((((/* implicit */long long int) max((var_7), (var_5)))), (((long long int) var_13)))) - (32026LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = arr_0 [(unsigned short)0];
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_19 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1] [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_4 [i_1]))))))));
                    var_21 = ((/* implicit */unsigned short) (+(((unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    var_22 = ((/* implicit */signed char) var_4);
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_23 = ((/* implicit */short) var_12);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_24 = (((~(((/* implicit */int) arr_4 [i_0 - 1])))) - (min((min((((/* implicit */int) arr_8 [i_1] [i_4])), (var_6))), (((/* implicit */int) arr_3 [i_0 - 1])))));
                        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ^ (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) + (-2710867468442234867LL)));
                        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) arr_1 [i_3] [(short)5]);
                    }
                    var_26 = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_5] [i_6] = (+(((/* implicit */int) var_16)));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) (+(2710867468442234866LL)));
                            var_28 = ((/* implicit */signed char) min((((((var_2) | (((/* implicit */unsigned long long int) var_15)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))), (((unsigned long long int) arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]))));
                            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) arr_3 [i_0 + 1])))))));
                            arr_24 [i_7] [i_6] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */signed char) var_6);
                            var_30 = ((/* implicit */unsigned int) (signed char)1);
                        }
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) var_0);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) var_0))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0 - 1] [i_0 + 1])) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_5] [i_6] [i_6] [i_8]))) > (((var_8) << (((/* implicit */int) arr_18 [i_0 + 1] [i_5] [i_5] [i_5])))))))));
                            var_34 *= ((unsigned char) arr_22 [i_0] [i_1] [(signed char)16] [i_6]);
                        }
                        var_35 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_6] [(short)12] [i_6] [i_6] [i_6] [i_6])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_4 [i_1])))))))), (max((((/* implicit */long long int) var_6)), ((+(var_15)))))));
                        arr_28 [i_0] [i_0 + 1] [i_1] [(unsigned short)5] [(short)12] [i_6] = ((/* implicit */unsigned char) var_6);
                        var_36 = ((/* implicit */unsigned int) arr_18 [i_6] [(signed char)8] [i_0 - 1] [i_0 - 1]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((-2710867468442234867LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [4ULL])))))) * (((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [6LL] [i_0 - 1]))))), (arr_2 [i_0 + 1])));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)58))) > (((/* implicit */int) ((short) arr_27 [i_0 + 1] [i_0 + 1])))));
                        var_39 = ((/* implicit */short) (_Bool)0);
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        var_41 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_30 [(signed char)11] [(signed char)11] [i_5] [i_5] [i_5])))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) arr_26 [8U] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                            var_43 = arr_0 [(_Bool)1];
                            var_44 = ((/* implicit */short) var_4);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_40 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) arr_38 [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_0 - 1]);
                            var_45 ^= ((/* implicit */int) var_15);
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_14))));
                            var_47 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_10] [i_12]);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            var_48 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_13] [i_0 - 1] [(short)6] [i_10]))));
                            arr_43 [i_0] [i_0] [i_0] [i_13] [i_13] [i_1] = (!(((((/* implicit */int) arr_15 [i_0])) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))));
                            var_49 = ((/* implicit */long long int) arr_6 [i_0] [(short)4] [(signed char)7] [i_0 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_50 = ((/* implicit */short) (~(((/* implicit */int) var_16))));
                        arr_47 [(signed char)16] [i_1] [i_5] [(unsigned char)4] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))));
                    }
                    arr_48 [i_0 - 1] [i_0] [i_0 - 1] [(signed char)16] = ((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    var_51 = ((/* implicit */short) max(((-(((/* implicit */int) arr_27 [i_0] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_0 - 1] [i_1] [i_1]))) >= (-8064048013574764992LL))))));
                    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) arr_37 [i_0]))));
                }
            }
        } 
    } 
}
