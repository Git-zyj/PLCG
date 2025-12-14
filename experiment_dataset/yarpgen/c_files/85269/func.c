/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85269
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
    var_14 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_1] [i_1] [(unsigned char)4] [i_4] = ((/* implicit */signed char) var_13);
                                arr_13 [i_4] [(signed char)8] [(signed char)8] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) (~((-(min((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_2] [i_4] [i_0])), (1803258958U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned short)52291))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967295U)));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) 2491708338U)) : (9223372036854775803LL))))));
                            var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_9 [i_0])))) | (((/* implicit */int) var_9))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_25 [5U] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            arr_26 [i_0] [i_1] [i_1] [i_0] [(unsigned char)1] [i_7] = ((/* implicit */unsigned short) ((unsigned int) arr_19 [(_Bool)1] [i_1]));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_4);
                            arr_29 [i_0] [i_1] [i_0] [i_1] [i_5] [i_8] [i_8] = ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)));
                            arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) ((-9223372036854775804LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8392)))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_8] [i_5] [i_2] [i_1] [i_0])))))));
                        }
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_2] [i_5])) > (((/* implicit */int) var_2)))))));
                        arr_31 [i_0] [(unsigned short)4] [i_0] [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (unsigned char)30)))));
                        arr_32 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57147)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned short)57141))));
                    }
                    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 8; i_10 += 4) 
                        {
                            var_20 += ((unsigned char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_10] [i_10] [i_9] [(unsigned char)0])) == (((/* implicit */int) var_13)))))));
                            arr_37 [i_10 + 1] [i_1] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_36 [i_1]) + (((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)246))))) / ((+(var_1)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_0 [i_10 - 2])))), ((-(((/* implicit */int) var_6)))))))));
                        }
                        arr_38 [i_1] [i_1] = ((/* implicit */short) (+(var_10)));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_1] [i_9] [(signed char)2] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_23 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]), (((/* implicit */short) arr_0 [7U])))))));
                            var_22 = ((/* implicit */unsigned int) var_9);
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)240)), ((unsigned short)6152)));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) (_Bool)1)) > ((-(((/* implicit */int) max((arr_21 [i_2] [i_0] [i_2] [i_1] [i_0]), (((/* implicit */unsigned char) arr_34 [i_12 + 1] [(signed char)0] [(unsigned char)5] [i_0])))))))))));
                            arr_46 [i_0] [i_1] [i_1] [(unsigned char)3] [i_12 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(signed char)0] [i_2]))))) && (((/* implicit */_Bool) 1527428199U)))))));
                        }
                        arr_47 [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215U)) ? (-6650611512605032682LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57144)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_24 [i_9] [(unsigned char)1] [i_0] [(unsigned short)9] [10U] [i_0] [i_0])) / (((/* implicit */int) var_8)))) >= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)246)), (var_7)))))))) : (9223372036854775807LL)));
                    }
                }
                /* vectorizable */
                for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_13] [i_13 - 1] [i_13])) ? (((/* implicit */int) arr_3 [i_13 + 2])) : (((/* implicit */int) arr_3 [i_13 + 2])))))));
                    var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
                    arr_50 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_8 [i_1] [i_13 + 1] [i_13 + 1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_13 + 2] [i_13 - 1] [i_1]))) : (var_10)));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                        {
                            arr_59 [i_16] [i_1] [(unsigned char)8] [i_16] [i_16] |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_34 [i_16] [i_15] [i_1] [i_0])))) == (((/* implicit */int) var_5))));
                            arr_60 [i_0] [i_1] [i_14] [i_15] [i_1] = ((/* implicit */unsigned short) ((4278190081U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_43 [i_16] [i_15] [i_15] [i_1] [i_1] [i_0] [i_0]))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                        {
                            arr_64 [i_1] [i_15] [i_14] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_54 [i_1] [i_1] [i_14] [i_1] [i_17]))));
                            var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_29 = arr_53 [i_1] [i_1] [i_1];
                            arr_68 [i_1] [i_15] [i_15] [i_14] [i_1] [i_1] = ((/* implicit */unsigned int) arr_51 [i_15]);
                        }
                        var_30 = (-(arr_67 [i_1] [i_14] [i_15]));
                        arr_69 [i_1] [i_1] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_8))))) < (((/* implicit */int) var_3))));
                    }
                    for (short i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_5))));
                        var_32 ^= ((/* implicit */unsigned char) var_13);
                        var_33 = ((/* implicit */_Bool) (~(arr_67 [i_14] [i_1] [i_0])));
                        var_34 += var_13;
                    }
                    var_35 = ((/* implicit */unsigned short) 4278190083U);
                    arr_73 [i_1] [i_1] [i_14] = ((/* implicit */unsigned char) var_1);
                }
                arr_74 [i_1] = ((/* implicit */unsigned char) min((((16777224U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_1] [i_1] [i_1] [i_0] [i_1]))))), (((((/* implicit */_Bool) ((arr_39 [i_1] [i_1] [i_1] [i_1] [(signed char)4] [i_1] [i_0]) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (min((((/* implicit */unsigned int) (unsigned char)225)), (var_10))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)154)))))))));
                arr_75 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_48 [i_1])) ? (((/* implicit */int) arr_48 [i_1])) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
