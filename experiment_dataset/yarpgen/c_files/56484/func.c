/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56484
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
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((_Bool) 793966988)) ? (((/* implicit */unsigned int) 1116231555)) : (((unsigned int) ((long long int) (unsigned char)194))))))));
        var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)210)))));
        arr_3 [i_0] |= ((/* implicit */int) var_10);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            var_20 = ((/* implicit */long long int) (signed char)0);
            var_21 = ((signed char) arr_6 [i_2 + 2]);
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */int) ((signed char) 5207826046010206771LL));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5207826046010206772LL)));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_14 [i_1] [i_2] = ((/* implicit */short) 1585808555);
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [10U] [i_1])) ? (1585808573) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -509403710)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (-663626328993662218LL))))));
                        var_24 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_2] [i_2] [7LL] [i_2] [i_2 - 2]))));
                        var_25 = ((/* implicit */signed char) var_16);
                    }
                    var_26 = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */int) 1132150550238463698LL);
                    var_28 *= ((/* implicit */unsigned char) var_6);
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) var_1));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_24 [i_1] [(signed char)0] [i_3] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((arr_19 [i_2 + 1] [i_2] [i_3] [i_3]) + (2147483647))) >> (0ULL)));
                        arr_25 [i_1] [i_2] [i_3] [i_1] [i_3] [i_7] [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [2LL] [(unsigned char)11] [(unsigned char)11]))) : (((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) var_13))))));
                        var_29 = ((/* implicit */signed char) -5207826046010206768LL);
                        var_30 *= ((/* implicit */short) ((((/* implicit */int) (signed char)23)) != (arr_10 [i_3] [i_2] [5LL])));
                    }
                    var_31 = ((/* implicit */unsigned char) var_0);
                }
                var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))));
                arr_26 [i_1] [i_2] [i_1] = ((/* implicit */short) 1443939971034526358ULL);
                arr_27 [i_3] [(short)0] [i_1] = ((/* implicit */unsigned char) arr_0 [(_Bool)1]);
            }
            for (short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */short) ((var_14) ? (((/* implicit */int) (short)16472)) : (((/* implicit */int) arr_16 [i_2 + 4]))));
                var_34 = ((unsigned int) ((((/* implicit */int) arr_1 [7])) | (((/* implicit */int) var_14))));
            }
            var_35 = ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? (((((/* implicit */_Bool) var_13)) ? (1443939971034526358ULL) : (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_1] [i_2 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
        }
        /* LoopSeq 1 */
        for (int i_10 = 4; i_10 < 10; i_10 += 2) 
        {
            arr_33 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(signed char)11])) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))));
            var_36 = ((/* implicit */int) (unsigned char)9);
            arr_34 [i_1] [i_1] [i_10] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)17)) | (((/* implicit */int) var_13)))));
            var_37 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)84));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                arr_39 [i_11] = ((/* implicit */signed char) (unsigned char)255);
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_38 *= ((/* implicit */signed char) arr_35 [i_10 - 3] [i_11 - 1] [i_11 - 1]);
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 10; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) arr_7 [i_10 + 1] [i_13 + 2]);
                        var_40 = ((/* implicit */signed char) ((arr_4 [i_10 - 1]) >> (((((/* implicit */int) var_10)) - (43554)))));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_11 + 3] [i_11 + 3] [i_13 + 2])) >= (((/* implicit */int) arr_13 [i_13 + 2] [i_13 + 1] [i_11 + 3] [i_11] [i_10 - 3])))))));
                    }
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_42 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_37 [i_14] [i_11] [i_1] [i_1])) >> (((((/* implicit */int) (signed char)-1)) + (8))))));
                    var_43 = ((/* implicit */short) ((unsigned char) var_10));
                    var_44 *= ((/* implicit */short) (signed char)-63);
                }
            }
        }
        var_45 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_15 [i_1] [i_1]))));
        arr_50 [11LL] = ((/* implicit */unsigned char) -474524803);
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        arr_54 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) + (((/* implicit */int) arr_15 [i_15] [i_15]))));
        /* LoopNest 2 */
        for (signed char i_16 = 1; i_16 < 7; i_16 += 1) 
        {
            for (short i_17 = 2; i_17 < 8; i_17 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 2; i_18 < 8; i_18 += 4) /* same iter space */
                    {
                        arr_61 [i_15] [i_15] [i_18] = ((/* implicit */long long int) ((int) 287104476244869120LL));
                        arr_62 [i_15] [i_15] [i_15] [i_17] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)31)) << (((var_12) + (3850562188255025194LL)))));
                        arr_63 [i_15] [(signed char)1] [i_17] [i_18] = ((/* implicit */long long int) arr_59 [i_15] [i_15] [i_17 - 2] [i_17 - 2] [i_17] [i_17]);
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */_Bool) 3391695141U)) && (((/* implicit */_Bool) arr_60 [i_17] [i_16 + 2] [i_18 - 2])))))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 8; i_19 += 4) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) arr_32 [i_16 - 1] [i_16] [i_16]);
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 3; i_20 < 8; i_20 += 4) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned char) -5207826046010206785LL);
                            var_49 = ((/* implicit */signed char) arr_67 [i_20] [i_19] [i_17] [i_17 + 2] [i_17] [i_16 + 3] [i_15]);
                        }
                        for (unsigned char i_21 = 3; i_21 < 8; i_21 += 4) /* same iter space */
                        {
                            arr_72 [i_15] [i_15] [i_15] [i_15] [4] [i_15] [(signed char)6] = ((/* implicit */_Bool) 511);
                            arr_73 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((int) (unsigned char)29));
                            var_50 = ((/* implicit */unsigned char) arr_41 [i_19] [i_19] [2LL] [i_19 - 2]);
                            var_51 |= ((/* implicit */long long int) ((unsigned char) 36028797017915392LL));
                        }
                        for (unsigned char i_22 = 1; i_22 < 9; i_22 += 1) 
                        {
                            var_52 = ((/* implicit */signed char) ((((36028797017915392LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) >> (((((arr_51 [i_22]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (126989347552591556ULL)))));
                            arr_76 [i_15] [1ULL] [i_16] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [(signed char)4] [i_22 + 1] [i_17 + 2])) - (-1712086419)));
                            arr_77 [i_15] [i_15] [i_19 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)29)) - (((/* implicit */int) (unsigned short)2327))));
                        }
                    }
                    for (unsigned char i_23 = 2; i_23 < 8; i_23 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) ((long long int) arr_41 [i_16 + 3] [i_16 + 1] [i_17 - 1] [i_23 + 1]));
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 10; i_24 += 2) 
                        {
                            arr_85 [i_16] [i_16] [i_17 - 1] [i_15] [i_24] [i_16] [i_16] = ((/* implicit */signed char) var_5);
                            var_54 = ((/* implicit */unsigned short) (-(-5207826046010206771LL)));
                        }
                        var_55 = ((/* implicit */unsigned int) (unsigned char)129);
                        /* LoopSeq 2 */
                        for (int i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
                        {
                            var_56 = ((/* implicit */int) ((var_14) ? (arr_60 [i_15] [i_16 - 1] [i_15]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)246)))))));
                            var_57 = ((/* implicit */int) min((var_57), (arr_19 [i_25] [i_15] [i_16 + 1] [i_15])));
                        }
                        for (int i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
                        {
                            var_58 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) && ((_Bool)0)))))));
                            var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((((/* implicit */_Bool) (short)20576)) || (((/* implicit */_Bool) ((unsigned char) var_12))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_27 = 1; i_27 < 7; i_27 += 3) 
                    {
                        var_60 |= ((((((/* implicit */int) (unsigned char)11)) - (((/* implicit */int) (signed char)-1)))) << (((/* implicit */int) (signed char)0)));
                        var_61 = ((/* implicit */unsigned char) ((-1509414426) != (((/* implicit */int) arr_28 [i_27 + 3] [i_27 + 1] [i_27] [i_27 + 2]))));
                    }
                    for (long long int i_28 = 1; i_28 < 9; i_28 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 3) 
                        {
                            var_62 = ((/* implicit */unsigned long long int) arr_1 [i_28 + 1]);
                            var_63 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_12))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-30315))))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-108)))));
                            var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) var_1))));
                            var_65 = ((/* implicit */long long int) var_3);
                        }
                        var_66 = ((/* implicit */unsigned char) ((arr_32 [i_28] [i_28 - 1] [i_28 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        /* LoopSeq 1 */
                        for (int i_30 = 4; i_30 < 9; i_30 += 1) 
                        {
                            var_67 = ((/* implicit */long long int) var_6);
                            var_68 = ((/* implicit */int) arr_96 [i_15] [i_16] [i_30 - 1] [i_17 - 2] [i_15]);
                            arr_101 [(signed char)4] [i_16] [i_17] [i_28] [2U] [i_28] [(short)2] |= ((/* implicit */_Bool) -8121334591249081631LL);
                            var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_16 + 2] [i_16 + 2] [i_17 + 2] [i_17 + 2] [i_28 - 1] [i_30 - 1]))) | (var_5)));
                        }
                    }
                }
            } 
        } 
        arr_102 [(unsigned char)9] [i_15] = ((/* implicit */unsigned char) arr_48 [i_15] [i_15] [1U] [i_15] [i_15] [i_15]);
        var_70 = ((long long int) -913864878);
    }
    for (int i_31 = 3; i_31 < 11; i_31 += 3) 
    {
        var_71 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_31 + 2])) ? (729748712) : (((/* implicit */int) (short)-7174))))) - (((unsigned int) (unsigned char)57))))) ? (((/* implicit */long long int) ((int) var_11))) : ((+(arr_0 [i_31 + 4]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_32 = 0; i_32 < 15; i_32 += 4) 
        {
            arr_108 [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_103 [i_31])) ? (((((/* implicit */int) (unsigned char)96)) >> (((/* implicit */int) var_6)))) : (((/* implicit */int) var_14))));
            arr_109 [i_31] = ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (var_0) : (arr_104 [(signed char)0] [i_31]))) << (((arr_106 [i_31 + 3] [i_32]) - (1134590822U)))));
        }
        arr_110 [i_31] = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5647784656305473918LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) : (5647784656305473918LL))) >= (((((/* implicit */_Bool) -746133311)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (5207826046010206771LL))))))));
    }
    var_72 = ((/* implicit */long long int) var_6);
}
