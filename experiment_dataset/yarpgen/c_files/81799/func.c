/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81799
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1570)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)105)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] [21LL] = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (arr_10 [i_1] [i_3] [i_2] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_14 [i_1] [i_1] [i_2 - 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(arr_0 [i_0 + 1] [i_0 + 1])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 3) 
        {
            arr_18 [i_0] [i_5] [i_5 + 1] = ((/* implicit */long long int) (+(arr_2 [i_5])));
            arr_19 [i_5] = ((/* implicit */unsigned short) var_9);
            var_15 = ((/* implicit */long long int) var_11);
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 3; i_7 < 23; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_8] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_7])))) ? ((+(arr_12 [i_0 - 1] [i_7 + 1] [i_0 + 1] [i_7 + 1] [i_7]))) : (((/* implicit */long long int) 4165959194U))));
                        arr_29 [i_7] [i_7 - 2] [i_7 - 1] [i_6] [i_7] = ((/* implicit */short) var_0);
                        var_17 &= ((/* implicit */short) min((var_7), (min((((3918217472U) % (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)112)) : (min((((/* implicit */int) (short)-2253)), (1648766171)))))))));
                    }
                } 
            } 
            var_19 = (+((-(((/* implicit */int) var_13)))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_33 [i_0] = ((/* implicit */_Bool) 17642033467312815259ULL);
            var_20 = ((/* implicit */unsigned int) var_8);
            arr_34 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (short)7080))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_12))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_2))))));
            var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)43668));
        }
        var_22 |= ((/* implicit */_Bool) min((-5879509163001852802LL), (((/* implicit */long long int) (unsigned short)21867))));
    }
    for (unsigned int i_10 = 1; i_10 < 8; i_10 += 4) /* same iter space */
    {
        var_23 = min((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (signed char)94)))))))), ((-((-(434541889U))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)55446)))) ? ((-(((var_0) + (arr_23 [10U] [i_10] [i_10 + 1] [10U]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    }
    for (unsigned int i_11 = 1; i_11 < 8; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        var_25 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_11] [i_12] [i_13] [i_11 + 1])) : (((/* implicit */int) arr_8 [i_11] [i_12] [i_13] [i_11 + 2]))));
                        arr_46 [i_11] [i_12] [i_11] [i_14] = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_26 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                var_27 ^= ((/* implicit */unsigned long long int) var_11);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        {
                            arr_57 [i_11 - 1] [i_12] [i_12] [i_17] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_49 [i_11] [i_12] [i_17] [i_18]))) >= (((/* implicit */int) arr_20 [17U]))));
                            var_29 = ((/* implicit */unsigned int) (((-(var_0))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 63LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_4)))))) : (arr_10 [i_12] [(signed char)8] [i_18] [i_18] [i_12])));
                            arr_58 [i_11] [i_12] [i_11] [i_11] [i_18] = ((/* implicit */signed char) arr_41 [i_11] [i_11]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    for (short i_20 = 4; i_20 < 8; i_20 += 1) 
                    {
                        {
                            arr_65 [i_16] [i_12] [i_11] [i_19] [i_11] [i_20 - 4] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 16221942640794251756ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12855))) : (arr_6 [i_11 - 1] [i_11] [i_11 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2224801432915299871ULL))))))));
                            var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4002668415U)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26973)))))) ? ((~(((/* implicit */int) arr_47 [5LL] [i_12] [i_12] [0])))) : (((/* implicit */int) ((((/* implicit */long long int) -967148580)) != (arr_23 [i_11 + 1] [i_12] [i_16] [i_11]))))));
                            var_33 = (-(arr_55 [i_11 + 1] [i_11] [i_16]));
                            arr_66 [i_11] [i_12] [i_16] [i_19] [i_20 - 1] [i_11 + 2] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)21872))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_43 [i_12] [i_11 + 2]) : (((/* implicit */int) var_13))));
            }
            for (int i_21 = 1; i_21 < 9; i_21 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 4; i_22 < 8; i_22 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)21839)))) != (((/* implicit */int) var_5))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) arr_60 [i_11] [i_11])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) >= (3031027649584921848LL))))));
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (_Bool)1))));
                }
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((long long int) ((33521664ULL) - (((/* implicit */unsigned long long int) 126034377509130626LL))))))));
                arr_71 [i_11] [i_11] [i_11] = ((/* implicit */short) (((-(var_2))) - (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_64 [i_11 - 1] [5ULL] [i_11])) : (((/* implicit */int) var_3)))))));
            }
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(2975656965105906712ULL))))));
        }
        var_40 = ((/* implicit */unsigned long long int) arr_41 [i_11 - 1] [i_11]);
        /* LoopNest 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned char i_24 = 2; i_24 < 6; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 10; i_25 += 4) 
                {
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) || (((/* implicit */_Bool) (unsigned char)0)))))));
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) arr_31 [i_11])) ? (((/* implicit */unsigned long long int) 292298881U)) : (18446744073709551594ULL))) : (((unsigned long long int) var_10)))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (5576866344093568336LL))))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) - (var_2)));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_26 = 0; i_26 < 14; i_26 += 4) 
    {
        arr_84 [i_26] = ((/* implicit */unsigned long long int) arr_81 [i_26]);
        arr_85 [i_26] = arr_26 [i_26] [i_26] [i_26] [i_26] [i_26];
    }
    for (unsigned int i_27 = 2; i_27 < 10; i_27 += 4) 
    {
        var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_82 [(unsigned char)1]), ((unsigned short)28047))))))), (((((/* implicit */_Bool) arr_89 [i_27 - 2])) ? ((~(22ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_89 [i_27])) && ((_Bool)1)))))))));
        var_46 = ((/* implicit */unsigned int) (_Bool)1);
        arr_90 [i_27] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) 9310626487300940901ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28047))) : (2662927696U))), (((/* implicit */unsigned int) arr_0 [i_27 - 1] [i_27]))))), (arr_9 [i_27] [20LL])));
    }
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                {
                    var_47 = ((/* implicit */unsigned char) ((var_11) ? (576443160117379072ULL) : (((/* implicit */unsigned long long int) -3031027649584921857LL))));
                    arr_99 [i_30] [i_29] [i_30] = ((/* implicit */unsigned long long int) var_3);
                    /* LoopNest 2 */
                    for (signed char i_31 = 1; i_31 < 9; i_31 += 1) 
                    {
                        for (unsigned char i_32 = 0; i_32 < 12; i_32 += 1) 
                        {
                            {
                                var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_104 [i_29] [i_29] [i_29] [i_29] [i_29]) & (((/* implicit */int) var_9))))) ? (arr_12 [i_29] [i_31 + 1] [i_31] [i_31 - 1] [i_28]) : (arr_1 [i_31 - 1])));
                                arr_106 [i_30] [i_30] = ((/* implicit */signed char) ((arr_22 [i_30] [i_29] [i_30] [i_30]) + (arr_22 [i_30] [i_29] [i_32] [i_31])));
                                var_49 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3031027649584921848LL)))))) | (arr_24 [i_30] [i_29] [i_29] [i_32])));
                                var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_33 = 0; i_33 < 12; i_33 += 4) 
                    {
                        arr_110 [i_28] [i_29] [i_30] [i_33] [i_33] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_33])) && (((/* implicit */_Bool) var_1))));
                        arr_111 [i_29] [i_30] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (signed char i_34 = 3; i_34 < 9; i_34 += 3) /* same iter space */
                        {
                            var_51 = ((/* implicit */int) max((var_51), ((+(((/* implicit */int) arr_98 [i_28] [i_28] [i_33]))))));
                            var_52 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        }
                        for (signed char i_35 = 3; i_35 < 9; i_35 += 3) /* same iter space */
                        {
                            var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)80))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_33]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_30])))))));
                            arr_120 [i_33] |= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        arr_121 [i_28] [i_28] [i_28] [i_30] [i_30] [i_29] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (arr_109 [i_28] [i_28] [i_30] [i_30] [i_33]))))));
                    }
                    for (unsigned char i_36 = 0; i_36 < 12; i_36 += 1) 
                    {
                        var_54 = ((/* implicit */short) (~(10078724795990053082ULL)));
                        arr_126 [i_28] [i_29] [i_30] [i_36] [i_36] = ((/* implicit */short) ((unsigned int) var_11));
                    }
                }
            } 
        } 
        arr_127 [i_28] [i_28] = ((/* implicit */short) ((4294967275U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_55 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_98 [i_28] [i_28] [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_28] [i_28] [i_28]))) : (((((/* implicit */_Bool) arr_24 [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) : (3ULL)))));
    }
}
