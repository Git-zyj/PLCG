/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87667
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (1546308045851517144LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181))))) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (1546308045851517144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) max((arr_0 [i_1 - 1] [i_1]), (arr_0 [i_1 + 1] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) (+(arr_2 [i_0] [i_1 - 1] [1])));
                        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)63815)), (arr_6 [i_0])));
                        var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)74)));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_1] = var_8;
                        arr_13 [i_1] [22ULL] [5] [22ULL] [i_2] [i_0] = arr_2 [i_0] [(short)7] [(unsigned short)16];
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)181)) | (var_8)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-75))))) : (((((/* implicit */_Bool) 1948198607U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1546308045851517144LL)))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)88)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (arr_5 [i_0 + 1] [i_1] [i_5]) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) 3438991703U)))), (((unsigned long long int) arr_2 [i_0] [i_2 - 1] [i_0]))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_7))))));
                            arr_23 [i_1] [i_2] [i_1] = ((((arr_17 [i_1] [i_1 + 1] [i_1] [i_1 - 1]) & (arr_17 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_1 + 1] [i_1] [i_1 - 1])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_7] [i_1] [i_0] [i_2 + 3] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */int) var_7)) / (arr_15 [i_7] [(unsigned char)18])))) | (max((arr_3 [i_1]), (((/* implicit */long long int) (unsigned char)74)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)16384)))))));
                            arr_28 [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_8)))) ? (max((arr_5 [22LL] [i_1] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) var_10)))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (signed char)120))));
                            var_21 = var_6;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1])))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_2] [i_2])) << (((((/* implicit */int) arr_25 [i_0] [i_1])) - (132))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2] [i_2 + 2])) ? (arr_21 [i_2 + 3] [i_2 + 3] [i_2 + 1]) : (((/* implicit */long long int) -14895307))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_1] [9LL] [i_2] = (+(((/* implicit */int) ((signed char) -1806946255))));
                        arr_35 [i_0 + 1] [i_1] [i_1] [(signed char)2] [i_9] = ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) 14895312)) : (33030144U))) << (((((((/* implicit */_Bool) arr_26 [1])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))) + (2))));
                        arr_36 [i_0] [i_1] [22] [i_1] = ((/* implicit */_Bool) (((+(var_9))) / (((/* implicit */long long int) ((/* implicit */int) (short)11829)))));
                    }
                    var_25 *= ((/* implicit */short) var_10);
                    arr_37 [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_26 [i_0 + 2]))) | (((((/* implicit */_Bool) (((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)88))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (unsigned short)65520))))))));
                    arr_38 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 - 2] [i_0] [i_1])), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_31 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_2 + 1] [0U])) : (((/* implicit */int) arr_31 [i_0 - 2] [i_0 - 1] [i_1] [i_1] [11U] [i_2] [i_2]))))) : ((+(arr_32 [i_2 - 1] [i_1] [i_2 + 1]))));
                    var_26 ^= ((/* implicit */_Bool) -2147483643);
                }
                for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_48 [i_0] [i_1] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((14895320), (-14895307)))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_14 [i_10] [11])), (var_5))))) : (((/* implicit */int) (short)-16412))));
                                var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) max((5141019254818060960LL), (((/* implicit */long long int) (signed char)108)))))), ((+(arr_30 [i_0 - 1] [i_1] [i_1 - 1] [i_10 - 1] [i_10 - 2])))));
                                arr_49 [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                                var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)168))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        arr_52 [i_0] [i_0] [i_1] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_29 [(unsigned char)4] [(unsigned char)4] [i_10 - 2] [i_13] [i_1]), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1 + 1] [i_1 + 1]))) : (((arr_32 [(unsigned short)16] [(unsigned short)16] [(unsigned short)16]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25055)))) || (((/* implicit */_Bool) min(((unsigned short)40478), ((unsigned short)0))))))))));
                        var_29 = ((/* implicit */unsigned short) var_2);
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [10] [i_13])) ? (arr_20 [(_Bool)0] [i_1 + 1] [i_10 - 2] [i_13] [i_13] [i_1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1] [i_10])))))), (arr_44 [i_0] [i_0] [i_13] [i_13] [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) (unsigned short)45443))))) ? (max((1546308045851517129LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1 + 1] [i_1] [i_0])))))))) : (var_9))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */short) (~(arr_15 [i_0] [i_0])));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) max((-1546521627), (((/* implicit */int) ((unsigned char) arr_41 [i_0 - 1] [i_10] [(unsigned char)0]))))))));
                        var_33 &= ((/* implicit */unsigned long long int) (unsigned short)40480);
                    }
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (unsigned char)168))));
                        var_35 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_10 - 2] [i_15] [i_10 - 2] [i_10 - 2] [9LL])) ? (((/* implicit */int) max((var_1), (((/* implicit */signed char) var_3))))) : (max((arr_15 [i_0] [i_1]), (var_2)))))), (-5141019254818060961LL)));
                        arr_58 [i_0 - 1] [i_15] [2] [i_15] |= ((/* implicit */short) ((5656264633381640788ULL) ^ (((/* implicit */unsigned long long int) (((!(var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) (short)6441)))))))));
                    }
                }
            }
        } 
    } 
    var_36 = (-(((/* implicit */int) var_3)));
}
