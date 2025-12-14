/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73710
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (short)-17457)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))), (((/* implicit */unsigned long long int) var_8))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) 5477512197156434753ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34896))) : (1704035983U))) : (max((((((/* implicit */_Bool) (short)31167)) ? (2646616714U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36618))))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1))))))));
            arr_8 [i_0] [(signed char)5] = ((((/* implicit */_Bool) max((2590931340U), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1])));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((((_Bool)0) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((-(arr_7 [i_3 + 1] [i_3 - 2] [i_3 - 1]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) -633532815)), (1704035996U))))));
                        arr_14 [i_0] [(unsigned char)12] [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_14 = ((/* implicit */signed char) min(((unsigned short)26358), (((/* implicit */unsigned short) (signed char)-4))));
                    }
                } 
            } 
            var_15 = arr_11 [i_0] [(signed char)14] [i_0] [i_0] [i_1] [i_1];
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [(signed char)6] [i_1] [i_4] [10LL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) var_4))))), (5598055952972281758LL)));
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (arr_16 [i_5 + 1] [i_5] [i_4] [i_5]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            arr_21 [17ULL] [i_0] [i_6] = ((/* implicit */unsigned short) min((1771418566835369726LL), (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
            arr_22 [(short)3] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6] [i_6] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((arr_0 [i_6 - 1] [i_0]), (((/* implicit */short) arr_20 [i_6]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((+(((/* implicit */int) var_0)))))) : ((+(((/* implicit */int) arr_5 [i_6 - 1] [i_6]))))));
            arr_23 [i_0] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) (short)29718)), (var_8)))));
        }
        var_18 = ((/* implicit */unsigned int) (_Bool)1);
        var_19 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (unsigned char)157);
                    arr_29 [i_0] [i_7 + 1] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)34888);
                    arr_30 [i_7 + 1] [i_0] [i_8] |= ((/* implicit */unsigned char) (signed char)-45);
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_6)))) ? ((~(2066623201753401764ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_22 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_1)), (11ULL))), (var_3)));
        arr_34 [i_9] = ((/* implicit */_Bool) (unsigned char)157);
    }
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned char)150), (((/* implicit */unsigned char) var_4))))), (4294967295U)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_11 = 3; i_11 < 22; i_11 += 3) /* same iter space */
        {
            arr_41 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)6798))));
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_36 [i_11 + 2] [i_11]))));
                arr_45 [i_12] [(short)9] [i_12] = ((/* implicit */long long int) var_10);
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    arr_50 [i_10] [i_12] [i_10] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_40 [i_11 - 3] [i_11 - 3])));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] = ((/* implicit */long long int) var_9);
                        arr_54 [i_12] = ((/* implicit */long long int) 18446744073709551605ULL);
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                        var_26 -= ((/* implicit */signed char) (unsigned char)251);
                    }
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_51 [i_13] [i_11 + 1] [i_12] [i_12]);
                        var_28 -= ((((/* implicit */_Bool) (signed char)10)) ? (var_3) : (arr_37 [i_13]));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11 + 1] [i_11 - 3] [i_11 + 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_30 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                    }
                    var_31 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49913)) ? (((/* implicit */int) (short)-19333)) : (((/* implicit */int) (signed char)4))))) : (var_8)));
                    arr_57 [i_12] [i_12] [i_12] = ((/* implicit */short) (signed char)1);
                }
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2590931313U)) ? (536346624ULL) : (((/* implicit */unsigned long long int) 1704035984U))));
                    arr_60 [i_16] [i_16] [i_16] [i_12] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)25959))));
                }
                for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_37 [(unsigned short)23]))));
                    arr_63 [i_10] [i_12] [i_12] [i_17] = ((/* implicit */unsigned short) arr_52 [i_17] [i_17] [i_17] [18] [i_11] [4U]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_66 [i_12] [i_17] [i_10] [i_18] [i_11 + 2] [i_18] [i_12] = ((/* implicit */int) (unsigned short)63336);
                        var_34 -= ((/* implicit */signed char) var_1);
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) 2268161687U);
                        arr_70 [i_10] [i_11 - 3] [i_12] [i_12] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_11] [i_11] [i_11 - 1])) ? (((/* implicit */unsigned long long int) arr_51 [i_12] [4ULL] [i_10] [i_12])) : (arr_49 [i_11] [i_11] [i_11 - 2])));
                        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                    }
                    for (short i_20 = 1; i_20 < 23; i_20 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_46 [i_20 - 1] [i_11 + 1]))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_71 [(unsigned char)12] [i_20 + 1] [i_20 + 1] [(short)10] [i_20] [i_10] [i_20]))));
                    }
                    for (short i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        arr_75 [i_10] [i_11] [i_12] [i_21] [i_21] [i_11 - 2] [i_17] = ((/* implicit */unsigned long long int) arr_64 [i_11 + 1]);
                        var_39 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
                    }
                    var_40 = ((/* implicit */short) (unsigned short)11015);
                    arr_76 [i_10] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (short)25959);
                }
            }
            for (unsigned char i_22 = 1; i_22 < 21; i_22 += 3) 
            {
                arr_79 [i_10] [i_22] [i_22 - 1] = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)-10))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_48 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11] [i_22] [i_22]) : (((/* implicit */int) (signed char)4))));
                arr_80 [i_22] [i_11] [11ULL] [18] = ((/* implicit */_Bool) var_9);
                var_42 = ((/* implicit */unsigned char) arr_72 [i_22 + 2] [i_22 + 3] [i_22 + 1] [i_22] [(signed char)20] [0] [i_22]);
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (-231972815) : (2147483647)));
                    var_44 = ((/* implicit */unsigned long long int) -1705956876);
                }
            }
            arr_84 [i_11 - 2] [i_10] = ((/* implicit */long long int) ((var_10) ? (1431676739483499298ULL) : (((/* implicit */unsigned long long int) ((arr_78 [i_10] [0U] [i_10]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 3 */
            for (short i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) var_1);
                            arr_91 [i_10] [i_10] [i_10] [i_25] [i_10] [i_10] = ((/* implicit */unsigned long long int) 2590931312U);
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */unsigned short) var_8);
        }
        for (long long int i_27 = 3; i_27 < 22; i_27 += 3) /* same iter space */
        {
            arr_95 [i_27] [i_27] [i_27 - 1] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_90 [i_27 - 3] [i_27 + 1] [i_27 + 2] [i_10] [i_27] [i_10] [i_10])), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_90 [i_27 + 2] [3ULL] [i_27 + 2] [i_27 + 2] [i_10] [i_27] [i_10])))))));
            var_47 = ((/* implicit */signed char) 14348443437462400566ULL);
            arr_96 [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9110298674794865863LL)) ? (((/* implicit */int) (short)-19642)) : (((/* implicit */int) (unsigned short)11015))));
        }
        for (long long int i_28 = 1; i_28 < 23; i_28 += 4) 
        {
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) var_9))));
            arr_99 [i_28] [2ULL] = ((/* implicit */int) arr_40 [i_10] [i_10]);
            arr_100 [i_28 + 1] [i_28] [i_10] = ((/* implicit */unsigned int) max(((-(8858351592582098532ULL))), (((/* implicit */unsigned long long int) (short)8867))));
        }
    }
    /* vectorizable */
    for (signed char i_29 = 0; i_29 < 22; i_29 += 4) 
    {
        var_49 = ((/* implicit */_Bool) 2590931303U);
        var_50 = ((/* implicit */int) var_8);
    }
    var_51 = ((/* implicit */unsigned long long int) var_7);
}
