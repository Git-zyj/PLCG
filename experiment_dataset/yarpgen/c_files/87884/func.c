/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87884
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) min((min(((unsigned short)47306), (((/* implicit */unsigned short) (unsigned char)2)))), (((/* implicit */unsigned short) (signed char)14))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) var_1));
                        arr_13 [i_2] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (_Bool)1)));
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((var_7) * (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        var_16 = ((/* implicit */short) var_1);
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_2 - 2] [i_2 - 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        var_17 = ((/* implicit */long long int) var_11);
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_3] = ((unsigned char) (_Bool)1);
                        var_18 = ((/* implicit */_Bool) min((var_18), ((((_Bool)1) || (((/* implicit */_Bool) (-(var_1))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((arr_10 [i_0] [i_1] [i_2] [i_8]) << (((((/* implicit */int) var_11)) - (56663))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */signed char) arr_5 [i_2 - 1] [i_8]);
                    }
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_19 [i_2 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_33 [i_0] [i_1] [i_0] [i_1] [i_3] [5U] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)205)) || (((/* implicit */_Bool) var_13))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_38 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 + 1] [i_2 + 1]))) : (var_10)));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((arr_19 [i_10] [i_11]) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        var_22 = ((/* implicit */long long int) var_14);
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 1715462271))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (_Bool)1);
                        arr_47 [i_13] [i_1] [i_13] = ((/* implicit */unsigned short) ((long long int) var_8));
                    }
                    for (unsigned int i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                        var_26 = ((/* implicit */unsigned long long int) -12LL);
                        arr_50 [i_14 - 1] [i_12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                    }
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [(signed char)2] [i_0]);
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_46 [2] [i_2 + 1] [i_2] [i_2 - 1] [i_2])))))));
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_4)));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1715462271)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_16 - 2] [i_16 - 2]))) : (var_3))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_16 - 2] [i_2 + 1] [(signed char)7] [i_2 - 2] [i_2 - 2])) || (((/* implicit */_Bool) var_2))));
                    }
                    var_32 += ((/* implicit */_Bool) var_1);
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 1; i_17 < 10; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)65534))));
                    }
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 1) 
                    {
                        var_35 = ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                        arr_60 [i_18] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_14);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((unsigned int) (+(-7845488248825754492LL))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        arr_64 [i_12] [i_12] [i_12] [i_12] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)234);
                        arr_65 [(signed char)11] [(signed char)11] [i_12] = (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 2])));
                    }
                }
                for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) (~(var_9)));
                        var_38 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        var_39 = ((/* implicit */_Bool) var_10);
                        var_40 += ((/* implicit */unsigned long long int) var_6);
                    }
                    for (unsigned char i_22 = 1; i_22 < 9; i_22 += 1) 
                    {
                        arr_73 [i_22] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_22 + 2] [i_2] [i_22] [i_22] [i_2 - 2] [i_2 - 2] [i_2])) ? (((unsigned int) 570295069)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))));
                        var_41 += ((/* implicit */_Bool) (~(var_9)));
                    }
                    var_42 = ((/* implicit */signed char) (~(var_7)));
                    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_2 - 1] [i_2 - 2])) << (((/* implicit */int) arr_23 [i_2 + 1] [i_2 - 2]))));
                }
                var_44 = ((/* implicit */unsigned char) 18446744073709551614ULL);
                arr_74 [i_0] [i_0] [4LL] = ((/* implicit */int) (!((_Bool)1)));
                /* LoopSeq 3 */
                for (unsigned char i_23 = 3; i_23 < 10; i_23 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        arr_82 [i_0] [i_1] [i_24] [i_23] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) == (10534947221886733662ULL)));
                        arr_83 [i_0] [i_1] [i_24] [i_23] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_36 [i_23] [i_23] [i_23 + 1] [i_23])) : (((/* implicit */int) arr_78 [i_23] [i_23] [i_23 - 1] [i_23] [i_23]))));
                    }
                    arr_84 [i_0] = ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                }
                for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                    var_46 = ((/* implicit */unsigned short) ((unsigned char) (-(var_14))));
                }
                for (signed char i_26 = 0; i_26 < 12; i_26 += 1) 
                {
                    var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_14) / (((/* implicit */int) (unsigned char)155)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        var_48 = ((/* implicit */_Bool) (+(14497807506157735930ULL)));
                        arr_91 [i_27] [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                    }
                }
                arr_92 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */signed char) 1534865365U);
                var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18439456536564736045ULL)) ? (((/* implicit */int) arr_77 [i_1] [i_28] [i_1] [i_1] [2] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 7845488248825754492LL)) && (((/* implicit */_Bool) 1024183140))))))))));
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
            {
                var_51 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1))))));
                var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 283163536)) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15229))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13))))));
                var_53 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) == (((((/* implicit */_Bool) arr_9 [i_29] [i_29] [3U] [i_1] [i_0] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_30 = 0; i_30 < 12; i_30 += 1) 
            {
                for (signed char i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    {
                        var_54 = ((/* implicit */unsigned int) ((arr_31 [i_31] [i_30] [i_30] [i_1] [i_1] [i_0] [i_0]) / (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_102 [i_0] [i_0] = ((((/* implicit */_Bool) arr_55 [i_31] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_1] [i_1] [i_31] [i_1]))) : (var_3));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_32 = 3; i_32 < 11; i_32 += 1) 
            {
                var_55 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)38106))));
                arr_106 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((signed char) 742998403));
            }
            for (unsigned int i_33 = 3; i_33 < 11; i_33 += 1) 
            {
                var_56 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (-12LL))));
                arr_109 [i_33] [i_33] [i_33] = ((/* implicit */long long int) ((-1513671956) - (var_1)));
            }
            for (unsigned int i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                var_57 += ((/* implicit */long long int) (signed char)-23);
                var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)));
                /* LoopNest 2 */
                for (unsigned int i_35 = 3; i_35 < 9; i_35 += 1) 
                {
                    for (signed char i_36 = 3; i_36 < 9; i_36 += 1) 
                    {
                        {
                            var_59 = ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_34] [i_35 + 2] [i_35 - 1] [i_34] [i_36 - 3]))) : (1610612736U));
                            arr_118 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_34] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                            var_60 = ((/* implicit */unsigned int) (+((+(var_10)))));
                            var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) ((-229891722) / (((/* implicit */int) (signed char)-21)))))));
                            var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_8 [i_35 + 2]) : (var_4)));
                        }
                    } 
                } 
            }
            arr_119 [i_1] [10] [10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-1513671956) : (((/* implicit */int) arr_77 [i_1] [(signed char)0] [i_1] [(signed char)10] [i_0] [7]))));
            /* LoopNest 3 */
            for (int i_37 = 0; i_37 < 12; i_37 += 1) 
            {
                for (signed char i_38 = 1; i_38 < 11; i_38 += 1) 
                {
                    for (signed char i_39 = 1; i_39 < 11; i_39 += 1) 
                    {
                        {
                            arr_127 [i_39] [i_39] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                            var_63 = ((/* implicit */int) max((var_63), (((/* implicit */int) ((((/* implicit */_Bool) ((3976901852U) << (((((/* implicit */int) var_8)) - (20902)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((arr_14 [10U] [10U] [i_37] [i_37] [i_37]) + (((/* implicit */long long int) var_13)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_40 = 1; i_40 < 9; i_40 += 1) 
        {
            var_64 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (var_4)));
            arr_132 [i_0] [i_40] = ((/* implicit */_Bool) var_11);
            /* LoopSeq 2 */
            for (unsigned short i_41 = 1; i_41 < 11; i_41 += 1) 
            {
                arr_136 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_45 [i_0] [(unsigned char)7] [i_0] [(unsigned char)7] [i_0] [i_0]);
                var_65 = ((/* implicit */unsigned long long int) min((var_65), (((var_10) ^ (((/* implicit */unsigned long long int) var_1))))));
            }
            for (unsigned int i_42 = 3; i_42 < 11; i_42 += 1) 
            {
                var_66 = ((/* implicit */int) ((_Bool) var_5));
                arr_139 [i_42] [i_42] [i_42] [i_42] = (!(((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
            }
        }
        /* LoopNest 2 */
        for (signed char i_43 = 3; i_43 < 11; i_43 += 1) 
        {
            for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
            {
                {
                    var_67 = ((/* implicit */int) min((var_67), (((/* implicit */int) ((((/* implicit */unsigned int) -1268690822)) == (var_13))))));
                    /* LoopSeq 1 */
                    for (signed char i_45 = 0; i_45 < 12; i_45 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned char) ((var_4) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (-1346663343))))));
                        arr_149 [i_44] [7LL] [i_44] [i_44] [i_43] [i_44] = ((/* implicit */int) ((((/* implicit */int) arr_71 [(unsigned char)9] [i_44] [i_43] [i_43] [i_0])) > (((/* implicit */int) var_8))));
                        arr_150 [(unsigned short)2] [i_44] [(unsigned short)2] [i_0] [(unsigned short)2] &= ((/* implicit */signed char) (unsigned char)112);
                    }
                    var_69 = ((/* implicit */signed char) arr_18 [i_43 + 1]);
                }
            } 
        } 
        arr_151 [3] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (var_3))))));
    }
    /* vectorizable */
    for (signed char i_46 = 0; i_46 < 12; i_46 += 1) /* same iter space */
    {
        arr_154 [i_46] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned int i_47 = 1; i_47 < 9; i_47 += 1) 
        {
            arr_157 [i_46] [i_46] [i_47] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (signed char)67)))) > (((/* implicit */int) arr_86 [i_46] [i_46] [i_47] [i_47] [i_47] [i_47]))));
            arr_158 [i_46] [i_46] [i_47] = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_47 - 1] [i_46]))) : (-2722802139262546450LL)));
        }
        for (unsigned char i_48 = 2; i_48 < 11; i_48 += 1) 
        {
            var_70 = ((/* implicit */unsigned char) var_7);
            /* LoopSeq 1 */
            for (unsigned int i_49 = 1; i_49 < 8; i_49 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_50 = 0; i_50 < 12; i_50 += 1) 
                {
                    for (_Bool i_51 = 0; i_51 < 1; i_51 += 1) 
                    {
                        {
                            var_71 = ((/* implicit */_Bool) ((((var_10) >= (((/* implicit */unsigned long long int) var_14)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_12))))));
                            arr_168 [i_51] [10U] [i_49] [i_46] [(_Bool)1] [i_46] [(_Bool)1] = ((/* implicit */long long int) ((unsigned char) -1513671966));
                            arr_169 [i_46] [i_46] [i_49] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_90 [i_48 + 1] [i_49 + 1] [i_49 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_48 + 1] [i_49 + 2] [i_49 + 2]))) : (var_10)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_52 = 0; i_52 < 12; i_52 += 1) 
                {
                    var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) var_8))));
                    var_73 = ((/* implicit */signed char) max((var_73), (((/* implicit */signed char) var_2))));
                    /* LoopSeq 1 */
                    for (long long int i_53 = 3; i_53 < 10; i_53 += 1) 
                    {
                        arr_176 [i_52] [i_46] [i_46] = ((/* implicit */unsigned short) arr_135 [i_46] [i_46] [(unsigned short)1] [i_53]);
                        var_74 = ((/* implicit */long long int) var_3);
                        arr_177 [i_46] [i_46] [i_46] [(_Bool)1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                }
                var_75 = ((/* implicit */unsigned short) max((var_75), (((/* implicit */unsigned short) var_9))));
                var_76 += ((/* implicit */signed char) var_5);
            }
            /* LoopNest 2 */
            for (unsigned short i_54 = 0; i_54 < 12; i_54 += 1) 
            {
                for (unsigned char i_55 = 1; i_55 < 10; i_55 += 1) 
                {
                    {
                        var_77 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) ? (var_4) : (arr_171 [i_48 + 1] [i_46] [i_55 + 2] [i_46])));
                        var_78 = ((/* implicit */unsigned char) ((18291408158522759145ULL) > (((/* implicit */unsigned long long int) 2545688753U))));
                        arr_183 [i_55] [i_46] [i_46] [i_46] = ((/* implicit */_Bool) ((unsigned char) arr_55 [i_48] [i_48] [i_48 - 1] [8] [i_48]));
                        var_79 = ((/* implicit */unsigned int) min((var_79), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_46] [i_48 - 1] [i_46] [i_48 + 1] [i_48] [i_55]))) - (var_3))))));
                    }
                } 
            } 
        }
        var_80 = ((/* implicit */signed char) min((var_80), (((/* implicit */signed char) var_2))));
    }
}
