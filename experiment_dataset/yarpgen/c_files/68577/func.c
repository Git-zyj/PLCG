/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68577
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2] [(short)1])) && (((/* implicit */_Bool) (~(var_6)))))))));
                            arr_12 [i_3] = (+(((((/* implicit */_Bool) min((var_8), (-2104891330)))) ? (((22U) << (((2104891329) - (2104891324))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-5879)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    for (short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                                var_13 -= ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_0 - 1] [i_4 + 2] [i_5 + 1] [i_6 - 2])))) >> (((((((/* implicit */_Bool) (short)1471)) ? (4294967274U) : (44U))) - (4294967273U)))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 2104891349)) : (max((((/* implicit */unsigned int) ((int) arr_8 [i_1] [i_5 - 2] [i_6]))), (arr_4 [i_4])))));
                                var_15 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_18 [i_0] [7U])) : (((/* implicit */int) (_Bool)0))))), ((-(var_6)))))));
                                var_16 = min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((var_7) ? (-903096954) : (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_6 - 2])))) : (var_8))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            arr_27 [i_8] = ((unsigned int) (short)-32752);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = max((((/* implicit */unsigned int) min(((short)-1787), ((short)-29962)))), (((((/* implicit */_Bool) -2104891305)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 13; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_36 [i_10] [i_1] [i_9] [i_0 - 1] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) (short)32766))))))))) : (((((/* implicit */_Bool) min((2169403947U), (((/* implicit */unsigned int) var_5))))) ? (max((arr_14 [i_10] [i_10]), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) arr_24 [i_0]))))));
                                var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) (((-(var_5))) & (min((var_0), (var_5))))))));
                                arr_37 [i_1] [i_1] [i_10] [i_11 - 1] |= ((max((((/* implicit */unsigned int) var_3)), (max((var_10), (((/* implicit */unsigned int) var_3)))))) >> (max((-2006516270), (((/* implicit */int) max((var_3), (arr_21 [i_0] [i_1] [i_9] [i_9 + 1] [i_9] [i_10] [i_11])))))));
                                var_18 = ((/* implicit */unsigned int) ((int) min(((-(var_10))), (arr_34 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 1] [i_1] [i_1]))));
                                arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) arr_32 [i_9] [i_1 - 2] [i_9] [i_1 - 2] [i_11] [i_11]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_1] [i_1] [(_Bool)1] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)30457))));
                            arr_47 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-6042))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_13])) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) var_3)), (var_5)))))) : (((134184960U) * (3019400260U)))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), ((-(((arr_42 [i_0] [i_1 - 2] [i_12]) ? (arr_3 [(_Bool)1] [i_1 + 1]) : (2125563333U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 4; i_14 < 21; i_14 += 4) 
    {
        for (int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 2; i_16 < 19; i_16 += 2) 
                {
                    for (short i_17 = 1; i_17 < 20; i_17 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((unsigned int) var_9));
                            arr_57 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_48 [i_14 + 1]), (arr_48 [i_15])))) ? (((unsigned int) (+(1930786894U)))) : (var_10)));
                            arr_58 [i_14] [i_15] [i_17] = var_8;
                            var_22 = ((/* implicit */short) min((((_Bool) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))), (((_Bool) ((unsigned int) var_4)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 21; i_18 += 1) 
                {
                    for (unsigned int i_19 = 2; i_19 < 19; i_19 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) max((3702323258U), (((/* implicit */unsigned int) max((((/* implicit */short) arr_52 [i_14])), ((short)1656))))))))))));
                            arr_64 [i_14] [i_14 + 1] [i_14] [i_14 - 3] [i_14] [i_14 - 1] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) * ((~(var_6)))))) ? (((/* implicit */int) (short)0)) : (min((var_0), (((/* implicit */int) arr_52 [i_14])))));
                            arr_65 [i_14] [11U] [i_14] [i_18 - 2] [i_18] [i_19] = (-(((((/* implicit */_Bool) arr_60 [i_14 - 4] [i_14 + 1] [i_18 - 3] [i_18 + 1])) ? (arr_50 [i_14 - 3]) : (arr_50 [i_14 - 1]))));
                            var_24 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 592644027U)) ? (var_9) : (((/* implicit */int) var_7)))))))) / ((~(((/* implicit */int) (short)-24712))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        for (short i_22 = 2; i_22 < 18; i_22 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((int) var_0)))))));
                                arr_73 [i_15] [i_20] [i_21] [i_22] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_23 = 2; i_23 < 21; i_23 += 3) 
    {
        for (short i_24 = 0; i_24 < 23; i_24 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 23; i_25 += 3) 
                {
                    for (unsigned int i_26 = 0; i_26 < 23; i_26 += 3) 
                    {
                        {
                            arr_84 [i_23] [i_23] [i_25] [(short)5] = (+(((2542313665U) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))));
                            var_26 ^= ((/* implicit */unsigned int) (~(min(((-(var_8))), (var_9)))));
                            var_27 += var_6;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 23; i_28 += 3) 
                    {
                        {
                            arr_91 [i_23] [i_23] = ((/* implicit */_Bool) (~(min(((+(2364180392U))), (arr_75 [17])))));
                            var_28 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_74 [i_24]))))), ((~(3702323249U)))));
                            arr_92 [8U] [i_24] [i_27] [i_23] [i_28] = ((/* implicit */short) var_3);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_29 = 2; i_29 < 21; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        for (unsigned int i_31 = 0; i_31 < 23; i_31 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 65058916)) ? (var_5) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */int) ((min((var_0), (var_8))) != (4095)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) && ((_Bool)1))))));
                                var_30 ^= ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    for (short i_33 = 3; i_33 < 21; i_33 += 2) 
                    {
                        for (unsigned int i_34 = 0; i_34 < 23; i_34 += 4) 
                        {
                            {
                                var_31 ^= ((/* implicit */int) (+(max((((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))), (max((arr_94 [i_23] [i_32] [i_23] [i_24]), (((/* implicit */unsigned int) (_Bool)1))))))));
                                arr_108 [i_23] [i_23] [i_32] [i_23] = (+((-(var_9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
    {
        for (int i_36 = 0; i_36 < 15; i_36 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_37 = 1; i_37 < 11; i_37 += 3) 
                {
                    for (int i_38 = 0; i_38 < 15; i_38 += 1) 
                    {
                        for (unsigned int i_39 = 2; i_39 < 13; i_39 += 2) 
                        {
                            {
                                arr_121 [i_35] = (-(max((((/* implicit */unsigned int) (short)-29962)), (3744132492U))));
                                arr_122 [i_35] [i_35] [i_35] [i_35] [i_35] [i_38] [i_39] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                                arr_123 [i_35] [i_35] [i_35] [i_35] [i_35] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_98 [i_37 + 3] [i_37 + 3] [i_37 + 2] [i_39 - 2] [i_39 + 2]))));
                                arr_124 [i_35] [i_36] [i_37 + 4] [i_38] [i_39] [i_39] = min((arr_99 [i_35] [(short)6] [i_37 - 1] [i_38] [i_39 + 2]), (((((/* implicit */_Bool) ((int) 3098653883U))) ? (var_6) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_40 = 4; i_40 < 13; i_40 += 2) 
                {
                    for (int i_41 = 3; i_41 < 14; i_41 += 4) 
                    {
                        {
                            var_32 *= ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_116 [i_35] [i_40 + 2] [i_40 + 2] [i_41]))))) / (((((/* implicit */_Bool) 13U)) ? (25U) : (((/* implicit */unsigned int) 469762048)))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (var_10)));
                            var_34 |= ((/* implicit */short) (((~(((var_7) ? (131056U) : (var_6))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_35] [i_36] [i_40] [i_40] [i_41 - 3])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 15; i_42 += 1) 
                {
                    for (int i_43 = 0; i_43 < 15; i_43 += 2) 
                    {
                        {
                            arr_136 [i_43] [i_43] [i_43] [i_43] [i_43] [i_43] = ((/* implicit */unsigned int) var_4);
                            arr_137 [i_35] [i_36] [i_42] [i_43] = ((/* implicit */short) var_10);
                            var_35 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-29962))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((((/* implicit */_Bool) ((var_10) / (arr_85 [i_35] [i_36])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147482624U)) ? (((/* implicit */int) var_1)) : (var_9)))), (874032595U))) : (3098653883U)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_44 = 0; i_44 < 15; i_44 += 3) 
                {
                    for (unsigned int i_45 = 0; i_45 < 15; i_45 += 3) 
                    {
                        for (short i_46 = 3; i_46 < 13; i_46 += 1) 
                        {
                            {
                                arr_145 [i_35] [i_36] [i_44] [7U] [i_46 + 2] = ((/* implicit */unsigned int) arr_90 [i_35] [16] [8]);
                                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_2)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
                {
                    for (unsigned int i_48 = 0; i_48 < 15; i_48 += 3) 
                    {
                        {
                            arr_153 [i_47] [i_36] [i_47] [i_48] = ((((/* implicit */_Bool) (~(min((2611689632U), (((/* implicit */unsigned int) (short)-18510))))))) ? (((/* implicit */int) ((3424597557U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-24752)))))) : ((+(((/* implicit */int) ((short) arr_62 [i_35]))))));
                            var_38 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (378476497U)))) ? (((3757875564U) & (1389754194U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (arr_146 [i_35] [i_36] [6U] [6U])))))) >> (max((((((/* implicit */_Bool) arr_128 [i_47])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_104 [i_35] [i_36] [i_47] [3]))), (((/* implicit */unsigned int) var_3)))));
                            var_39 = ((unsigned int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
    {
        for (_Bool i_50 = 0; i_50 < 1; i_50 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_51 = 1; i_51 < 17; i_51 += 3) 
                {
                    for (_Bool i_52 = 0; i_52 < 1; i_52 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18769))) : (3475990256U)))))) ? (((((/* implicit */_Bool) (short)-16980)) ? (323958753U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_8))))));
                            arr_166 [i_49] [i_50] [i_49] [i_50] [i_51] [i_50] = ((/* implicit */short) (+(max((0), (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_53 = 0; i_53 < 18; i_53 += 2) 
                {
                    for (unsigned int i_54 = 0; i_54 < 18; i_54 += 2) 
                    {
                        {
                            arr_172 [i_50] [i_53] [i_50] = ((/* implicit */unsigned int) (~(65058928)));
                            var_41 *= ((unsigned int) 1892343943U);
                            var_42 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_55 = 0; i_55 < 18; i_55 += 2) 
                {
                    for (short i_56 = 1; i_56 < 16; i_56 += 2) 
                    {
                        for (unsigned int i_57 = 0; i_57 < 18; i_57 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) ((short) 3384859066U))) : ((~(var_9)))))) ? (((arr_160 [i_50] [i_56] [i_56] [i_56]) ? (((int) arr_90 [(_Bool)1] [i_50] [i_57])) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-18510))))))) : (((((/* implicit */_Bool) (short)-18502)) ? (((/* implicit */int) (short)-22809)) : ((-(((/* implicit */int) (_Bool)0))))))));
                                var_44 = ((/* implicit */_Bool) ((unsigned int) var_2));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_58 = 0; i_58 < 18; i_58 += 4) 
                {
                    for (_Bool i_59 = 0; i_59 < 1; i_59 += 1) 
                    {
                        for (_Bool i_60 = 0; i_60 < 1; i_60 += 1) 
                        {
                            {
                                arr_187 [i_50] [i_50] [i_50] [i_50] [i_50] [i_50] = var_0;
                                arr_188 [i_49] [i_50] [i_58] [i_58] [i_60] &= ((/* implicit */short) ((((/* implicit */_Bool) 259599759)) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) (-(16760832)))) ? (-259599754) : (((/* implicit */int) (short)5101))))));
                                var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-3794))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_61 = 0; i_61 < 18; i_61 += 3) 
                {
                    for (_Bool i_62 = 0; i_62 < 1; i_62 += 1) 
                    {
                        for (short i_63 = 0; i_63 < 18; i_63 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_105 [i_49] [i_50] [i_61] [i_62]) ? (((/* implicit */int) arr_61 [i_49] [i_49] [i_49])) : (((/* implicit */int) var_3))))) ? ((-(3433689826U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (874032587U)))) ? ((-(arr_60 [i_49] [i_49] [i_49] [i_49]))) : ((~(((/* implicit */int) var_7))))))))))));
                                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) var_0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
