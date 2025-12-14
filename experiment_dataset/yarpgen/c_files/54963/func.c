/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54963
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
    var_18 = var_14;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 |= ((((/* implicit */_Bool) max((var_9), (var_3)))) ? (((var_3) + (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_16))));
                                arr_12 [i_0] [i_0] [5U] [i_0] [i_3] [5U] [i_0] = ((/* implicit */long long int) ((max((8522825728ULL), (((/* implicit */unsigned long long int) -7538677364173643943LL)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0]) % (arr_1 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)23065), (arr_4 [i_0]))))) : (min((arr_6 [i_1]), (((/* implicit */long long int) (unsigned char)75)))))))));
                                var_20 += ((/* implicit */signed char) var_15);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_21 = (-(-4754831717022233007LL));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        arr_18 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_17 [i_6 + 1] [i_5] [i_0 + 1] [i_5] [12ULL])) < (var_11)));
                        var_22 = ((/* implicit */unsigned int) var_13);
                        var_23 = ((signed char) ((unsigned int) var_8));
                    }
                    arr_19 [i_5] [i_1] [(unsigned char)5] = ((/* implicit */unsigned long long int) arr_0 [i_5]);
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    var_24 += ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0 + 1]))));
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_1 + 1] [i_7 + 1])) ? (-5895648394213293246LL) : (((/* implicit */long long int) var_2))));
                    /* LoopSeq 2 */
                    for (short i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((unsigned int) arr_7 [i_1 - 3] [i_7 + 2]));
                        var_27 = ((/* implicit */long long int) arr_4 [4LL]);
                        var_28 = ((/* implicit */signed char) 8522825714ULL);
                        arr_26 [11ULL] [i_1] [i_1 + 1] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_8 + 2] [i_7 + 1] [4LL] [4LL] [i_0 - 1] [i_0 + 1]))));
                    }
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        var_29 -= ((/* implicit */unsigned char) var_13);
                        var_30 = 4501105086240215324LL;
                        arr_29 [i_0] [i_1] [2LL] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_0 + 2] [i_0] [i_0 + 1] [12ULL] [i_0 + 1]))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_9 + 2])) ? (((/* implicit */int) arr_5 [i_9 - 1])) : (((/* implicit */int) (unsigned char)19))));
                        var_32 += ((/* implicit */signed char) arr_14 [i_7] [i_7]);
                    }
                    var_33 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2]))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_34 *= ((/* implicit */signed char) var_6);
                            arr_36 [i_7] [i_0] [i_10] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) var_17);
                            arr_37 [(short)2] [i_0] [(short)2] [i_7] [i_0] [(short)2] [i_11] = ((/* implicit */long long int) arr_24 [i_0] [i_0] [i_7] [i_10] [i_11]);
                        }
                        for (short i_12 = 4; i_12 < 15; i_12 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) 18446744065186725901ULL);
                            arr_41 [i_0] [i_1 - 1] [i_0] [i_7] [i_10] [i_12 - 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_1 + 1] [i_1 - 2] [i_1] [i_1])) >> (((7371053062767053394ULL) - (7371053062767053364ULL)))));
                        }
                        for (short i_13 = 2; i_13 < 13; i_13 += 1) 
                        {
                            arr_46 [10LL] = ((/* implicit */short) (+(3752024244795527922ULL)));
                            var_36 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_8))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */long long int) 2457331897U)) >= (var_3)));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            arr_50 [i_0 - 1] [i_14] [i_0 - 1] [i_7] [i_7] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2387065902U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))) : (1309975815U)));
                            arr_51 [i_0] [i_0] [i_0] [i_7] [i_7 + 2] [i_14] [i_14] = (+(4111341833U));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 2) 
                        {
                            var_38 += ((/* implicit */signed char) arr_33 [i_0]);
                            var_39 ^= ((/* implicit */unsigned char) 14692195093894920427ULL);
                            var_40 = ((/* implicit */unsigned char) var_3);
                            arr_55 [i_0] [(unsigned char)7] [5U] [i_7 + 2] [i_10 + 1] [(signed char)6] [i_0] = var_0;
                        }
                        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            arr_58 [i_1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_0))));
                            var_41 = ((long long int) (-9223372036854775807LL - 1LL));
                            arr_59 [i_16] [i_10] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(-9223372036854775793LL)));
                            var_42 -= 13569134903725802414ULL;
                        }
                        for (short i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            arr_62 [i_17] [i_10 - 1] [i_7] [i_0 - 1] [i_0 - 1] = (-(1309975833U));
                            var_43 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1 + 3]))));
                            var_44 = ((/* implicit */unsigned char) ((11843016064765547027ULL) + (((/* implicit */unsigned long long int) 2457331909U))));
                        }
                        var_45 = ((/* implicit */unsigned char) ((arr_33 [i_7 + 2]) - (arr_33 [i_7 - 1])));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 2) 
                    {
                        arr_66 [i_0] [i_0] [i_7] [(signed char)8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 16LL)) ? (var_11) : (((/* implicit */long long int) 2457331893U))))));
                        var_46 += ((/* implicit */unsigned long long int) (unsigned char)20);
                    }
                }
                for (unsigned int i_19 = 2; i_19 < 15; i_19 += 2) 
                {
                    arr_69 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)92);
                    arr_70 [i_0 + 2] [(signed char)12] [i_19] = ((/* implicit */long long int) min((((/* implicit */short) var_14)), (((short) ((((/* implicit */long long int) 3252845667U)) != (7563957776035216606LL))))));
                }
                arr_71 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_4 [i_0])), ((~(arr_57 [i_0] [i_1]))))) & (((arr_40 [i_0] [i_0 + 1] [(signed char)2]) | (arr_6 [i_0 + 1])))));
                arr_72 [i_0 - 1] = ((/* implicit */long long int) (+(max(((+(var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))))));
                var_47 = ((/* implicit */unsigned long long int) ((unsigned int) (~(arr_0 [i_0 - 1]))));
            }
        } 
    } 
    var_48 = ((/* implicit */long long int) min((7353327094670610946ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (2417184168U)))))))));
    /* LoopSeq 2 */
    for (short i_20 = 3; i_20 < 17; i_20 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                arr_81 [i_22] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)18)), (2984991471U)))) >= (max((((/* implicit */long long int) 1837635406U)), (-2315996084728272037LL)))));
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 19; i_23 += 2) 
                {
                    for (long long int i_24 = 0; i_24 < 19; i_24 += 2) 
                    {
                        {
                            arr_86 [i_22] [i_21] [i_22] [5U] [i_23] [i_24] = min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((unsigned char) 1907901391U))));
                            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) 9223372036854775807LL))));
                        }
                    } 
                } 
            }
            arr_87 [i_20] [18ULL] = ((/* implicit */long long int) 2457331895U);
            var_50 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)16)), (1837635414U)));
        }
        for (unsigned char i_25 = 1; i_25 < 18; i_25 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
            {
                for (unsigned int i_27 = 1; i_27 < 18; i_27 += 3) 
                {
                    {
                        var_51 ^= ((/* implicit */short) (((+(var_9))) <= (((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) / (((/* implicit */int) var_6)))))));
                        arr_95 [i_20 + 1] = ((((/* implicit */long long int) arr_79 [i_20] [i_25] [i_26] [i_27])) | (var_9));
                        var_52 += ((/* implicit */unsigned int) 8152826022200784214LL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_28 = 3; i_28 < 16; i_28 += 4) 
            {
                for (short i_29 = 1; i_29 < 16; i_29 += 1) 
                {
                    {
                        var_53 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_94 [i_20 - 2] [i_25] [i_28 - 1] [17ULL] [10LL] [i_29]))))) <= (((((/* implicit */_Bool) 1907901392U)) ? (max((((/* implicit */long long int) (signed char)121)), (var_3))) : (arr_77 [i_20 - 3] [i_25 + 1] [i_28 - 1])))));
                        var_54 ^= ((/* implicit */long long int) (-(arr_79 [i_20] [i_20 - 1] [i_20] [i_20])));
                        arr_102 [i_20] [i_20] [i_20] [i_29] = ((/* implicit */unsigned int) arr_89 [i_20 - 2] [i_25]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_30 = 1; i_30 < 17; i_30 += 3) 
            {
                for (unsigned char i_31 = 2; i_31 < 16; i_31 += 3) 
                {
                    for (unsigned int i_32 = 0; i_32 < 19; i_32 += 3) 
                    {
                        {
                            arr_109 [i_20] [4U] [14LL] [i_30 - 1] [(signed char)6] [i_31 + 1] [(signed char)6] = ((/* implicit */long long int) arr_105 [i_20] [i_25 - 1] [i_20] [i_31] [i_20] [17U]);
                            var_55 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_92 [i_31 + 3] [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_103 [i_20] [i_25 - 1] [i_31 - 2] [i_32]))) : (var_9)))) >= (arr_74 [i_20] [0ULL])));
                            arr_110 [i_20] [i_25] [i_20] [i_31] [i_20] = ((/* implicit */long long int) ((signed char) (-(arr_96 [i_25 - 1] [i_30 + 1] [i_31 + 3]))));
                        }
                    } 
                } 
            } 
        }
        arr_111 [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2457331895U)) || (((/* implicit */_Bool) (~(var_9))))));
        arr_112 [(signed char)4] [i_20] = ((/* implicit */unsigned int) max((arr_92 [(unsigned char)3] [i_20 - 3]), (((/* implicit */long long int) arr_105 [i_20] [i_20 - 3] [i_20] [i_20 - 1] [i_20 + 2] [i_20 - 2]))));
    }
    /* vectorizable */
    for (unsigned char i_33 = 0; i_33 < 10; i_33 += 3) 
    {
        var_56 = ((/* implicit */unsigned int) ((18446744073709551613ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5532211008183194208LL)) ? (8319951659973078886LL) : (((/* implicit */long long int) var_1)))))));
        var_57 = ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_33] [i_33] [i_33] [i_33] [i_33]))));
        var_58 *= ((/* implicit */short) arr_33 [i_33]);
    }
}
