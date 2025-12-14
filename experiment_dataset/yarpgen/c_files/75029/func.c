/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75029
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_0 [i_0])) : (31)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [2LL] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_0 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_18 += ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) / (7062675119049971104LL))));
                    var_19 = ((/* implicit */unsigned long long int) (((~(arr_9 [12] [i_1] [12LL] [i_3]))) + (arr_7 [i_0 - 2] [i_0] [i_0 + 1] [i_0])));
                }
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16316612025889293925ULL)) ? (((/* implicit */long long int) arr_9 [11ULL] [i_0 + 1] [i_0 + 1] [i_4])) : (((long long int) 15LL))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)15] [i_2] [i_5 - 4] [i_6] [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_5] [i_5] [(signed char)15] [i_5 - 1]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] [i_5 + 1]))) : ((~(arr_1 [i_1])))));
                        arr_19 [i_0] = ((((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) 4035225266123964416ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)48))))) : (((((/* implicit */_Bool) 679677992973404186ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))))));
                    }
                    var_24 = (+((+(((/* implicit */int) var_10)))));
                }
                /* LoopSeq 1 */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_13 [(signed char)11] [i_1] [i_0]));
                    arr_24 [i_0] [1LL] [12ULL] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2342702118219213113ULL)) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_7] [i_0] [13LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-85)) ? (arr_4 [i_1] [i_2] [i_2]) : (arr_4 [i_0] [i_1] [i_8])));
                        arr_29 [i_1] [i_7 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)101)) & (((/* implicit */int) arr_2 [i_7 + 2]))));
                        var_25 += ((/* implicit */unsigned long long int) ((int) (~(4293918720ULL))));
                    }
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) >> (((-1008064745) + (1008064772))))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    for (int i_11 = 4; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (+(var_15))))));
                            arr_39 [i_0] [i_0] [9ULL] [9ULL] [3LL] = ((/* implicit */unsigned long long int) ((-248966685) % (arr_9 [6ULL] [7LL] [i_10] [i_0 - 1])));
                            arr_40 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ^ (12683458013681599746ULL)))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (65535ULL)));
                        }
                    } 
                } 
                var_28 += ((((/* implicit */int) arr_22 [i_0] [i_0 - 1])) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) || (((/* implicit */_Bool) 6624507428330058956LL))))));
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_36 [i_0] [i_0] [i_9] [i_9] [13ULL])))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 3; i_16 < 23; i_16 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-85))))))))));
                                arr_56 [i_12] [i_13] [i_13] [(signed char)18] [i_13] [i_12] = (~((+(((/* implicit */int) var_12)))));
                                arr_57 [i_12] [2ULL] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 1012334954))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-85)))))));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_13 - 1])) ? (((((/* implicit */_Bool) arr_49 [i_12] [i_14] [10ULL] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (signed char)94)))))));
                                var_32 += ((/* implicit */int) ((((/* implicit */unsigned long long int) -4731443028598947134LL)) >= (arr_44 [i_16 - 2] [i_13 - 1] [i_13 + 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_17 = 4; i_17 < 23; i_17 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) 1008064745)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (0ULL)))));
                        arr_61 [i_12] [i_13 + 2] [i_13 + 2] [i_13 + 2] = ((/* implicit */long long int) (-(arr_44 [i_13 + 1] [i_13 + 1] [i_17 + 1])));
                        arr_62 [i_13 - 1] [i_13 - 1] [i_14] [i_13 - 1] [i_13 - 1] = ((((/* implicit */_Bool) var_0)) ? (13816819825642841299ULL) : (((/* implicit */unsigned long long int) 1420447010)));
                        var_34 = (-(((((/* implicit */_Bool) -4063585025758974045LL)) ? (((/* implicit */unsigned long long int) arr_60 [i_12] [i_12] [i_12])) : (var_3))));
                    }
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_35 -= ((((/* implicit */_Bool) 5104789230970989336LL)) ? (((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) 1008064745)) : (4731443028598947127LL))) : (arr_50 [i_13 + 2] [i_13 - 1] [i_13 + 2] [i_13 + 2]));
                        var_36 = ((arr_46 [i_13 - 1] [i_13]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)120))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */int) (+(8875781110645668466ULL)));
                            arr_70 [i_12] [i_18] [i_12] [(signed char)16] [i_18] [i_12] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_12] [8LL] [i_14] [i_13 + 3] [i_19] [i_13])) && (((/* implicit */_Bool) arr_66 [i_12] [i_13] [i_14] [i_13 + 3] [i_14]))));
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_69 [i_13 + 3] [i_13] [i_13 + 3] [i_13] [1]))));
                        }
                        var_39 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) % (arr_54 [i_13] [i_13] [i_13 - 1] [i_13] [0] [i_13] [i_13 + 3])));
                    }
                    for (int i_20 = 4; i_20 < 23; i_20 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_63 [i_14])) : (arr_67 [i_12] [22] [21LL] [i_12] [21LL] [i_20])))))));
                        /* LoopSeq 3 */
                        for (int i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            arr_76 [i_12] [i_12] [i_12] [i_13 + 3] [i_14] [i_20] [7ULL] = ((/* implicit */int) arr_73 [i_13] [i_13]);
                            var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)82)) ? (arr_71 [i_13] [(signed char)15] [i_13] [i_13] [i_13] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))));
                            var_42 = -513499703;
                            arr_77 [20ULL] [20ULL] [i_14] [17LL] [4ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-105))));
                        }
                        for (int i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            var_43 = ((/* implicit */int) min((var_43), (((((/* implicit */int) arr_72 [i_13] [i_13] [i_13] [i_13 + 2])) + (((/* implicit */int) arr_72 [i_13] [i_13] [i_13] [i_13 + 2]))))));
                            var_44 = ((/* implicit */int) (signed char)50);
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_68 [i_13 + 3] [i_20 + 1] [i_20] [(signed char)22] [i_22] [i_22] [4ULL])) < (((/* implicit */int) var_10)))))));
                            var_46 = ((/* implicit */signed char) ((var_8) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_79 [11LL] [i_13] [i_13])) : (arr_47 [i_13] [i_13] [i_20] [i_13]))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            arr_83 [i_12] [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_47 [i_14] [14LL] [i_14] [i_12]))));
                            arr_84 [i_12] [4] [i_14] [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) < (arr_60 [i_20 - 4] [i_20 - 3] [i_20 - 4])));
                            var_47 &= arr_63 [i_12];
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_23])) ^ (((/* implicit */int) var_13))))) ? ((+(1008064740))) : (((/* implicit */int) (signed char)54))));
                        }
                    }
                    for (unsigned long long int i_24 = 4; i_24 < 23; i_24 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                        {
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(15864727005664923748ULL)))))))));
                            var_50 = ((/* implicit */int) (-(arr_71 [i_24] [i_24 + 1] [i_24 + 1] [i_24 - 3] [2LL] [i_24 - 3])));
                            arr_92 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_25] = ((/* implicit */long long int) ((arr_86 [i_13 - 1] [20] [4ULL] [i_14] [i_14] [11ULL]) - (arr_86 [i_13 - 1] [i_13 - 1] [i_13] [i_13] [i_13 - 1] [i_24])));
                        }
                        for (long long int i_26 = 2; i_26 < 20; i_26 += 3) 
                        {
                            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (arr_54 [3ULL] [17LL] [i_24] [i_14] [i_14] [19] [i_12]))))))));
                            var_52 = (+(var_7));
                            var_53 = ((/* implicit */unsigned long long int) (signed char)-7);
                        }
                        var_54 = ((/* implicit */unsigned long long int) ((signed char) arr_49 [i_24 - 4] [i_24 - 2] [i_13 - 1] [i_13 + 1]));
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (-(((var_3) - (((/* implicit */unsigned long long int) arr_46 [i_12] [i_13])))))))));
                    }
                    arr_96 [i_12] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-910230870462719960LL)))) ? (((((/* implicit */_Bool) arr_93 [(signed char)6] [10ULL] [i_14] [i_13] [i_12])) ? (((/* implicit */int) (signed char)1)) : (-1708064344))) : (10413867)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_27 = 0; i_27 < 24; i_27 += 4) 
        {
            arr_100 [i_12] [17LL] [i_12] = ((/* implicit */signed char) ((int) ((4819479205452439917ULL) != (((/* implicit */unsigned long long int) arr_74 [i_12] [i_12] [15LL] [i_12] [i_12] [i_12] [i_12])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_28 = 2; i_28 < 23; i_28 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_29 = 1; i_29 < 23; i_29 += 4) 
                {
                    var_56 &= (~((+(var_9))));
                    var_57 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((-4731443028598947148LL) + (9223372036854775807LL))) >> (((var_7) + (6438677375283032982LL)))))) ? (((/* implicit */unsigned long long int) arr_74 [i_29 + 1] [i_29 - 1] [i_29] [i_28 - 2] [i_28 - 1] [23ULL] [23ULL])) : ((+(11119437520751866670ULL)))));
                }
                for (int i_30 = 3; i_30 < 20; i_30 += 3) 
                {
                    var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_81 [16LL] [i_30 - 3] [i_27] [i_30 - 3] [i_27] [i_27] [0LL])) ? (((/* implicit */int) arr_81 [i_12] [i_30 + 2] [i_27] [i_27] [i_30] [i_27] [i_30 + 2])) : (((/* implicit */int) arr_81 [i_27] [i_30 + 4] [i_27] [i_30] [i_28] [i_28] [i_28]))));
                    var_59 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) 5763286060027951875ULL)) ? (((/* implicit */unsigned long long int) -3938518701237420066LL)) : (2582017068044627868ULL)))));
                }
                var_60 = ((/* implicit */signed char) arr_54 [9ULL] [i_28 - 2] [i_28] [i_28] [i_28] [i_28 - 2] [9ULL]);
                arr_111 [i_12] [i_12] [i_12] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-124))));
                var_61 = ((/* implicit */int) max((var_61), (((/* implicit */int) ((long long int) arr_93 [16] [16] [i_28] [i_28] [i_28])))));
            }
        }
        var_62 = ((/* implicit */unsigned long long int) (~(1264202061)));
        /* LoopSeq 1 */
        for (long long int i_31 = 1; i_31 < 22; i_31 += 3) 
        {
            arr_114 [8LL] [i_31] = ((((/* implicit */_Bool) arr_85 [i_31 - 1] [i_31] [i_31 - 1] [i_31 + 2] [i_31 - 1] [i_31 + 2])) ? (arr_85 [i_31 + 1] [i_31] [i_31 - 1] [i_31 - 1] [i_31 - 1] [i_31]) : (0ULL));
            /* LoopNest 3 */
            for (int i_32 = 0; i_32 < 24; i_32 += 3) 
            {
                for (int i_33 = 0; i_33 < 24; i_33 += 4) 
                {
                    for (int i_34 = 0; i_34 < 24; i_34 += 3) 
                    {
                        {
                            var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) var_5))));
                            var_64 = var_12;
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_35 = 0; i_35 < 23; i_35 += 4) 
    {
        arr_127 [i_35] = ((/* implicit */signed char) 0ULL);
        var_65 += (-(((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) arr_105 [i_35] [(signed char)12] [i_35] [21LL] [i_35] [4])))) : (((/* implicit */int) var_12)))));
    }
    var_66 = (~(((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1787202505) : (-513499703))) ^ (((((/* implicit */_Bool) var_8)) ? (-493283555) : (var_2))))));
}
