/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89757
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_7)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))) * ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) (-((-(arr_8 [i_0] [i_1] [i_1] [i_2])))))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                    arr_10 [(unsigned short)5] [i_1] [i_2] = (+(arr_5 [i_0] [i_1] [i_2]));
                    arr_11 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) 977455608);
                    var_17 = ((/* implicit */unsigned short) max((max((var_6), (((/* implicit */unsigned long long int) (+(arr_7 [i_0 + 1] [14] [i_0] [16])))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_3 [(short)8] [i_1])), (arr_0 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (((/* implicit */int) (signed char)-98))))))))));
                }
                for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_3);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21555)) ? (((/* implicit */long long int) 2186683760U)) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_6 [(signed char)11] [i_4])) ? (arr_5 [i_0] [16ULL] [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_3])), (var_10)))))) : (((/* implicit */unsigned long long int) arr_18 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0] [6]))));
                                arr_21 [i_0] [7LL] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5]);
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */long long int) (-((-(2108283535U)))));
                    var_21 = ((/* implicit */unsigned long long int) var_3);
                }
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        var_22 |= var_4;
                        var_23 = ((/* implicit */unsigned int) arr_14 [10LL] [i_1] [i_1] [i_1]);
                        var_24 |= ((/* implicit */short) var_5);
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(arr_2 [i_0 + 2] [i_6 - 3])));
                        var_26 = ((/* implicit */unsigned long long int) arr_13 [i_0] [(_Bool)1] [i_0] [i_1]);
                    }
                    arr_29 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((arr_5 [i_0] [i_0 + 1] [i_6 - 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_6 - 3] [i_6] [15ULL]))))))));
                        arr_32 [i_0] [i_1] [i_6] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2499338613U)) ? (2108283505U) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (2186683761U)))));
                    }
                    var_28 |= ((/* implicit */short) arr_8 [i_0 - 1] [i_1] [i_6] [i_6 + 1]);
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 + 2] [i_6 + 1] [i_0 + 2]))) < (arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_6])));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    arr_40 [i_12] [i_11] = ((/* implicit */signed char) min((arr_34 [(_Bool)0] [i_12]), (((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_10])) != (((/* implicit */int) var_12))))), (arr_36 [i_10] [i_10] [i_10 - 1]))))));
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_43 [i_13] = ((/* implicit */int) var_3);
                        var_30 = ((/* implicit */unsigned long long int) arr_35 [i_10]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_10] [i_10 + 1])) ? (var_11) : (arr_41 [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_11] [i_10] [i_10 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((var_6), (max((((/* implicit */unsigned long long int) arr_33 [i_14])), (var_9))))));
                        var_32 = 15378104744500277091ULL;
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_10] [i_14])) ? (min((var_6), (((/* implicit */unsigned long long int) arr_36 [i_10 - 2] [i_10 - 1] [i_10])))) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) arr_42 [i_12] [i_11]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_16 = 1; i_16 < 18; i_16 += 2) 
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */long long int) (~(arr_50 [i_16])))) / (arr_42 [i_16 + 1] [(unsigned char)0])));
                            var_35 = ((/* implicit */signed char) arr_41 [i_16] [i_16] [(unsigned char)16] [i_10] [(signed char)0] [i_16]);
                        }
                        var_36 = ((/* implicit */unsigned short) arr_41 [i_15] [i_15] [i_15] [i_11] [i_15] [i_15]);
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            var_37 = ((/* implicit */int) ((var_6) >> (((var_8) + (8265785394128695568LL)))));
                            var_38 = ((/* implicit */unsigned short) var_4);
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_10 + 1] [(unsigned char)2] [i_10 + 1] [i_10])) && (((/* implicit */_Bool) arr_44 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10]))));
                            var_40 = ((/* implicit */unsigned char) var_2);
                        }
                        /* LoopSeq 3 */
                        for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            arr_59 [i_19] [i_17] [i_12] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((4062538338933475358LL) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned char)0] [(signed char)16] [(unsigned char)0] [i_17 + 1]))))))));
                            var_41 = ((/* implicit */long long int) arr_38 [(unsigned short)12]);
                            var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                            var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -977455600))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 20; i_20 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned int) arr_45 [i_20] [i_17] [i_12] [(_Bool)1] [i_10]);
                            var_45 = ((/* implicit */long long int) arr_54 [i_10]);
                        }
                        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            arr_65 [i_21] [(unsigned short)3] [(short)16] [i_10] [i_21] = ((/* implicit */int) var_4);
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((15378104744500277091ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (5681975245855343887ULL))))))))));
                        }
                        var_47 |= arr_38 [i_17];
                        arr_66 [i_10] = ((/* implicit */unsigned long long int) (signed char)-70);
                        arr_67 [i_17 - 1] [1ULL] = ((/* implicit */unsigned int) arr_58 [i_17 - 1] [i_12] [i_11]);
                    }
                    var_48 = var_8;
                    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_61 [i_10] [i_11] [i_11] [i_11] [i_12] [i_11])) ? (((/* implicit */int) ((((/* implicit */int) arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) != (((/* implicit */int) arr_62 [i_10] [i_10] [i_10] [i_11] [i_11] [i_12]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (var_10))))))))));
                }
            } 
        } 
    } 
}
