/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99477
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
    var_20 = ((/* implicit */unsigned int) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) max((var_14), (var_15)))) ? (max((1773674939089651587LL), (2725948484847568330LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46973)) ? (((/* implicit */int) (unsigned short)35131)) : (((/* implicit */int) (unsigned short)33809)))))))));
    var_21 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) var_16)), (min((1773674939089651587LL), (((/* implicit */long long int) (unsigned short)31726))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_0 [i_0]))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                    var_24 = var_3;
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned int) var_17);
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 4] [i_0 + 1])) : (((/* implicit */int) var_16))));
                            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-39)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_20 [(signed char)2] [i_0] [(signed char)11] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0])) == (((/* implicit */int) var_4))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_11 [i_0] [i_0 + 4] [i_0] [i_0 + 3]))));
                            var_29 = ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) var_7);
                            arr_29 [i_0] = ((/* implicit */signed char) ((arr_5 [i_0]) || (arr_5 [i_0])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) var_2);
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_3] [i_0 + 3] [i_0 + 2] [12LL] [i_0 + 3])) | (((/* implicit */int) arr_19 [i_2] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 4]))));
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)14] [i_9] [i_10])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_33 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2]))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [(signed char)8] [(signed char)8] [i_2] [i_9] [i_10])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_36 [8U] [i_10] [i_9] [(unsigned char)4] [i_1] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_38 [i_0] [i_10]))));
                            var_35 = ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_0] [i_9]);
                        }
                        for (unsigned short i_11 = 2; i_11 < 11; i_11 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3346379804U)) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64079))) : (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_2] [i_9] [(unsigned short)0] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_0])))))));
                            arr_42 [i_9] [i_9] [i_0] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_11] [i_11 + 3] [i_11 + 3] [i_11] [i_11])) < (((/* implicit */int) arr_24 [i_0] [i_1] [i_0 + 1] [i_9] [i_11 + 2] [i_1]))));
                            var_37 = ((/* implicit */unsigned char) arr_16 [i_11]);
                            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)45)) ? (((((/* implicit */int) (unsigned short)46758)) - (((/* implicit */int) (unsigned short)4095)))) : (((/* implicit */int) (signed char)45))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3372600142897194165LL)) ? (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)125)))) : (((/* implicit */int) (signed char)-104))));
                            arr_45 [i_0] [i_1] [i_2] [i_9] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_12] [i_12]))));
                            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_2] [i_13])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) : ((((_Bool)0) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        var_43 = ((/* implicit */signed char) (unsigned char)72);
                    }
                }
                arr_48 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)115), (((/* implicit */unsigned char) arr_26 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_27 [i_0] [i_1])))))) : (((/* implicit */int) max((arr_35 [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 4]), (arr_35 [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 4]))))));
            }
        } 
    } 
    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((var_5) ? (max((((/* implicit */long long int) (unsigned char)178)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
