/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65612
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_20 = var_5;
        var_21 = ((/* implicit */unsigned char) var_9);
        var_22 = ((/* implicit */unsigned char) 3014427756U);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) (short)22524)))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))));
        arr_7 [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_12))));
        var_23 = ((/* implicit */long long int) ((signed char) var_2));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) var_16);
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)255);
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((var_10) ^ (((/* implicit */int) (unsigned char)69)))));
            arr_15 [i_2] &= 2991754908U;
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned short)42284)) : (((/* implicit */int) var_0)))));
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_23 [i_4] = ((/* implicit */unsigned long long int) (+(arr_21 [i_1] [i_1] [i_3] [i_4])));
                var_25 = ((/* implicit */signed char) arr_20 [(unsigned char)11] [(unsigned short)11]);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)16)));
                arr_26 [i_1] [i_3] |= ((/* implicit */short) var_8);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 += ((/* implicit */_Bool) var_7);
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) - (-513005970586358585LL)));
                        var_29 = ((/* implicit */unsigned short) 4294967295U);
                        var_30 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)240))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_38 [i_1] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)47)))))));
                        var_31 = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((long long int) var_4));
                        arr_41 [i_10 + 1] [i_10] [i_10 - 2] [i_10] [i_10 + 1] [i_10] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_31 [i_1] [3U] [i_6] [i_7])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (short)8826)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                    var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)109)) : (2147483647)));
                    var_34 = ((/* implicit */short) var_5);
                    var_35 *= ((/* implicit */unsigned int) var_5);
                }
                for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    arr_45 [i_3] [i_6] [i_3] [i_1] = ((/* implicit */int) arr_29 [i_11] [i_6] [i_3] [i_1]);
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3LL) & (((/* implicit */long long int) 4294967279U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1314121188U)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)128))))) : ((+(1548777636U)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) var_9);
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)18301)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (7102669750197061363ULL))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) arr_19 [i_1] [i_3]);
                        arr_51 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (-4372021900689335310LL) : (((/* implicit */long long int) (~(arr_19 [i_11] [i_13]))))));
                        var_41 ^= var_14;
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [(signed char)9] [i_1] [i_1] [i_1] [i_1])) ? ((-(((/* implicit */int) (short)-8843)))) : (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_43 = ((/* implicit */unsigned short) arr_29 [i_1] [i_3] [i_6] [2LL]);
                    }
                }
            }
            for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_44 = ((/* implicit */signed char) 513005970586358585LL);
                    var_45 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3))))));
                    var_46 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((513005970586358585LL) > (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))));
                    var_47 -= ((/* implicit */unsigned short) var_6);
                }
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_0))));
                var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((unsigned int) (short)6671)))));
            }
            var_50 = (-2147483647 - 1);
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_3] [i_1] [(unsigned char)5])) | (((/* implicit */int) var_18)))))));
        }
        for (unsigned char i_17 = 3; i_17 < 11; i_17 += 2) 
        {
            arr_63 [i_17 + 1] [i_17] = (unsigned char)158;
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                var_52 = ((/* implicit */unsigned char) (+(var_10)));
                var_53 = ((/* implicit */unsigned short) (short)-6308);
            }
        }
        for (unsigned short i_19 = 3; i_19 < 11; i_19 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_20 = 2; i_20 < 11; i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        {
                            var_54 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) ((unsigned char) 6816633436492661782LL))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) <= (var_8))))));
                            var_55 = ((/* implicit */unsigned char) 9223372036854775807LL);
                        }
                    } 
                } 
                var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) -513005970586358585LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
                var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_19 + 1] [i_19 - 2] [1ULL]))));
                arr_79 [i_1] [i_19] [i_20] = ((/* implicit */long long int) arr_5 [i_1] [i_19 - 2]);
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))));
                            var_59 |= var_15;
                            arr_84 [i_1] [i_19] [i_20] [6U] [i_24] &= ((/* implicit */unsigned short) ((unsigned char) (short)-8589));
                            var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_13))) && (((/* implicit */_Bool) arr_53 [i_24] [i_19]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_25 = 2; i_25 < 11; i_25 += 1) /* same iter space */
            {
                var_61 -= ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    for (unsigned short i_27 = 3; i_27 < 10; i_27 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)61814)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))));
                            var_63 = var_19;
                        }
                    } 
                } 
            }
            var_64 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (signed char i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 3) 
                {
                    {
                        var_65 ^= ((/* implicit */_Bool) (-((~(var_2)))));
                        arr_99 [i_19 - 1] [i_19 - 1] [(signed char)11] [i_19 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 933013689U))));
                        arr_100 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(14030331144836033280ULL)));
                        var_66 = ((((/* implicit */_Bool) (short)6308)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_89 [i_1] [3U] [i_28])));
                        var_67 = ((/* implicit */unsigned long long int) arr_30 [i_19 - 3] [i_19 + 1]);
                    }
                } 
            } 
            var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))));
            /* LoopSeq 3 */
            for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 1) 
            {
                var_69 = ((/* implicit */unsigned char) max((var_69), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)66)))))));
                /* LoopSeq 3 */
                for (long long int i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_32 = 4; i_32 < 11; i_32 += 3) 
                    {
                        var_70 = var_0;
                        var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) ((var_10) <= (((/* implicit */int) var_18)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_33 = 0; i_33 < 12; i_33 += 4) 
                    {
                        var_72 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)74)) == (((/* implicit */int) (signed char)78))));
                        var_73 = ((/* implicit */unsigned char) min((var_73), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
                    }
                }
                for (signed char i_34 = 0; i_34 < 12; i_34 += 3) /* same iter space */
                {
                    arr_115 [i_1] [i_19 - 1] [i_19] [i_34] [(unsigned short)1] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(3918210335U))));
                    var_74 = ((/* implicit */unsigned int) ((long long int) 2758242149U));
                    var_75 = ((((((/* implicit */long long int) 0U)) == (4611686018427387904LL))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))));
                }
                for (signed char i_35 = 0; i_35 < 12; i_35 += 3) /* same iter space */
                {
                    var_76 -= ((/* implicit */unsigned short) var_16);
                    var_77 = ((/* implicit */long long int) var_11);
                }
            }
            for (signed char i_36 = 0; i_36 < 12; i_36 += 2) /* same iter space */
            {
                arr_120 [i_36] [i_19] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)59772))));
                arr_121 [i_36] [i_19 - 1] [i_36] [i_1] = ((/* implicit */int) var_19);
                /* LoopNest 2 */
                for (unsigned int i_37 = 2; i_37 < 11; i_37 += 1) 
                {
                    for (unsigned short i_38 = 2; i_38 < 9; i_38 += 1) 
                    {
                        {
                            arr_127 [i_38 + 2] [i_37] [(short)3] [i_19 + 1] [i_1] = var_18;
                            var_78 = var_11;
                            arr_128 [i_1] = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)31))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_1] [i_19 + 1] [i_1] [i_19 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44554))) % (var_8))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    for (unsigned char i_40 = 0; i_40 < 12; i_40 += 2) 
                    {
                        {
                            var_79 = ((/* implicit */long long int) min((var_79), (((/* implicit */long long int) (-(((/* implicit */int) (short)8588)))))));
                            var_80 = ((/* implicit */unsigned short) max((var_80), (((/* implicit */unsigned short) ((4106799165U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))))));
                            var_81 = ((/* implicit */short) ((((/* implicit */int) (signed char)-122)) <= (((/* implicit */int) arr_67 [i_19 - 2] [i_19]))));
                            var_82 = var_19;
                        }
                    } 
                } 
                arr_134 [i_1] [(unsigned char)7] [i_36] [(short)10] = ((/* implicit */long long int) var_14);
            }
            for (signed char i_41 = 0; i_41 < 12; i_41 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                {
                    for (short i_43 = 0; i_43 < 12; i_43 += 4) 
                    {
                        {
                            arr_144 [i_1] [i_19] [i_41] [i_42] [i_43] = ((/* implicit */_Bool) (-((-(var_4)))));
                            var_83 = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_1] [i_19 - 2]))));
                        }
                    } 
                } 
                var_84 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_137 [i_19 - 2] [i_19 + 1] [i_19 - 1] [i_19 - 2])) ? ((+(((/* implicit */int) var_13)))) : ((~(((/* implicit */int) var_3))))));
                arr_145 [i_1] [i_19] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)7))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_44 = 0; i_44 < 12; i_44 += 2) /* same iter space */
    {
        var_85 *= ((/* implicit */signed char) ((unsigned short) var_4));
        /* LoopSeq 3 */
        for (unsigned int i_45 = 0; i_45 < 12; i_45 += 1) 
        {
            arr_150 [i_44] [i_44] = ((/* implicit */signed char) (-(((/* implicit */int) var_19))));
            /* LoopNest 2 */
            for (unsigned short i_46 = 0; i_46 < 12; i_46 += 1) 
            {
                for (int i_47 = 0; i_47 < 12; i_47 += 1) 
                {
                    {
                        var_86 = ((/* implicit */long long int) min((var_86), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_49 [(unsigned char)0])) : (((/* implicit */int) (unsigned char)38)))) * (((/* implicit */int) var_18)))))));
                        arr_157 [i_47] [(signed char)9] [i_47] [i_47] = ((/* implicit */unsigned int) 136365211648ULL);
                    }
                } 
            } 
        }
        for (unsigned char i_48 = 0; i_48 < 12; i_48 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_49 = 1; i_49 < 11; i_49 += 2) 
            {
                for (signed char i_50 = 0; i_50 < 12; i_50 += 1) 
                {
                    {
                        arr_166 [i_44] [7] [(unsigned char)8] [i_48] &= ((/* implicit */signed char) (unsigned char)16);
                        var_87 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned char)82)) / (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned char)63))))));
                        var_88 = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_51 = 1; i_51 < 10; i_51 += 4) 
            {
                for (unsigned int i_52 = 0; i_52 < 12; i_52 += 1) 
                {
                    {
                        var_89 = ((/* implicit */unsigned char) min((var_89), ((unsigned char)176)));
                        arr_172 [i_52] [i_51 - 1] [i_44] = ((/* implicit */unsigned short) (signed char)-109);
                    }
                } 
            } 
        }
        for (short i_53 = 0; i_53 < 12; i_53 += 3) 
        {
            arr_175 [i_44] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_67 [i_44] [i_44])) : (((/* implicit */int) var_14))));
            var_90 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        }
    }
    for (unsigned char i_54 = 0; i_54 < 12; i_54 += 2) /* same iter space */
    {
        var_91 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)8590)), (((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_177 [i_54])) : (((/* implicit */int) (signed char)96)))))));
        /* LoopNest 3 */
        for (signed char i_55 = 0; i_55 < 12; i_55 += 2) 
        {
            for (unsigned short i_56 = 0; i_56 < 12; i_56 += 2) 
            {
                for (unsigned char i_57 = 0; i_57 < 12; i_57 += 2) 
                {
                    {
                        var_92 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_185 [i_54] [i_56] [i_56] [i_57] [i_55] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -513005970586358585LL))) ^ (max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_103 [i_54] [i_55] [1LL] [i_57])))))))));
                        var_93 = ((/* implicit */_Bool) max((var_93), (((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_14)))) / (((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)201))))))))));
                        var_94 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_11)) ? (arr_42 [i_54] [i_55] [i_56] [i_57]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((max((((/* implicit */unsigned int) (unsigned short)32119)), (1002001297U))) - (1002001293U))))) >> (((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) - (731929413U)))));
                    }
                } 
            } 
        } 
    }
    var_95 &= min(((-(max((var_4), (((/* implicit */unsigned int) (short)8591)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-70)) : ((-(((/* implicit */int) var_7))))))));
}
