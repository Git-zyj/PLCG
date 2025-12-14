/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93694
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [2U] |= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)89)) > (((/* implicit */int) ((unsigned short) arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2])))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_6 [i_4] [0U] [6U]))));
                                var_13 = ((/* implicit */unsigned short) arr_10 [i_3] [i_2] [i_1] [(unsigned short)2]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 + 2])) || (((/* implicit */_Bool) arr_16 [i_0] [i_5 + 3] [i_5] [i_5] [i_5] [i_2]))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0] [i_5 + 3] [(short)7] [(signed char)5] [i_5 - 1] [(signed char)5]) : (((/* implicit */int) arr_17 [i_1] [i_5 + 2] [i_5] [(signed char)1] [i_5] [i_5]))));
                        var_16 = ((/* implicit */unsigned char) var_5);
                    }
                    var_17 = ((/* implicit */signed char) min(((~(101240965U))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_17 [i_0] [(unsigned char)6] [i_1] [i_2] [i_2 - 1] [(unsigned char)6]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_25 [i_0] [i_0] [i_6 + 1] [i_7] [(short)8] = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3420157506U)) ? (2147483647) : (((/* implicit */int) arr_1 [i_6]))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */unsigned int) 487400741))))));
                            arr_28 [i_9] [i_8] [i_0] [i_7 + 1] [i_6] [i_0] = 4193726331U;
                            var_20 += ((/* implicit */signed char) arr_3 [i_6 + 1]);
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) var_8);
                            var_22 = ((/* implicit */unsigned short) arr_19 [i_6 + 1] [i_6 - 1]);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_8])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (((/* implicit */_Bool) arr_11 [i_7] [(short)7] [i_10])))))));
                        }
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 - 1] [i_7] [i_6 + 1] [i_6 + 1] [i_0])) ? (arr_18 [i_0] [i_6 + 1]) : (arr_22 [(unsigned short)3] [(unsigned short)3])));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)228)) ? ((~(((/* implicit */int) (unsigned short)7)))) : (arr_23 [i_6] [i_7 + 1] [i_7 - 1])));
                        }
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_26 = ((/* implicit */short) arr_4 [(signed char)7] [i_6 - 1]);
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((+(((/* implicit */int) arr_5 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])))) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)12080)) : (((/* implicit */int) arr_24 [(unsigned char)9] [i_6] [(unsigned char)9])))) - (12069))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)53455)))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) (unsigned char)154)) : (((((/* implicit */int) (unsigned short)28118)) << (((((/* implicit */int) (unsigned short)12089)) - (12089)))))));
                            var_30 = ((/* implicit */int) ((984069684U) < (((4193726357U) << (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8]) - (4050279612U)))))));
                        }
                        var_31 = var_4;
                        arr_37 [i_8] [i_7 + 1] [6] [i_6] [i_0] = (~(((((/* implicit */_Bool) 984069670U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1612789264U))));
                        var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_6] [3U] [0U] [i_0] [(unsigned short)5])) ? (arr_22 [i_0] [i_0]) : (arr_4 [i_0] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_6] [(unsigned char)2]))) : (4193726331U)));
                    }
                    for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        arr_40 [(signed char)9] [i_6] [i_6] = max((542333821), (((/* implicit */int) ((short) max((arr_17 [i_13] [(short)4] [i_6] [(short)4] [i_6] [i_0]), (((/* implicit */unsigned short) (short)-6776)))))));
                        var_33 = ((/* implicit */short) ((int) arr_11 [i_0] [5] [i_0]));
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                        var_35 = ((/* implicit */signed char) arr_10 [i_6] [i_6] [i_6] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_6] [i_7 - 1] [i_14] [i_14] = ((/* implicit */int) max((max(((unsigned short)40217), (arr_24 [i_6] [i_7] [i_15]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_15])))))));
                                var_36 = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) arr_32 [i_0]))))) ? (((unsigned int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(unsigned char)2]))))) != (arr_16 [i_0] [i_0] [i_0] [i_0] [(short)4] [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 4; i_16 < 6; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (unsigned short i_18 = 1; i_18 < 9; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_18] [i_17] [i_18 + 1] [i_17])) || (((/* implicit */_Bool) var_4))));
                            var_39 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) arr_39 [0U] [(unsigned char)5] [0U] [i_19]))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (arr_51 [i_19] [(unsigned char)1] [i_17] [i_16 - 3] [(unsigned char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_16] [i_17] [i_18 - 1] [i_19] [i_16]))))) - (4050432914U)))));
                            var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_19] [i_18] [i_18 - 1] [(short)4] [i_17] [4U] [(short)4]))));
                            arr_55 [2U] [i_18] [i_17] [i_16] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 1950011842U))) % (((/* implicit */int) ((signed char) arr_6 [i_19] [i_18 + 1] [i_16 + 3])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                for (short i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_41 = ((arr_51 [i_16] [i_16 + 1] [(unsigned short)5] [i_16] [i_16 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_16 + 4]))));
                            var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_16] [i_0] [(unsigned char)7] [i_21] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_4 [i_16] [i_21]))))));
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_16 - 4] [i_0])) ^ (((/* implicit */int) arr_8 [i_16 - 4] [i_22]))));
                            var_44 = arr_19 [i_22] [i_21];
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 1) 
    {
        for (unsigned short i_24 = 0; i_24 < 15; i_24 += 1) 
        {
            {
                var_45 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_70 [i_24] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_23]))) : (arr_70 [i_24] [i_23]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_64 [i_23])))))));
                arr_71 [i_23] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)20369)) ? (4134788998U) : (984069684U))) : (max((((/* implicit */unsigned int) var_7)), (arr_70 [i_23] [(unsigned char)7]))))), (max((((((/* implicit */_Bool) var_7)) ? (arr_65 [i_24] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_23] [i_24]))))), (((/* implicit */unsigned int) ((int) arr_69 [3U] [i_24])))))));
                /* LoopSeq 2 */
                for (int i_25 = 0; i_25 < 15; i_25 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 0; i_26 < 15; i_26 += 1) 
                    {
                        for (short i_27 = 0; i_27 < 15; i_27 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_77 [(short)0] [(short)0] [i_24] [i_23])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_79 [i_24]))))) < (((arr_68 [i_27]) + (((/* implicit */unsigned int) arr_76 [10] [13U] [i_25] [i_25])))))))));
                                arr_82 [i_23] [(short)10] [i_25] [i_26] [i_26] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [i_23])) ? (((unsigned int) arr_68 [(short)14])) : (arr_81 [i_27] [i_26] [i_25] [i_23] [i_23] [(signed char)3])));
                                var_47 = ((/* implicit */unsigned int) arr_80 [(short)1] [i_24] [i_25] [i_26] [i_27]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 0; i_28 < 15; i_28 += 4) 
                    {
                        for (unsigned short i_29 = 0; i_29 < 15; i_29 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) max(((+((-(0U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 1250818053U))) ? ((~(var_7))) : (((455271402) << (((arr_70 [i_28] [i_29]) - (1014379640U))))))))));
                                arr_87 [(unsigned short)5] [i_24] [i_25] [i_28] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)13)), (3420157506U)))))))) % (((unsigned int) max((((/* implicit */unsigned int) (unsigned short)8703)), (1246666734U))))));
                                arr_88 [(unsigned char)4] [i_24] [(unsigned char)4] [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
                for (int i_30 = 0; i_30 < 15; i_30 += 3) 
                {
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned short)5)) == (((/* implicit */int) arr_89 [i_24] [i_23]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_31 = 0; i_31 < 15; i_31 += 4) 
                    {
                        for (signed char i_32 = 0; i_32 < 15; i_32 += 4) 
                        {
                            {
                                var_50 = ((((/* implicit */_Bool) arr_90 [i_23] [4] [(short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_5));
                                var_51 = ((/* implicit */unsigned char) (((((-(455271415))) % (((((/* implicit */_Bool) arr_64 [(unsigned char)5])) ? (((/* implicit */int) (short)-32407)) : (((/* implicit */int) (short)-32414)))))) - (((/* implicit */int) (signed char)0))));
                            }
                        } 
                    } 
                }
                var_52 ^= ((unsigned int) (~(((/* implicit */int) arr_72 [i_23] [i_23]))));
                /* LoopSeq 2 */
                for (unsigned char i_33 = 0; i_33 < 15; i_33 += 3) 
                {
                    var_53 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (-1742629171)))), (2344955453U))) << (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_80 [i_23] [(short)10] [i_33] [i_33] [i_33])))), (((arr_70 [i_23] [i_24]) / (((/* implicit */unsigned int) -1034661389))))))));
                    var_54 = ((/* implicit */int) var_2);
                    var_55 = ((/* implicit */unsigned int) arr_98 [i_33]);
                    /* LoopSeq 1 */
                    for (unsigned short i_34 = 0; i_34 < 15; i_34 += 4) 
                    {
                        var_56 = ((/* implicit */signed char) ((unsigned int) ((984069684U) & (3310897594U))));
                        var_57 = ((((/* implicit */_Bool) ((arr_67 [i_24] [i_33]) - (arr_65 [i_33] [(unsigned char)11])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_96 [0] [i_24] [i_33] [(signed char)10])) && (((/* implicit */_Bool) var_9))))) % (1371325249)))) : ((~(3137018164U))));
                        var_58 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((-455271415), (((/* implicit */int) (short)-19042))))) ? (((((/* implicit */int) (signed char)1)) << (((/* implicit */int) (unsigned short)29)))) : (((/* implicit */int) arr_64 [(signed char)9])))));
                        var_59 = max((((/* implicit */unsigned int) 217380353)), (max((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26272))) : (9U))), (((/* implicit */unsigned int) ((signed char) arr_85 [i_23] [i_24] [i_33] [i_34] [i_34]))))));
                    }
                }
                for (unsigned char i_35 = 0; i_35 < 15; i_35 += 2) 
                {
                    arr_104 [i_23] [i_35] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_23] [i_24] [i_24] [i_24]))))) >> (((((/* implicit */int) ((short) arr_70 [i_23] [i_35]))) - (13412)))));
                    var_60 = ((/* implicit */int) (~(3483095602U)));
                    /* LoopNest 2 */
                    for (unsigned int i_36 = 0; i_36 < 15; i_36 += 1) 
                    {
                        for (unsigned int i_37 = 2; i_37 < 13; i_37 += 4) 
                        {
                            {
                                var_61 = ((/* implicit */int) arr_102 [i_23] [i_23] [i_23]);
                                var_62 = ((/* implicit */int) arr_84 [i_23] [i_23] [i_35] [i_36] [i_35]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_38 = 2; i_38 < 14; i_38 += 4) 
                    {
                        for (int i_39 = 1; i_39 < 13; i_39 += 3) 
                        {
                            {
                                var_63 = var_7;
                                arr_117 [i_35] [i_39 + 1] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) (unsigned short)27459)) : (((/* implicit */int) var_2)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24570))) == (arr_81 [4U] [(unsigned short)1] [i_35] [(unsigned char)14] [(unsigned short)10] [(unsigned char)10]))))))), ((short)-4336)));
                                var_64 = ((/* implicit */unsigned int) var_6);
                                arr_118 [i_23] [i_24] [i_24] [i_35] [(signed char)14] [i_35] [i_39] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1782798452U))));
                                var_65 = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_66 = ((/* implicit */unsigned int) (unsigned short)40961);
}
