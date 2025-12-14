/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58304
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) var_11);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((unsigned long long int) var_15)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 + 2])) != (((/* implicit */int) arr_5 [i_2 + 2])))))))))));
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(arr_7 [i_2 + 3] [i_2 - 1] [i_2 - 1] [i_2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11704910126343964422ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (6741833947365587171ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned long long int) var_1)), (6741833947365587184ULL))) >> (((((/* implicit */int) var_13)) - (20706))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((long long int) arr_21 [i_4] [i_4] [i_5 + 2] [i_6])) >= (((/* implicit */long long int) ((/* implicit */int) (short)30909)))));
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                            {
                                arr_25 [(short)14] [i_6] [i_5 - 1] [(short)14] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_3]), (arr_11 [i_6])))) ? (((((/* implicit */_Bool) arr_15 [i_7] [i_5 - 2])) ? (((((/* implicit */int) arr_17 [i_7] [(signed char)13] [i_3])) / (arr_18 [i_3] [i_4] [(short)13] [(signed char)11]))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [(short)8] [i_6] [i_7])) != (((/* implicit */int) arr_12 [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7]))) & (11704910126343964409ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [(unsigned short)3] [i_4] [i_4] [i_6] [(unsigned char)6] [i_7])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_12 [i_7]))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) max((arr_14 [i_4] [i_6]), (arr_14 [i_6] [i_5])))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_4))), ((-(var_6)))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [(short)1] [i_6])))))) : (var_5)));
                                var_23 = ((/* implicit */short) (-((-(max((((/* implicit */unsigned long long int) (unsigned char)217)), (11704910126343964415ULL)))))));
                            }
                            for (short i_8 = 3; i_8 < 13; i_8 += 1) /* same iter space */
                            {
                                arr_30 [i_8] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_8] [i_8 + 2] [i_3] [i_5 + 3]))));
                                arr_31 [i_3] [10ULL] [(short)1] [i_8] [10LL] = ((/* implicit */_Bool) ((short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))));
                                arr_32 [i_3] [(signed char)12] [(short)8] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_29 [13ULL] [i_4] [i_5] [i_4]))))), (((((/* implicit */_Bool) 11704910126343964409ULL)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (max((var_6), (((/* implicit */unsigned long long int) ((6741833947365587199ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))))));
                            }
                            for (short i_9 = 3; i_9 < 13; i_9 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_10 [i_3]), (var_2)))), ((-(((/* implicit */int) arr_17 [i_3] [i_9] [i_5]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_9 + 2] [i_4]))))) : (arr_20 [3ULL] [i_9 - 3] [i_5 - 3] [i_5 - 3] [i_5 + 3] [3ULL])));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_9] [i_9 + 1] [(_Bool)1] [i_5 - 3] [i_4]))))) != (max((6741833947365587188ULL), (((/* implicit */unsigned long long int) ((_Bool) (short)31401)))))));
                                var_26 ^= ((/* implicit */unsigned int) (signed char)117);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_10)))))), (min((((/* implicit */unsigned long long int) arr_26 [i_3] [(short)10] [i_5] [i_3] [i_5 + 2] [i_4] [i_9])), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_19 [i_9] [i_6] [(unsigned short)6] [(unsigned short)8])) : (6741833947365587222ULL))))))))));
                                arr_35 [2ULL] [i_6] [i_5 - 1] [(short)10] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)243))));
                            }
                            /* vectorizable */
                            for (short i_10 = 3; i_10 < 13; i_10 += 1) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_10 - 3] [i_6] [i_4] [(short)11]))));
                                var_29 = ((/* implicit */unsigned long long int) ((unsigned short) 23U));
                            }
                            arr_39 [i_6] [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_5 + 1] [i_6] [i_5 + 1] [i_6] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_37 [(unsigned short)4] [i_5 + 1] [(unsigned short)4] [i_5] [(short)10]))) - (max((((/* implicit */unsigned long long int) arr_27 [i_3] [i_5 + 2] [i_5] [i_6] [i_5 + 2])), (arr_37 [i_3] [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 1])))));
                        }
                    } 
                } 
                arr_40 [i_3] = ((/* implicit */signed char) var_5);
                arr_41 [i_3] [i_3] [i_4] = ((/* implicit */short) (~(arr_19 [i_4] [(short)9] [i_3] [i_3])));
            }
        } 
    } 
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) var_10))) - (((/* implicit */int) var_3)))))));
    var_31 *= ((/* implicit */signed char) var_3);
}
