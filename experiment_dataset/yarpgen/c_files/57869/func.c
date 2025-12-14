/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57869
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
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) / ((+(var_0)))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (var_8))) : (var_10)));
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_1), (var_5)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (var_13))))) < (var_2))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (~((((~(var_11))) & (min((arr_0 [i_0]), (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!((((+(((/* implicit */int) arr_1 [i_0 - 1])))) != (arr_2 [i_0] [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) (+((-((-(var_11)))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_5))));
        var_20 -= ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) : (((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1])))) ? (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1]) == (arr_5 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_4] [i_3] [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_4])))))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_2 - 2] [i_4])), (max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_9 [(signed char)12] [i_2 + 1] [i_2] [i_2 + 3])) ? (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_11 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_4] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_4])))))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_12))))) && (((/* implicit */_Bool) (~(arr_11 [2] [i_2] [i_2 + 4])))))), (((((((/* implicit */_Bool) var_0)) ? (arr_9 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) arr_7 [i_1] [i_4])))) < (min((((/* implicit */int) arr_10 [i_4] [i_4])), (arr_9 [i_1] [i_1] [(unsigned short)11] [i_1]))))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (~(arr_8 [i_1] [i_2] [i_2])))), (arr_11 [i_2 + 1] [i_5] [i_5]))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_5] [i_2] [i_3]))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_5] [i_3] [16LL])) ? (var_10) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [9ULL] [i_5] [i_1])))))))))));
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [(unsigned short)1] [i_3] [i_3] [i_2] [i_3] [i_3])) <= (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_2] [i_3] [i_5])))))));
                        var_26 |= ((/* implicit */unsigned long long int) (~((~(((arr_8 [i_1] [i_2] [i_3]) >> (((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) - (1329615008)))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(arr_16 [2] [i_2] [i_3] [i_6])))) ? (arr_8 [i_6] [i_2] [i_2]) : ((-(arr_8 [i_1] [i_3] [i_6])))))));
                        arr_18 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) var_7);
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2 - 1] [i_2 + 3] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_17 [i_2] [i_2 + 1] [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_17 [(short)14] [i_2 + 1] [i_2] [i_2])))) : (((((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 3] [i_6] [i_6] [i_2] [i_2])) * (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2] [i_2])))))))));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) var_6);
                        var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_3] [i_7])) : (var_0)))) ? (((/* implicit */unsigned long long int) (((+(arr_9 [i_7] [i_3] [i_2 + 3] [i_1]))) / (((/* implicit */int) arr_10 [i_7] [i_2]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_2])))))) + (max((((/* implicit */unsigned long long int) arr_7 [i_7] [i_7])), (var_0)))))));
                    }
                }
            } 
        } 
        var_31 ^= ((/* implicit */short) min((max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_9 [20] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) (+(arr_9 [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_28 [(signed char)0] [i_8] [i_9] = ((/* implicit */unsigned short) var_11);
                    var_32 = ((/* implicit */unsigned short) max((var_32), (arr_19 [i_1] [i_1] [i_8] [i_9])));
                    arr_29 [i_1] [i_8] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (arr_6 [i_1] [i_8])))) ? (((/* implicit */unsigned long long int) min((arr_20 [i_1] [i_8] [i_8 - 1] [i_8] [i_8] [i_8]), (((/* implicit */int) arr_21 [i_8] [i_9]))))) : (((arr_15 [i_1] [i_8]) & (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
                    var_33 = ((/* implicit */unsigned short) ((min((((arr_15 [i_8 - 2] [i_9]) >= (((/* implicit */unsigned long long int) var_11)))), ((!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_1] [10LL] [i_8] [i_1] [i_8])), (arr_16 [i_8] [i_8] [i_1] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_9])) ? (((/* implicit */int) arr_17 [i_1] [i_8] [i_8] [i_9])) : (((/* implicit */int) arr_12 [i_1] [i_8] [(signed char)10] [i_1] [i_9] [i_9]))))))) : (((min((var_0), (((/* implicit */unsigned long long int) var_11)))) << ((((+(arr_5 [i_9]))) + (7468843821109725437LL)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10]))) : (arr_15 [i_10] [i_12])))) ? ((-(arr_8 [i_11] [i_11] [i_12]))) : (((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_13 [i_10] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1]))));
                        var_36 *= ((((/* implicit */_Bool) arr_26 [i_11])) ? (arr_36 [i_10] [i_13] [i_12]) : (((/* implicit */unsigned long long int) ((arr_13 [i_10] [i_11] [i_11] [i_12] [i_13]) - (((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_13]))))));
                        arr_42 [i_10] [i_11] = ((/* implicit */unsigned short) ((((arr_26 [i_10]) ^ (((/* implicit */unsigned long long int) arr_40 [i_11] [i_11] [i_11] [i_11 + 1])))) | (var_10)));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) arr_2 [i_10] [i_14])) * (arr_15 [i_12] [15]))))))));
                        var_38 = ((/* implicit */unsigned short) arr_11 [i_11 + 1] [i_12] [i_14]);
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            {
                                arr_52 [i_10] [i_11] [i_12] [i_15] [i_11] = (~(arr_9 [i_11] [i_11 - 1] [i_12] [i_15]));
                                var_39 = ((arr_6 [i_11 + 1] [i_15]) | (arr_6 [i_11 + 1] [i_11]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_59 [i_10] [i_11] [i_11] [2ULL] [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_34 [i_11])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_12] [i_11])))))));
                            var_40 = (-(((((/* implicit */_Bool) var_2)) ? (arr_6 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                        }
                        for (unsigned long long int i_19 = 3; i_19 < 9; i_19 += 2) 
                        {
                            var_41 *= ((/* implicit */short) ((arr_13 [i_10] [i_19 + 2] [i_12] [i_17] [i_11 - 1]) << (((arr_13 [i_10] [i_19 - 3] [i_12] [i_17] [i_11 + 1]) - (1329615017)))));
                            var_42 = ((/* implicit */unsigned short) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_11 + 1] [i_11] [i_11] [i_11])))));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_57 [i_10] [i_10] [i_10] [i_11 + 1] [i_11 + 1]))));
                            arr_65 [i_20] [i_17] &= arr_25 [i_10] [i_20];
                        }
                        var_44 = ((/* implicit */signed char) ((((arr_36 [i_10] [i_11] [i_10]) << (((arr_40 [i_10] [i_11] [i_12] [i_10]) + (251536429))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            arr_68 [i_10] [i_11] [(unsigned short)8] [i_17] [i_21] [i_21] [i_21] = (~(arr_40 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11]));
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) (~(var_2)))))))));
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_10] [i_11 - 1] [i_12] [i_21])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_12])))))) ? (((/* implicit */int) arr_46 [i_11] [(unsigned short)0] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_17 [i_10] [i_12] [i_17] [i_21]))));
                        }
                        var_47 += (-(arr_26 [i_17]));
                    }
                    var_48 = ((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11]);
                }
            } 
        } 
        arr_69 [i_10] [i_10] = ((/* implicit */int) ((((arr_22 [i_10]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((var_2) << (((((/* implicit */int) arr_21 [i_10] [i_10])) - (20101))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (arr_60 [i_10] [6ULL] [6ULL] [i_10]) : (((/* implicit */int) var_1)))))));
        var_49 = ((/* implicit */unsigned long long int) arr_19 [i_10] [i_10] [i_10] [i_10]);
    }
}
