/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89553
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (((((/* implicit */unsigned long long int) arr_4 [i_3])) / (arr_13 [i_0] [(signed char)6] [i_2] [i_3] [i_4] [5U])))));
                                var_20 = ((/* implicit */signed char) arr_8 [i_0] [18U]);
                            }
                            for (short i_5 = 1; i_5 < 21; i_5 += 2) 
                            {
                                var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [11U] [i_3] [i_1] [i_0]))))) ? (((arr_8 [i_1] [i_2]) & (((/* implicit */unsigned long long int) -1566970908191996136LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_0 [i_5 + 1]))))));
                                var_22 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (+(var_6)))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_16 [(signed char)6] [i_1] [i_1] [1ULL] [i_3] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))))) - (((/* implicit */unsigned long long int) var_1))));
                                var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_14 [i_5] [i_3] [i_2] [0ULL] [i_0])))) < (arr_1 [i_5 + 1] [i_5 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [(signed char)16] [i_1] [i_5]))) : (((((unsigned int) arr_7 [(signed char)19])) >> (((((((arr_15 [i_2] [6LL] [6LL] [i_2] [(signed char)6] [i_3] [i_2]) + (9223372036854775807LL))) >> (((arr_8 [i_1] [i_0]) - (16093663392967481449ULL))))) - (288LL)))))));
                                var_24 ^= (+((~(min((((/* implicit */unsigned long long int) var_12)), (arr_13 [(signed char)10] [(signed char)20] [i_2] [i_1] [i_1] [(signed char)3]))))));
                            }
                            for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                            {
                                var_25 = ((/* implicit */signed char) var_12);
                                var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 17934909013821482420ULL)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(signed char)3] [i_6])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [3U]))))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((unsigned long long int) (-(var_14)))) != (arr_8 [i_1] [16ULL]))))));
                                var_28 = ((/* implicit */long long int) arr_7 [i_1]);
                            }
                            for (int i_7 = 4; i_7 < 20; i_7 += 4) 
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */int) arr_10 [20] [i_1])), (arr_4 [i_0]))))) : (((((/* implicit */int) var_7)) << (((((arr_9 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (16357891086227200114ULL)))))));
                                arr_24 [i_0] [i_1] [i_2] [i_3] [7] = arr_4 [i_0];
                            }
                            arr_25 [i_0] [i_0] [1ULL] [i_0] = ((/* implicit */signed char) max((min((((unsigned long long int) (short)15)), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_17 [i_0] [i_1] [i_2] [i_2] [i_3])))))), (((/* implicit */unsigned long long int) (+(min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (short)28974)))))))));
                            arr_26 [i_0] [3ULL] [(signed char)10] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)97)), ((~(((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [11ULL] [i_0])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0])))))))));
                        }
                    } 
                } 
                var_30 = ((262128) - (((/* implicit */int) (signed char)-1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (long long int i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (int i_11 = 3; i_11 < 10; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (arr_42 [i_11 - 3] [i_9] [(signed char)10]))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_10]))))) ? (((/* implicit */unsigned long long int) arr_14 [19] [i_9 - 1] [3LL] [i_11 + 1] [19])) : ((+(18446744073709551606ULL)))));
                                var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1566970908191996121LL))));
                                var_34 = ((/* implicit */unsigned int) arr_21 [i_8] [i_10] [i_12]);
                                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_12])) ? (511835059888069195ULL) : (arr_9 [i_8]))))) ? (arr_40 [i_8] [i_8] [i_10] [i_9] [i_8] [(signed char)3]) : (min((min((((/* implicit */unsigned int) arr_14 [i_8] [i_8] [i_10] [i_10] [i_12])), (arr_37 [i_8] [i_9] [i_9] [(short)5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_9])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_15 = 2; i_15 < 9; i_15 += 4) 
                            {
                                arr_53 [i_15] [i_15] [i_13] [i_9] [i_13] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_15 + 1] [i_13 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) arr_14 [i_15] [i_15] [(signed char)3] [i_15] [i_15])) ? (-1566970908191996121LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_9] [i_9 + 1])) ? (arr_1 [i_9] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((arr_1 [i_8] [i_9 - 2]) >> (((arr_1 [i_9] [i_9 + 1]) - (1378606838U))))))))));
                            }
                            /* vectorizable */
                            for (short i_16 = 2; i_16 < 8; i_16 += 4) 
                            {
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (arr_38 [5ULL] [3ULL] [i_16 + 1] [i_16])));
                                arr_57 [i_8] [i_9] [i_13] [i_14] [(signed char)1] [i_9] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (short)-22905))));
                            }
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_28 [i_13]))));
                            /* LoopSeq 4 */
                            for (int i_17 = 1; i_17 < 9; i_17 += 4) 
                            {
                                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((/* implicit */int) var_13)))))));
                                var_40 ^= ((/* implicit */int) ((-1566970908191996121LL) + (((/* implicit */long long int) 1384001930U))));
                            }
                            for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 4) 
                            {
                                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_9] [i_13] [i_8] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((arr_22 [i_8] [i_9] [i_8] [i_8] [i_8]) - (((/* implicit */long long int) arr_11 [i_9] [i_13]))))) : (arr_38 [i_9] [i_13] [i_14] [i_18]))))))));
                                var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) arr_14 [i_8] [i_9] [i_13] [i_8] [i_18]))) ? (((/* implicit */long long int) arr_11 [i_8] [(signed char)11])) : (arr_15 [i_8] [i_18 + 2] [(short)9] [i_9 - 2] [i_18 + 2] [i_18] [i_18]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_8] [i_9] [i_13] [i_13] [i_18])) < ((~(arr_31 [i_8] [i_8] [i_13]))))))));
                            }
                            /* vectorizable */
                            for (short i_19 = 3; i_19 < 10; i_19 += 1) 
                            {
                                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_19] [i_19 - 2] [(short)14] [i_14] [i_13 - 3] [i_9 + 1] [(signed char)19])) || (((/* implicit */_Bool) arr_20 [19] [i_19 - 1] [9ULL] [i_19] [i_13 - 1] [i_9 - 2] [i_8]))));
                                var_44 ^= var_16;
                                var_45 = ((/* implicit */unsigned long long int) max((var_45), (arr_48 [i_13 - 1] [10ULL] [(short)0] [10ULL] [i_19 - 2] [i_9])));
                                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(18446744073709551606ULL)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_19])))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 3) 
                            {
                                arr_68 [(signed char)6] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_45 [i_13] [i_13] [5])) ? (arr_62 [i_8] [i_9] [4LL] [i_14] [i_14] [i_20]) : (var_8))));
                                var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_8] [10ULL] [i_14])) ? (((/* implicit */int) arr_39 [i_14] [(short)4])) : (((/* implicit */int) arr_43 [i_8] [i_14] [8ULL]))))))));
                                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_20] [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1])) ? (16677226557606609733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))));
                                var_49 = ((/* implicit */short) arr_14 [i_8] [i_9] [i_9 - 2] [i_13 - 1] [i_20 - 1]);
                                var_50 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_13 + 1]))));
                            }
                            var_51 |= ((/* implicit */short) min((13377948537515857941ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_9] [i_14] [i_14])))))));
                        }
                    } 
                } 
                arr_69 [i_8] [i_9] = 3345026981973789345ULL;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            for (unsigned int i_23 = 2; i_23 < 7; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_21] [0ULL] [i_23] [21LL] [6ULL] [i_23 + 2] [5ULL])), (min((((/* implicit */int) var_10)), (arr_52 [i_21] [1ULL] [i_23] [7] [i_25])))))) <= (((((/* implicit */_Bool) 34359738367ULL)) ? (12757044652077842014ULL) : (((/* implicit */unsigned long long int) 4294967280U))))));
                                var_53 ^= (-(((arr_78 [i_23] [8ULL] [i_23] [i_23 + 2]) / (((/* implicit */unsigned long long int) arr_61 [10ULL] [i_22] [i_23] [i_23 + 2] [i_25] [i_21] [i_23])))));
                                var_54 |= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_20 [i_25] [3ULL] [i_23] [i_22] [i_21] [i_21] [i_21])) + (1071)))))) | (((var_14) << (((((/* implicit */int) arr_18 [12] [14] [i_22] [i_23] [i_24] [i_24] [i_25])) - (11)))))))));
                                var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_21] [i_22] [i_23] [(signed char)7]))))))))))));
                                var_56 = ((/* implicit */long long int) arr_49 [i_21] [10ULL] [i_23] [i_23] [6ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_26 = 1; i_26 < 8; i_26 += 1) 
                    {
                        for (signed char i_27 = 2; i_27 < 9; i_27 += 3) 
                        {
                            {
                                var_57 = ((/* implicit */signed char) max((10ULL), (13877421644791567303ULL)));
                                var_58 = ((/* implicit */int) arr_84 [i_21] [i_22] [i_22] [i_26] [i_22] [i_22]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_28 = 0; i_28 < 10; i_28 += 2) 
        {
            for (signed char i_29 = 4; i_29 < 9; i_29 += 4) 
            {
                {
                    var_59 = ((/* implicit */unsigned int) arr_66 [i_21] [i_21] [i_29] [i_29 + 1] [i_21] [i_29]);
                    /* LoopNest 2 */
                    for (unsigned int i_30 = 0; i_30 < 10; i_30 += 4) 
                    {
                        for (long long int i_31 = 0; i_31 < 10; i_31 += 4) 
                        {
                            {
                                var_60 = arr_60 [(signed char)4] [(signed char)4];
                                var_61 = (((!(((/* implicit */_Bool) arr_23 [i_21] [i_28] [i_29] [i_31] [i_29 + 1])))) ? (arr_23 [i_21] [i_21] [i_29] [i_30] [i_29 - 1]) : (((((/* implicit */_Bool) arr_23 [i_21] [i_28] [i_21] [i_21] [i_29 + 1])) ? (arr_23 [i_21] [i_28] [21U] [21U] [i_29 - 4]) : (arr_23 [i_21] [i_28] [i_30] [i_30] [i_29 - 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_32 = 0; i_32 < 19; i_32 += 4) 
    {
        var_62 = ((/* implicit */unsigned int) var_6);
        var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) arr_21 [i_32] [i_32] [19ULL]))));
        var_64 = ((/* implicit */signed char) 16677226557606609733ULL);
    }
}
