/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62606
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_1 + 1] [i_3] [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2]);
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_3 - 2])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_3 - 1]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1 - 1] [i_1 + 1] [i_3 - 1]), (arr_6 [i_1 - 1] [i_1 - 1] [i_3 - 1])))))));
                                arr_13 [i_0] [i_0] [(short)12] [i_3 - 3] [i_4] = ((/* implicit */short) (((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) | (6529711420312383965LL))))) ^ ((~(arr_0 [i_1 + 1])))));
                                var_12 = ((/* implicit */unsigned char) (~(arr_4 [i_0] [i_2])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_5] [i_6 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_5] [i_6]))));
                            arr_21 [12LL] [i_1] [i_0] = ((/* implicit */long long int) (~(min(((+(5740230617106347519ULL))), (5740230617106347507ULL)))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -654324527782536900LL)) && (((/* implicit */_Bool) max((14621567693073113173ULL), (var_1))))))) * (((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_1] [i_6 - 2] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_6]))))) ? (((((/* implicit */_Bool) 4916862298076795964ULL)) ? (((/* implicit */int) (unsigned short)41485)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))));
                            var_14 = ((/* implicit */short) ((max((14621567693073113175ULL), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((unsigned int) var_7)))));
                            arr_22 [i_6 - 2] [i_5 + 3] [i_1 + 1] [i_0] = ((/* implicit */long long int) (+(max((3825176380636438443ULL), (3825176380636438437ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 17; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_28 [i_9 - 1] [i_10] [i_10])), (arr_27 [i_9 + 1] [i_9] [i_10])))) ? (max((var_11), (((/* implicit */long long int) arr_32 [i_9 + 1] [i_9] [i_10])))) : (((var_3) - (arr_27 [i_9 - 1] [13] [i_10])))));
                        var_17 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_9 - 1]))))), (((arr_25 [i_9 + 1]) + (((/* implicit */long long int) arr_32 [i_8] [i_9 - 1] [i_10]))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        arr_38 [i_7] [i_7] [i_9] [i_9] [i_9] [16LL] = ((/* implicit */unsigned long long int) 2244509388U);
                        arr_39 [i_11] [i_11] [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)34928)))) ? (arr_34 [i_7]) : (((/* implicit */unsigned long long int) ((arr_24 [i_7] [i_7]) & (((/* implicit */int) arr_23 [3LL] [i_9 + 1])))))))) ? (min((((/* implicit */long long int) arr_36 [i_9 - 1] [i_11] [i_11] [i_11])), (((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [10LL] [(unsigned short)2] [i_9]))) : (arr_25 [i_11]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1689278604) : (((/* implicit */int) arr_36 [i_11] [i_8] [i_9 - 1] [i_11])))) : (((/* implicit */int) (short)22010)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [i_12] [i_12] [i_8]))) < (var_3)));
                        arr_42 [i_7] [i_7] [i_7] [i_7] [i_12] = ((/* implicit */_Bool) (unsigned short)64);
                        arr_43 [i_7] [(unsigned char)16] [i_7] = ((/* implicit */int) 3825176380636438443ULL);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */unsigned int) arr_41 [i_9 + 1] [i_9 - 1] [i_9 - 1])) : (arr_35 [i_9 + 1] [i_9 - 1] [i_9 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) /* same iter space */
                        {
                            var_20 *= ((/* implicit */short) (+(max(((-(var_4))), (max((6400539820615796093LL), (((/* implicit */long long int) arr_47 [i_14] [i_9] [i_9]))))))));
                            var_21 = ((/* implicit */short) arr_35 [i_7] [i_7] [i_7]);
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-21986))));
                            var_23 = arr_30 [i_7] [i_8] [i_8] [(_Bool)1];
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_29 [i_8] [i_8])) : (((/* implicit */int) var_2))))) || ((!(var_7))));
                            var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_8]))) == (var_9)));
                            var_26 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_32 [i_7] [i_7] [i_7])))) + (arr_32 [i_7] [i_9 + 1] [i_7])));
                        }
                        var_27 -= ((/* implicit */int) ((min((min((((/* implicit */unsigned long long int) (unsigned short)0)), (3825176380636438437ULL))), (((/* implicit */unsigned long long int) arr_51 [i_7] [(unsigned short)3] [i_9] [i_13] [i_13])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (var_0) : (((/* implicit */long long int) arr_24 [i_9] [i_9 - 1])))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_37 [2LL] [i_9 + 1] [0] [0]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_18 = 2; i_18 < 15; i_18 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned short) arr_52 [i_7] [i_7] [i_7] [(unsigned char)4]);
                            arr_57 [i_18] [i_18] [i_18 + 3] [i_18 + 1] [i_18 + 2] = ((/* implicit */unsigned short) (((-(var_1))) / (((/* implicit */unsigned long long int) (-(var_0))))));
                            var_30 = ((/* implicit */unsigned int) (+(arr_56 [i_18 - 1] [i_18] [i_18] [i_18] [i_18 + 1])));
                        }
                        for (short i_19 = 1; i_19 < 16; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_19 + 1] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-7661703789071175374LL) > (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_9 + 1] [i_7] [i_19 + 1]))))))) : (arr_37 [i_7] [7U] [i_9 - 1] [13LL])));
                            var_32 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) arr_28 [i_9 + 1] [i_19 + 1] [i_9]))));
                            arr_61 [i_17] [12LL] [i_19] [i_17] [i_8] = ((((((/* implicit */_Bool) arr_48 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_7] [i_19 + 2])) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_58 [i_8] [i_8] [i_9] [i_19] [i_9] [i_19 + 1] [12ULL])) ? (((/* implicit */int) arr_48 [i_7] [i_19 + 1] [i_9 + 1] [i_17] [i_19])) : (((/* implicit */int) arr_59 [i_8] [i_8] [i_9 + 1] [i_17] [i_19 + 1] [i_19] [12])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_59 [i_7] [i_8] [i_9 - 1] [i_17] [i_19] [i_19] [i_7])))));
                        }
                        var_33 = ((/* implicit */long long int) arr_29 [i_17] [i_7]);
                        var_34 = ((/* implicit */long long int) max(((-(((6794723713540317528ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10276))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_54 [i_9 - 1] [i_9 - 1] [i_17] [(unsigned char)1])))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) max((2244509393U), (((/* implicit */unsigned int) var_5))))) : (((var_1) + (var_1))))) ^ (((/* implicit */unsigned long long int) max((var_4), (var_9)))));
    var_36 = ((/* implicit */long long int) var_6);
}
