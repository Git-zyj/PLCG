/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79777
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16388769824256123732ULL)) ? (1600844612) : (((/* implicit */int) var_1))))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))) ? (((/* implicit */int) (unsigned char)107)) : (((((/* implicit */_Bool) max((var_6), (12897805335052620773ULL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min(((unsigned char)149), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)134))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_6))) : (((((/* implicit */_Bool) 5548938738656930843ULL)) ? (5548938738656930814ULL) : (8025527165983483454ULL)))));
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-12383)) : (1600844598)))), (((long long int) var_2))));
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) 1600305192))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) var_4);
        arr_9 [i_2] = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (var_9) : (3902530078U)))) : (((((/* implicit */_Bool) 12897805335052620766ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (arr_6 [i_4])))));
            var_16 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_4]))));
            arr_17 [i_3] [i_4] |= ((((/* implicit */_Bool) arr_7 [i_4])) ? (var_3) : (-1731386857));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_4]);
                        arr_25 [(short)9] [i_4] [(short)2] [3ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_14 [i_6] [i_4] [2LL]))))));
                        arr_26 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) arr_21 [5] [(unsigned char)1] [i_5] [i_6]);
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)126))) / (arr_14 [i_3] [i_4] [i_5])));
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) (signed char)57)) : (var_5)))) ? ((+(4967770847228401401LL))) : (arr_19 [i_3] [i_3] [i_3] [(signed char)0])));
    }
    var_19 *= ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_8)))))) ? ((-(max((var_8), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) / (127ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-12961))))) : (max((4220825193U), (((/* implicit */unsigned int) var_2))))))));
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 8; i_7 += 3) 
    {
        for (int i_8 = 3; i_8 < 7; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 7; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)148)) / (((/* implicit */int) arr_30 [i_8] [i_8] [i_8 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) 1945482938U)) || (((/* implicit */_Bool) arr_21 [i_7] [i_8] [i_9] [i_10])))) ? (((/* implicit */int) ((3760826198U) == (var_4)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-101)), (var_11))))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) ((unsigned int) ((arr_14 [i_7] [i_8] [i_10]) >> (((((/* implicit */int) (short)12960)) - (12917))))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned char) var_3)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                        {
                            {
                                arr_44 [i_13] [i_7] [i_11] [i_7] [i_7] &= ((/* implicit */int) arr_40 [7LL] [i_11] [i_13] [i_13] [i_13 + 1]);
                                arr_45 [i_11] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7 + 2]))) ^ (arr_19 [i_13 + 1] [i_8 + 1] [i_8 + 3] [i_7 - 2])));
                                arr_46 [i_7 - 1] [i_7] [i_7] [i_7] [5ULL] = ((/* implicit */short) arr_13 [(short)2]);
                            }
                        } 
                    } 
                    arr_47 [i_7] [i_8] [i_11] = arr_38 [i_7] [i_8] [i_11];
                }
                for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    arr_50 [i_8] [i_8] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) -1600844598))) ? (((-1600844598) ^ (((/* implicit */int) (short)-16812)))) : (((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) var_1))));
                    arr_51 [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_7] [i_8 - 2] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1600844629)) ? (((/* implicit */int) ((signed char) arr_13 [i_8 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7] [i_8 + 3] [(unsigned char)9])) || (((/* implicit */_Bool) (short)18506)))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_7 - 2])) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (signed char)37))))) % (max((-3279219742343683788LL), (((/* implicit */long long int) -710168677))))))));
                    var_23 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) arr_49 [1U] [1U])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1600844633)))))));
                    var_24 = min(((~(-132467559906962694LL))), (max((arr_31 [(signed char)8] [i_8] [i_8] [i_8]), (min((arr_14 [i_7] [i_7] [6]), (((/* implicit */long long int) arr_10 [i_7 + 2] [i_7 + 2])))))));
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            {
                                arr_58 [i_7] [i_8] [i_8] [i_16] [i_15] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((min((((/* implicit */int) arr_3 [i_15])), (-1600844620))), ((~(((/* implicit */int) arr_1 [i_17]))))))), (((((/* implicit */_Bool) (+(0ULL)))) ? (max((((/* implicit */long long int) (unsigned char)186)), (arr_38 [i_7] [i_8] [i_16]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (601702193U))))))));
                                var_26 = ((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7]);
                                var_27 = ((/* implicit */long long int) var_3);
                                var_28 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_7] [i_7] [i_15] [i_16] [i_17] [i_15] [9ULL]))))) % (arr_23 [(unsigned char)0] [(unsigned char)3] [i_8])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_37 [i_7] [8ULL] [9LL] [8ULL]))));
                    arr_59 [i_7] [i_7] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_40 [i_7 + 1] [i_7 - 2] [(unsigned char)0] [i_7 - 2] [i_8 - 2])))) ? (((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (signed char)32)) : (-1600844587))) : ((+(((1600844598) << (((((/* implicit */int) (unsigned char)219)) - (219)))))))));
                }
                /* vectorizable */
                for (signed char i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_61 [i_7] [(unsigned char)2] [i_7])) : (((/* implicit */int) var_11))))) ? (((int) 576460752303423488ULL)) : (((/* implicit */int) (signed char)32))));
                    /* LoopSeq 3 */
                    for (signed char i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8489592556560078100LL)) ? (arr_0 [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) arr_57 [i_18] [i_8 + 1])) : (8489592556560078099LL)));
                        var_32 = ((((/* implicit */_Bool) 1934398358338813674ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_18]))) : ((-(arr_43 [3] [i_8] [i_18] [i_18] [i_19]))));
                    }
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((1600844598) >= (((/* implicit */int) arr_33 [i_7 - 1] [i_8 + 2] [7LL] [7LL] [i_20] [i_21]))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_18] [(short)15])))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_10))));
                        }
                        for (unsigned char i_22 = 1; i_22 < 7; i_22 += 3) 
                        {
                            arr_74 [i_18] [i_20] [i_18] [1ULL] [i_18] = ((/* implicit */unsigned long long int) (~(arr_57 [i_18] [i_8])));
                            arr_75 [8LL] [8LL] [(short)3] [i_18] [i_18] [i_22] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)6099)) ? (arr_54 [i_7] [(short)8] [(short)8] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        }
                        for (unsigned int i_23 = 3; i_23 < 6; i_23 += 2) 
                        {
                            arr_78 [i_18] [i_18] [0LL] [i_18] [(unsigned char)3] [8] [i_8] = (+(((((/* implicit */_Bool) -6819376467201001925LL)) ? (arr_29 [i_7]) : (((/* implicit */unsigned long long int) -8489592556560078117LL)))));
                            arr_79 [i_7] [(unsigned char)8] [(unsigned char)8] [i_18] [i_23 + 2] = ((/* implicit */int) arr_10 [i_8 + 3] [i_7 - 1]);
                        }
                        arr_80 [i_18] [(signed char)4] [i_18] [i_18] [i_20] [i_20] = arr_1 [(short)14];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                        {
                            arr_83 [i_8] [i_24] [3ULL] [i_18] [3ULL] [i_8] [(short)4] = ((/* implicit */long long int) ((int) arr_21 [i_8] [i_18] [i_20] [i_24]));
                            var_36 = ((/* implicit */long long int) (~(arr_57 [i_18] [i_8 + 2])));
                        }
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_57 [(signed char)8] [(signed char)8])) - (var_6))) & (((/* implicit */unsigned long long int) (~(var_4)))))))));
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1588087678)) - (arr_71 [i_7 + 1] [i_7] [i_7] [i_7] [3] [i_7] [0LL])))) ? (8489592556560078114LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 60321206)))))));
                        arr_86 [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12960)) ^ (((/* implicit */int) arr_61 [i_8 + 3] [i_7 - 1] [i_7 + 2]))));
                        var_40 *= ((/* implicit */unsigned long long int) (~(2987588731U)));
                    }
                    var_41 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_18] [i_8 - 2] [i_8 + 3] [i_8 + 2] [i_7 + 1] [i_7]))));
                    var_42 = (i_18 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-8489592556560078107LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [i_18])) - (7)))))) ? (arr_34 [i_7 - 2] [i_7 + 2] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((1600844629) / (arr_56 [i_18] [i_8] [i_8] [i_18] [i_18]))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-8489592556560078107LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_3 [i_18])) - (7))) - (2)))))) ? (arr_34 [i_7 - 2] [i_7 + 2] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((1600844629) / (arr_56 [i_18] [i_8] [i_8] [i_18] [i_18])))))));
                }
            }
        } 
    } 
    var_43 |= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (((-1LL) * (((/* implicit */long long int) var_5))))))), ((-(((((-6865298695875823399LL) + (9223372036854775807LL))) >> (((-1907475272) + (1907475329)))))))));
}
