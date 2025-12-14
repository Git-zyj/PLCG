/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60478
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_1);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((-2131755109) == (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(-1669949274)));
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_19 = ((int) arr_14 [i_0] [i_1] [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 1669949241)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7] [i_7])))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)11))))))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_0) : (((/* implicit */unsigned int) 1140397022))))) ? (((/* implicit */unsigned int) -1669949255)) : (var_10));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_23 = (~(var_0));
                    var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) (unsigned char)0))))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_8] [i_8] [i_0] [i_10 + 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)230)) >= (((/* implicit */int) (unsigned char)255))));
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 2U)) ? (1933254016U) : (((/* implicit */unsigned int) -1176226455))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        arr_32 [i_11] [i_9] [i_8 + 3] [6U] [(unsigned char)2] = ((/* implicit */long long int) -1176226455);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1669949274)))))));
                    }
                    var_27 |= ((/* implicit */long long int) ((unsigned int) (unsigned char)0));
                }
                var_28 = ((/* implicit */long long int) (-2147483647 - 1));
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) (unsigned char)255);
                            var_30 = ((/* implicit */long long int) (-2147483647 - 1));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -477272866)) ? (1879787253) : (((/* implicit */int) (unsigned char)5)))))));
                            var_32 = ((var_0) | (((/* implicit */unsigned int) -1780878317)));
                            arr_48 [i_0] [(unsigned char)7] [i_15] [i_15] [i_15] [i_17] = var_1;
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_16]))))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [8] [i_0])) : (((/* implicit */int) (unsigned char)13))));
                            arr_49 [i_0] [(unsigned char)4] [i_0] &= ((/* implicit */unsigned int) ((16711680) ^ (((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [7LL] [i_15]))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned char) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 1; i_18 < 12; i_18 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)220)) == (((/* implicit */int) ((0U) < (var_7)))))))));
                            arr_62 [i_0] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 305391536)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1933254016U))));
                            var_36 = ((/* implicit */int) (~(((((/* implicit */_Bool) -6830577004331237520LL)) ? (arr_17 [i_0]) : (16777088U)))));
                            var_37 = ((/* implicit */unsigned char) ((1669949266) & (1669949266)));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (arr_56 [i_0] [i_18 + 1] [i_0] [i_0]) : (-9223372036854775791LL)));
                var_39 |= ((/* implicit */long long int) (unsigned char)11);
            }
            for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
            {
                arr_65 [7U] [i_18] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)9])) | (-7226806364742896807LL)))) ? (((/* implicit */long long int) var_7)) : (-5468781836649573549LL)));
                var_40 = (+(((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_22])) ? (140720308486144LL) : (((/* implicit */long long int) 15U)))));
            }
            for (int i_23 = 0; i_23 < 13; i_23 += 4) 
            {
                var_41 *= (unsigned char)229;
                var_42 = ((/* implicit */long long int) 4294967295U);
                arr_70 [i_18] = ((/* implicit */long long int) ((unsigned int) arr_59 [i_18 + 1] [i_18 - 1] [(unsigned char)10]));
            }
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                var_43 = ((((/* implicit */_Bool) -274923635506445247LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned char)101))))) : (((/* implicit */int) ((2951457910261345439LL) != (((/* implicit */long long int) 1073947016U))))));
                /* LoopSeq 3 */
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    arr_77 [i_25] [(unsigned char)5] [i_18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_46 [i_0] [i_18 - 1] [i_24] [i_24] [5U]) >= (arr_46 [(unsigned char)8] [i_18] [(unsigned char)8] [i_25] [i_25])));
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-2147483647 - 1))) != (7226806364742896807LL)));
                    var_45 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)174)) ? (var_2) : (4294967295U)))) > (arr_38 [i_0] [i_18 - 1])));
                }
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) 
                {
                    var_46 = ((/* implicit */int) var_8);
                    arr_81 [i_0] [i_18 + 1] [i_24] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_18 - 1] [i_18] [i_18 + 1] [i_18] [i_24])) ? (((/* implicit */long long int) 2147483647)) : (((long long int) (unsigned char)95))));
                }
                for (long long int i_27 = 0; i_27 < 13; i_27 += 3) 
                {
                    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_30 [i_0] [i_18 - 1] [i_24] [i_0] [i_0])) == (var_12))))));
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        arr_87 [i_0] [i_18] [i_18] [i_27] [i_27] [i_28] [i_28] |= ((long long int) ((int) (unsigned char)8));
                        arr_88 [i_0] [i_18] [(unsigned char)5] [i_18] [(unsigned char)5] [(unsigned char)0] |= ((/* implicit */long long int) (~(670765743)));
                        arr_89 [i_27] [i_24] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((165788803U) << (((var_4) - (2293269508U)))))) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)221)))) : (((/* implicit */int) (unsigned char)127))));
                        arr_90 [i_0] [i_18 + 1] [i_18 + 1] [i_27] [i_27] [i_28] = ((/* implicit */long long int) ((int) (unsigned char)33));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 0; i_29 < 13; i_29 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) max((var_48), (var_7)));
                        var_49 = (-(((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))))));
                        var_50 = (~(140720308486144LL));
                    }
                }
                var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_76 [i_18 + 1] [i_18 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) : (arr_20 [8LL] [i_18 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 13; i_30 += 3) 
                {
                    for (int i_31 = 1; i_31 < 12; i_31 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_31 - 1] [i_31] [i_31] [i_31 - 1] [i_31 + 1] [i_31 - 1])) ? (((/* implicit */int) arr_24 [i_31 + 1] [i_31 - 1] [i_31 - 1] [i_31 + 1] [i_31 + 1] [i_31 + 1])) : (((/* implicit */int) arr_11 [i_31 - 1] [i_31] [i_31] [i_31 + 1] [i_31 - 1] [i_31 + 1])))))));
                            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((long long int) var_7)))));
                        }
                    } 
                } 
                arr_99 [i_0] [i_0] [6LL] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) | (-4963274548320897872LL))) < (((/* implicit */long long int) var_7))));
            }
            arr_100 [i_0] [10LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)103))));
        }
        for (unsigned int i_32 = 1; i_32 < 12; i_32 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_33 = 4; i_33 < 11; i_33 += 3) 
            {
                var_54 = max((max((4294967295U), (var_0))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (3330774272U) : (arr_36 [i_0] [i_32] [i_32] [i_33 + 2]))));
                var_55 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_4)))) ? (-6780280154944519934LL) : (((/* implicit */long long int) var_15))))));
                var_56 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */int) arr_25 [i_0])), (arr_97 [9U] [i_32] [i_33 - 4] [i_0] [7LL]))) >> (((((((/* implicit */_Bool) (unsigned char)219)) ? (218056540U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))))) - (218056525U)))))) ? (((((/* implicit */_Bool) 4294967270U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0] [i_32] [i_33 - 3] [i_33 - 3])) ? ((-2147483647 - 1)) : (1916906624)))) : (((var_7) ^ (4294967292U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (-357185520) : (((((/* implicit */int) (unsigned char)241)) >> (((-6908386243695872790LL) + (6908386243695872798LL))))))))));
            }
            /* vectorizable */
            for (unsigned int i_34 = 2; i_34 < 10; i_34 += 3) 
            {
                arr_108 [i_0] [i_32 - 1] [i_34 - 1] = (unsigned char)138;
                /* LoopNest 2 */
                for (unsigned char i_35 = 0; i_35 < 13; i_35 += 3) 
                {
                    for (long long int i_36 = 0; i_36 < 13; i_36 += 3) 
                    {
                        {
                            var_57 &= ((/* implicit */long long int) (~(410279649U)));
                            arr_113 [i_0] [i_35] [i_36] = ((/* implicit */unsigned char) (~(var_10)));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_37 = 0; i_37 < 13; i_37 += 2) 
            {
                for (unsigned int i_38 = 0; i_38 < 13; i_38 += 4) 
                {
                    {
                        var_58 = ((/* implicit */int) max((((/* implicit */long long int) (+(var_12)))), (((long long int) 2476124464U))));
                        arr_121 [i_0] [i_32] [6LL] [i_38] = ((/* implicit */long long int) max((((unsigned char) ((((/* implicit */_Bool) 305628037U)) ? (((/* implicit */int) (unsigned char)161)) : (arr_84 [12] [i_32] [i_32 - 1] [i_32 - 1] [(unsigned char)6])))), (var_13)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_39 = 0; i_39 < 13; i_39 += 4) 
            {
                arr_126 [i_0] [i_32 + 1] = ((/* implicit */unsigned char) (-(-140720308486161LL)));
                var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_32] [i_32] [i_32] [i_32 - 1])) ? (arr_117 [i_39] [i_32 - 1] [i_0]) : (arr_38 [7U] [i_39])));
                /* LoopSeq 2 */
                for (long long int i_40 = 0; i_40 < 13; i_40 += 3) /* same iter space */
                {
                    var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_39] [i_40] [i_0] [i_32])) ? (var_4) : (var_0)))) ? (((/* implicit */int) (unsigned char)165)) : (((int) 1754427796))));
                    arr_131 [(unsigned char)6] [i_32] [(unsigned char)6] [i_39] [i_40] = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_32 - 1] [i_32 + 1] [i_32 - 1])) ? (8249506448083508296LL) : (-1LL)));
                    var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (740702431) : (2147483647)));
                    var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) -2387976283428043897LL))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_106 [i_39] [i_39])))))));
                }
                for (long long int i_41 = 0; i_41 < 13; i_41 += 3) /* same iter space */
                {
                    var_63 = ((/* implicit */long long int) min((var_63), ((+(-1LL)))));
                    var_64 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (410689746) : (((/* implicit */int) (unsigned char)79)))));
                }
            }
        }
        var_65 = ((/* implicit */unsigned int) ((long long int) ((max((6366382835470569529LL), (((/* implicit */long long int) var_12)))) == (((/* implicit */long long int) (-(0U)))))));
    }
    /* LoopNest 2 */
    for (long long int i_42 = 0; i_42 < 19; i_42 += 1) 
    {
        for (unsigned int i_43 = 0; i_43 < 19; i_43 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_44 = 0; i_44 < 19; i_44 += 3) 
                {
                    var_66 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? ((-(410689746))) : (((int) -1754427797))))) / (((((/* implicit */_Bool) 16301478643533560LL)) ? (((/* implicit */long long int) (~(2098350874U)))) : (arr_137 [i_43] [i_42])))));
                    var_67 = ((/* implicit */int) max((var_67), (((/* implicit */int) max((max((3996780146U), (1633116553U))), (((/* implicit */unsigned int) ((unsigned char) 2U))))))));
                    /* LoopSeq 1 */
                    for (long long int i_45 = 0; i_45 < 19; i_45 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_46 = 0; i_46 < 19; i_46 += 3) 
                        {
                            var_68 = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) -6307780519726828058LL))) >= (max((((/* implicit */long long int) ((unsigned char) -1054146141))), (6366382835470569529LL)))));
                            var_69 &= ((/* implicit */long long int) (~(2173083549U)));
                        }
                        var_70 = ((/* implicit */int) max(((-(-7941016837194920444LL))), (((((/* implicit */long long int) var_7)) / (((((/* implicit */_Bool) -1193729648)) ? (-2387976283428043904LL) : (arr_135 [4U])))))));
                    }
                }
                var_71 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1871515692), (-1054146149)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2442848514U)))) : (((((/* implicit */_Bool) arr_144 [i_42])) ? (16301478643533560LL) : (((/* implicit */long long int) arr_139 [i_42] [i_42] [i_43] [i_43]))))));
            }
        } 
    } 
    var_72 = ((/* implicit */long long int) (-(var_2)));
}
