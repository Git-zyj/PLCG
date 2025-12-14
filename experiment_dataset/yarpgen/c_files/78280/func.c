/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78280
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) 1949614320U);
        var_15 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))))) >= (arr_0 [i_0])));
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) var_9)) >= (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */int) (signed char)-15)) >= (((/* implicit */int) (((-(arr_0 [i_1 - 2]))) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_1 - 2]), (arr_0 [i_1 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) >= (arr_0 [i_1 - 2]))))) : (max((((/* implicit */long long int) arr_2 [i_1 - 2])), (arr_0 [i_1 - 2])))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_9 [i_1 - 1] [10ULL] [i_1] = ((/* implicit */unsigned int) var_5);
                    arr_10 [i_1] [i_2 - 2] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-15))))) ? (arr_0 [i_3]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_3] [9U] [i_2 - 2] [i_1 - 2]))))))) >= (((/* implicit */long long int) ((/* implicit */int) (short)5145)))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_4] [i_4] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)30327)) >= (((/* implicit */int) (signed char)23))))) >= (min((max((((/* implicit */int) arr_5 [i_1] [i_1 - 2])), (2147483647))), (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2]))))));
                                arr_16 [i_1] [(signed char)2] [(signed char)2] [i_1] [i_5] = ((/* implicit */signed char) arr_2 [i_1 - 3]);
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((min((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_5])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (arr_13 [i_1] [i_2 - 2] [i_3] [i_4] [i_5]))))) >= (((/* implicit */int) (!(((arr_12 [i_5]) >= (var_2)))))))))));
                                arr_17 [i_1] [i_2 - 1] [i_3] [i_3] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 1] [i_3] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (13848789321065775250ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1] [7U] [i_2 - 1] [i_2]))) : (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7964627236568691092LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)64460)) >= (((/* implicit */int) var_5)))))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)64460))))), ((~(arr_1 [i_2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 2; i_6 < 8; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-101)), (((unsigned short) (-(((/* implicit */int) var_12)))))));
                        var_19 = ((/* implicit */unsigned long long int) var_3);
                        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-87)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-95)) >= (((/* implicit */int) (unsigned char)15)))))) : ((((_Bool)1) ? (3695520647U) : (((/* implicit */unsigned int) arr_6 [i_1]))))))));
                    }
                    for (int i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_19 [i_1] [i_2 - 1] [i_2 + 1] [i_3] [i_7] [i_8]))))) : (((((/* implicit */_Bool) var_1)) ? (2775655785362985748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) (unsigned short)1991))), (15671088288346565868ULL)));
                            var_23 = ((/* implicit */int) (signed char)57);
                            arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_7 + 4] [i_8] = ((/* implicit */unsigned long long int) var_1);
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_1] [i_1] [i_2 + 1] [i_3] [i_7] [i_7 - 2]))) ? ((+(((/* implicit */int) min((arr_8 [i_1] [i_2] [i_3] [i_7 + 3]), (((/* implicit */short) arr_2 [i_3]))))))) : (((/* implicit */int) ((var_2) >= (((/* implicit */int) arr_19 [i_1] [(short)6] [(short)6] [i_2 + 1] [i_3] [3ULL])))))));
                        var_25 ^= ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_28 [i_1] [i_9] [i_3] [i_7] [i_9] = ((/* implicit */unsigned long long int) (~(9223372036854775807LL)));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (4294967295U)));
                            arr_29 [i_7 + 2] [i_7 + 3] [i_7 + 3] [8U] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                            var_27 += ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) >= (arr_13 [i_1] [i_2 - 2] [i_1] [i_7 + 2] [i_9]))) ? (((((/* implicit */_Bool) 2930744491U)) ? (((/* implicit */int) (unsigned short)1990)) : (((/* implicit */int) (short)-11845)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (1199266225U))))));
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */short) arr_27 [i_1 - 3] [i_1 - 2] [i_1 - 1]);
                            arr_33 [i_1] [i_1] = ((/* implicit */signed char) max(((!(((((/* implicit */int) arr_26 [i_1] [i_10] [i_3] [i_7])) >= (arr_23 [i_3] [i_7 + 3] [i_10]))))), (((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_4)) : (arr_30 [i_1] [i_2] [i_1] [i_7 + 1] [i_7 + 1]))) >= (((/* implicit */int) arr_32 [i_2] [i_2] [i_1] [i_2 - 2]))))));
                            var_29 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 - 3] [i_2])))))))), (arr_30 [i_2 - 2] [i_2 - 2] [i_7] [11ULL] [i_7 + 1])));
                        }
                        arr_34 [i_1] [i_1] [i_2 - 2] [10LL] [8LL] [i_7] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10300489836331902351ULL)) ? (((/* implicit */int) (short)21064)) : (-2147483647)))) ? (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) arr_8 [i_7] [i_2] [i_2 - 1] [i_7 - 1])) : (((/* implicit */int) (unsigned char)239)))) : (max((((/* implicit */int) (_Bool)1)), (arr_6 [6]))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)18256)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)125)))))));
        arr_39 [i_11 - 2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11] [(unsigned short)4] [i_11 - 2])) ? (arr_37 [i_11 - 2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_11 - 1] [i_11 - 2] [i_11] [i_11 - 3] [i_11 + 1])))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_11 + 1] [i_11 - 3]))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) arr_22 [i_11] [(_Bool)1] [i_11 - 1] [i_11])))), (arr_12 [2ULL])))) : (max((6920100789586852688LL), (((/* implicit */long long int) (signed char)23))))));
    }
    var_31 = ((/* implicit */short) (-(2147483643)));
}
