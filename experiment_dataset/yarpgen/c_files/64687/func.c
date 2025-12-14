/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64687
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (9671494999255749039ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22010)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 1])) || (((/* implicit */_Bool) arr_4 [i_2 + 1]))));
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_7 [i_2 + 1] [(short)17]) : ((-(arr_7 [i_0] [i_0])))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)-12396))) ? (((long long int) arr_10 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_0])) >= (((/* implicit */int) arr_11 [i_0] [i_2] [i_3]))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2 + 1] [15U]))));
                    }
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [1U])) ? (((arr_6 [(signed char)12] [i_1] [(_Bool)1]) / (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1]))));
                    arr_14 [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])) ? (arr_9 [i_2 - 1] [i_2 + 1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_11 [(signed char)20] [(short)16] [i_2]))))) < (arr_8 [i_0] [i_2 + 1] [i_2] [i_1])));
                        arr_17 [i_0] [(_Bool)0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [0LL]))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned short)23] [i_5]);
                        arr_20 [i_0] [7LL] [i_2 + 1] [(short)18] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_8 [i_0] [(unsigned short)6] [i_0] [i_0]) == (((/* implicit */unsigned long long int) arr_4 [i_5])))))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_1] [9LL]));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7 + 3] [(unsigned char)15]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_9 [i_0] [i_7 + 2] [i_7] [(_Bool)1])))) ? (((/* implicit */int) arr_18 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_19 [i_8] [i_7 + 2] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_28 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7 + 3] [i_7 + 3] [i_7]));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_7] [i_7 - 1] [i_10]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned short)8]))) + (arr_9 [i_6] [(unsigned char)24] [i_7] [i_7])))));
                        /* LoopSeq 4 */
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_23 -= ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_11] [i_6])))) * (((/* implicit */int) arr_1 [i_7 - 1]))));
                            var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_11] [i_10] [i_7]))));
                            arr_34 [i_0] [i_0] [i_7] [i_0] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_7] [i_10] [i_11] [i_7 + 2]) : (arr_15 [(signed char)23] [i_0] [i_7] [(unsigned char)9] [i_11] [i_7 + 2])));
                        }
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_38 [i_10] [i_7 + 1] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8)) ^ (((/* implicit */int) (short)6060))));
                            var_25 = ((/* implicit */_Bool) ((arr_3 [i_7 + 3] [i_7 + 3] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 4] [i_7] [i_7 + 2])))));
                            arr_39 [i_0] [i_0] [6U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_7 + 3] [i_7 + 2] [i_7 + 3])) ? (arr_3 [i_7 - 1] [i_7 + 1] [i_7 + 4]) : (arr_3 [i_7 + 4] [i_7 + 1] [i_7 + 1])));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) arr_16 [i_0] [(unsigned char)5])) : (((/* implicit */int) arr_19 [i_0] [i_6] [i_7] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 + 1]))) : (arr_4 [i_7 + 1]))))));
                            arr_40 [(short)17] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((arr_6 [i_7 + 1] [6LL] [(unsigned char)7]) / (((/* implicit */int) arr_27 [i_12] [i_6])))) >> (((/* implicit */int) ((arr_31 [i_12] [6U] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_6] [i_0]))))))));
                        }
                        for (short i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (short)-14517))))) ? (((((/* implicit */_Bool) arr_22 [i_10] [i_10] [(unsigned char)20])) ? (arr_15 [i_0] [i_6] [i_6] [i_7] [9U] [(short)19]) : (arr_15 [i_0] [(short)18] [i_7 + 2] [i_10] [(short)11] [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43533)) ? (((/* implicit */int) (short)6069)) : (((/* implicit */int) (short)6081)))))));
                            var_28 -= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_29 [i_0] [i_6] [i_7] [(short)6] [(signed char)16] [(_Bool)1] [i_13 + 3])) ? (((/* implicit */int) arr_27 [i_0] [i_6])) : (((/* implicit */int) arr_30 [17LL] [i_7] [i_6] [(unsigned char)24]))))));
                        }
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_43 [i_0] [(short)5])))) >= (((arr_0 [i_14]) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [15LL] [i_14])))))));
                            arr_46 [i_0] [i_6] [i_7 + 3] [i_10] [(unsigned char)10] [i_0] = ((/* implicit */unsigned int) ((((arr_6 [i_6] [20LL] [(signed char)19]) < (((/* implicit */int) arr_35 [(short)5] [(short)5] [14U] [i_10] [(unsigned char)22])))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0])) >= (arr_6 [i_0] [i_0] [i_7 + 3])))) : ((+(((/* implicit */int) arr_36 [i_0]))))));
                            arr_47 [i_0] [i_0] [i_14] [i_10] [i_14] = ((/* implicit */int) arr_8 [i_0] [i_7 - 1] [i_7] [i_10]);
                            arr_48 [i_14] [(signed char)20] [(signed char)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [i_7 - 1]))) : (arr_31 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 2])));
                        }
                        /* LoopSeq 2 */
                        for (int i_15 = 2; i_15 < 22; i_15 += 3) 
                        {
                            arr_52 [i_15] [i_6] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [(signed char)0] [i_10] [i_15 - 2])))) ? (((/* implicit */int) arr_26 [i_0] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_1 [i_10]))));
                            arr_53 [i_15] [i_6] [i_7 + 2] [i_10] [i_10] [(signed char)1] [i_15 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_6] [3U])) && (((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_6] [i_7] [i_10] [i_15 + 3])))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_6] [(signed char)20] [i_10] [(unsigned char)12]))))) + ((-(((/* implicit */int) arr_1 [i_7])))))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((arr_0 [i_7 + 4]) < (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7 + 3] [i_7 + 3]))))))));
                        }
                        for (unsigned char i_16 = 3; i_16 < 23; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_32 [i_7 - 1] [i_7 + 2] [i_16 + 2] [i_16 + 1] [i_16 - 1])) % (((long long int) arr_22 [i_7] [i_10] [i_16 - 2]))));
                            arr_56 [i_16] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_16 - 2] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_45 [i_10] [i_10] [i_10] [i_10] [i_10])) : (arr_43 [i_7] [i_7 - 1])));
                            arr_57 [i_0] [i_6] [i_0] [i_0] [i_16] [6ULL] = ((/* implicit */short) (+(((/* implicit */int) arr_27 [19U] [i_6]))));
                        }
                    }
                    var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 4] [i_7 + 1] [i_7 + 4])) ? (((/* implicit */int) arr_51 [i_7 - 1] [4LL] [i_7] [(short)20] [i_7] [i_7 - 1])) : (arr_43 [i_7 + 3] [i_7 + 3])));
                }
            } 
        } 
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((_Bool) (_Bool)1)))));
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((arr_43 [(unsigned short)5] [i_0]) ^ ((-(((/* implicit */int) arr_21 [i_0] [i_0] [i_0])))))))));
    }
}
