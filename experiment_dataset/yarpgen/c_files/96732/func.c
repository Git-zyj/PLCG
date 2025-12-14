/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96732
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((max((max((((/* implicit */unsigned int) -1162477347)), (var_16))), (max((var_14), (((/* implicit */unsigned int) arr_2 [i_0])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((-1162477354) > (2147483640)))))))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) ((var_14) | ((-(3986909705U)))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (var_13)));
                        arr_10 [i_3] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) ((((arr_6 [i_0 + 3] [i_0]) + (2147483647))) >> (((arr_7 [i_0 + 3] [0U] [i_0 + 2] [i_0 - 1]) - (285579327U)))));
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (341978560U) : (var_13)))) ? (arr_1 [i_3] [i_2]) : ((-(3986909705U)))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_21 -= ((/* implicit */unsigned int) ((((arr_2 [i_0 + 2]) + (2147483647))) >> (((arr_2 [i_0]) + (1613744788)))));
                var_22 = ((/* implicit */unsigned int) arr_6 [i_1] [i_0]);
                var_23 = ((((/* implicit */_Bool) ((int) 3321115897U))) ? (((((/* implicit */unsigned int) var_6)) | (arr_8 [i_0] [2] [2] [1] [i_4]))) : (((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_0 - 2])));
            }
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                arr_17 [i_5] [i_5] [i_5] = ((/* implicit */int) 70940200U);
                arr_18 [i_5] [i_5] [i_0] = ((((unsigned int) -1381305519)) ^ (((/* implicit */unsigned int) ((196883119) ^ (688420747)))));
            }
            for (int i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [10] [10])) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_0])) : (3392610358U))) <= (((((/* implicit */_Bool) -2033647940)) ? (0U) : (var_16)))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 341978560U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((70940206U) == (10U))))) : ((~(1U))))))));
                    var_26 = ((/* implicit */int) max((var_26), (var_7)));
                }
            }
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])))))));
        }
        for (int i_8 = 3; i_8 < 7; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_34 [i_0] [7] [i_11] [i_10] [7] [2U] = ((((/* implicit */_Bool) -505426273)) ? (-1410022569) : (-1));
                            arr_35 [i_11] = ((/* implicit */unsigned int) ((((2147483647) >> (((1331990217U) - (1331990217U))))) <= (((/* implicit */int) ((arr_1 [i_0 + 1] [i_0 + 3]) > (((/* implicit */unsigned int) -1)))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */int) min((var_28), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8 + 2] [i_0 + 1]))))), (((((/* implicit */_Bool) max((32640), (arr_23 [10] [i_0] [i_0] [10])))) ? (((int) 1078887128U)) : (((((/* implicit */_Bool) 2433301211U)) ? (-29) : (var_4)))))))));
        }
        for (unsigned int i_12 = 1; i_12 < 7; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 1521526463U)))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0 + 2] [i_12 - 1])) ? (arr_22 [i_12] [i_12] [i_12] [i_0]) : (23))) : (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) arr_22 [10] [i_0] [i_0] [i_0])))))));
            arr_39 [5U] [i_12] [i_12] = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_21 [i_0] [i_12] [i_12] [i_0])), ((~(arr_7 [9] [7U] [10U] [i_12]))))), (((/* implicit */unsigned int) var_8))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_12] = 3344581454U;
                        var_30 = (((~(arr_25 [i_12 + 4] [i_12 + 1]))) << (((((((/* implicit */_Bool) arr_28 [i_12 + 3] [i_13] [i_0 - 2] [i_14])) ? (arr_25 [i_12 + 2] [i_12 + 4]) : (((/* implicit */unsigned int) arr_28 [i_12 + 1] [3] [i_0 - 2] [i_14])))) - (2292913196U))));
                    }
                } 
            } 
            arr_45 [i_0] [i_12] = (-(arr_29 [i_12]));
            var_31 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (~(arr_22 [i_0] [i_0] [i_0] [i_0]))))) / (max((((/* implicit */unsigned int) arr_33 [2] [2] [8])), ((-(arr_14 [4] [i_0] [10U] [4])))))));
        }
        var_32 = ((/* implicit */int) min((4194304U), (arr_5 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            for (int i_16 = 1; i_16 < 9; i_16 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_30 [4] [4] [i_16]))));
                    arr_51 [i_15] [i_15] [i_16] [i_15] = ((/* implicit */int) min((3344581454U), (((/* implicit */unsigned int) -1422804915))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5U)) ? (var_8) : (arr_22 [i_0] [0] [i_16 + 2] [i_0 + 1])))) ^ (min((4294967291U), (var_15)))))));
                    arr_52 [i_0] [2U] [i_15] = ((/* implicit */int) min((3582580857U), (((/* implicit */unsigned int) ((min((209414469U), (arr_32 [i_0] [3U] [3U] [3U] [4] [9]))) >= (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) -1)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_17 = 2; i_17 < 8; i_17 += 1) /* same iter space */
    {
        arr_55 [i_17] = max((((((/* implicit */_Bool) 209414469U)) ? (((/* implicit */unsigned int) var_8)) : (var_14))), (((/* implicit */unsigned int) arr_40 [i_17] [i_17] [i_17])));
        var_35 = ((/* implicit */int) min((var_35), (max(((-(var_10))), (((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_12 [i_17])))) == (max((1549118734U), (((/* implicit */unsigned int) 24)))))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            var_36 = ((/* implicit */int) ((arr_58 [0U] [i_19]) / (4294967295U)));
            var_37 = var_1;
            arr_63 [i_18] = ((/* implicit */int) ((((var_1) % (((/* implicit */unsigned int) arr_57 [14U])))) + (((/* implicit */unsigned int) (+(var_7))))));
            arr_64 [i_19] [0] = ((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) > (2337632763U)));
        }
        for (int i_20 = 0; i_20 < 16; i_20 += 1) 
        {
            var_38 = ((/* implicit */int) (+(((arr_66 [i_20] [i_18] [i_18]) % (var_14)))));
            var_39 = ((((/* implicit */_Bool) arr_58 [i_20] [i_18])) ? (((/* implicit */unsigned int) -1619327481)) : (1078887128U));
            var_40 = arr_57 [10U];
        }
        for (int i_21 = 2; i_21 < 15; i_21 += 4) 
        {
            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((+(1619327481))) : (((/* implicit */int) ((var_8) == (var_8))))));
            var_42 = ((/* implicit */int) max((var_42), ((+(((((/* implicit */_Bool) -1728692381)) ? (var_10) : (arr_62 [i_18])))))));
        }
        var_43 = (-(arr_60 [i_18] [i_18]));
        var_44 = ((/* implicit */unsigned int) max((var_44), ((-(((((/* implicit */_Bool) arr_66 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) var_6)) : (3216080168U)))))));
        arr_69 [i_18] = (~(((((/* implicit */_Bool) 4294967284U)) ? (var_9) : (((/* implicit */unsigned int) 1189024520)))));
        /* LoopSeq 2 */
        for (int i_22 = 0; i_22 < 16; i_22 += 3) 
        {
            var_45 = ((/* implicit */int) ((arr_65 [i_18] [i_22] [i_22]) == (((/* implicit */unsigned int) var_6))));
            arr_72 [4] [i_18] = (+(5U));
            /* LoopSeq 3 */
            for (int i_23 = 1; i_23 < 14; i_23 += 1) 
            {
                arr_76 [i_23] [i_23] [i_23] [i_23] = arr_75 [8U] [5] [i_18];
                var_46 = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_57 [i_18])) == (1549118733U))) ? (2337632782U) : (((/* implicit */unsigned int) 2147483647))));
                var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_70 [i_18] [i_18])))));
                var_48 = -130992886;
            }
            for (unsigned int i_24 = 0; i_24 < 16; i_24 += 1) 
            {
                var_49 *= (-(arr_60 [7] [i_18]));
                arr_80 [i_24] [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 21U)) ? (((/* implicit */unsigned int) -1922010728)) : (arr_67 [i_18] [i_18] [i_18]))) > (arr_75 [i_18] [i_22] [i_24])));
                arr_81 [i_24] = (~(arr_56 [i_18] [i_24]));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 16; i_25 += 3) 
                {
                    for (int i_26 = 2; i_26 < 14; i_26 += 1) 
                    {
                        {
                            var_50 = (+(21U));
                            var_51 = ((/* implicit */unsigned int) min((var_51), (3099768542U)));
                        }
                    } 
                } 
                arr_86 [i_24] [i_22] [i_24] = ((/* implicit */int) (~(arr_77 [i_18] [i_18])));
            }
            for (int i_27 = 0; i_27 < 16; i_27 += 1) 
            {
                var_52 = ((/* implicit */unsigned int) ((((-1620818159) + (2147483647))) << ((((+(21U))) - (19U)))));
                arr_91 [i_18] [i_22] = (+(arr_89 [i_27] [i_22] [i_27]));
                arr_92 [i_18] [i_22] [i_27] [10] = 4288392100U;
            }
            var_53 *= ((/* implicit */unsigned int) ((int) -1620818159));
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 16; i_28 += 2) 
            {
                for (unsigned int i_29 = 0; i_29 < 16; i_29 += 4) 
                {
                    {
                        var_54 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3099768542U)) ? ((-2147483647 - 1)) : (((int) arr_95 [i_18] [i_18] [i_28] [i_18]))));
                        arr_98 [i_18] [i_22] [i_18] [i_18] = var_16;
                        var_55 &= ((/* implicit */int) 5U);
                    }
                } 
            } 
        }
        for (int i_30 = 0; i_30 < 16; i_30 += 3) 
        {
            var_56 ^= ((/* implicit */unsigned int) ((int) arr_65 [i_18] [i_18] [i_18]));
            arr_101 [i_18] [6] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_18] [i_18] [i_18])) ? (arr_68 [i_30] [i_18]) : (arr_90 [i_18] [i_30] [12] [i_18])))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1381305493)))))));
        }
    }
    for (unsigned int i_31 = 2; i_31 < 11; i_31 += 3) 
    {
        var_57 = max((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 1859078875)) != (var_14)))), (((((/* implicit */_Bool) -4)) ? (var_2) : (((/* implicit */unsigned int) arr_104 [i_31])))))), (((((/* implicit */_Bool) (~(arr_95 [i_31] [i_31] [i_31] [9U])))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_71 [i_31] [i_31] [14U]) : (var_8)))))));
        /* LoopSeq 1 */
        for (unsigned int i_32 = 2; i_32 < 13; i_32 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_33 = 1; i_33 < 14; i_33 += 3) 
            {
                for (unsigned int i_34 = 2; i_34 < 12; i_34 += 2) 
                {
                    for (unsigned int i_35 = 0; i_35 < 15; i_35 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_59 [11])) ? (((/* implicit */unsigned int) 1784666423)) : (var_12))) <= (arr_58 [i_32] [1])))), (((((/* implicit */_Bool) arr_105 [i_32] [i_32])) ? (((/* implicit */int) ((((/* implicit */_Bool) 617930157U)) || (((/* implicit */_Bool) arr_73 [i_34] [i_34] [i_34]))))) : (((int) arr_58 [i_31] [i_31])))))))));
                            var_59 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18))))), (((((/* implicit */_Bool) max((-1657690980), (-14)))) ? (((/* implicit */unsigned int) ((1784666429) - (3)))) : (var_16)))));
                            var_60 = max((4), (-1657690980));
                        }
                    } 
                } 
            } 
            var_61 = 2147483647;
            arr_117 [2] = min((134184960U), (((/* implicit */unsigned int) -23)));
            var_62 = ((-1657690980) | ((~(min((393307448), (var_8))))));
            var_63 = min(((-(max((1460987774U), (((/* implicit */unsigned int) 130992885)))))), (((/* implicit */unsigned int) min((((int) arr_112 [i_31] [i_32] [i_31] [i_32] [i_32])), (444702915)))));
        }
    }
    for (unsigned int i_36 = 1; i_36 < 11; i_36 += 2) 
    {
        var_64 = 2U;
        /* LoopSeq 1 */
        for (int i_37 = 0; i_37 < 14; i_37 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_38 = 1; i_38 < 13; i_38 += 4) 
            {
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 14; i_39 += 1) 
                {
                    for (unsigned int i_40 = 2; i_40 < 11; i_40 += 3) 
                    {
                        {
                            arr_132 [i_37] [12U] [i_38] [i_40] [i_40] = ((((/* implicit */_Bool) -1946942473)) ? (((((/* implicit */_Bool) arr_130 [i_37] [i_36] [i_37])) ? (2736677863U) : (arr_113 [i_40] [i_37]))) : (((/* implicit */unsigned int) arr_97 [i_40] [1] [i_40 - 1] [i_38 - 1] [i_36 + 1])));
                            arr_133 [i_37] [2U] [i_39] [5] = var_11;
                        }
                    } 
                } 
                var_65 = ((/* implicit */unsigned int) arr_56 [i_36] [i_37]);
            }
            arr_134 [12U] [7U] [i_37] = -1635184821;
            arr_135 [i_37] = ((/* implicit */int) var_16);
            /* LoopNest 2 */
            for (unsigned int i_41 = 1; i_41 < 12; i_41 += 4) 
            {
                for (unsigned int i_42 = 0; i_42 < 14; i_42 += 4) 
                {
                    {
                        var_66 = ((/* implicit */unsigned int) min((var_66), (((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (-2147483647 - 1))) != (arr_131 [13U] [i_37] [i_37] [i_37] [7] [i_37]))))) / (((((/* implicit */unsigned int) ((var_10) >> (((arr_138 [i_36] [i_36] [i_41] [i_42]) - (3271841828U)))))) ^ (min((((/* implicit */unsigned int) 23)), (438191739U)))))))));
                        arr_141 [i_42] [i_37] [i_37] [i_36] = ((/* implicit */int) (-(arr_131 [i_37] [i_37] [i_41] [i_42] [i_37] [i_36])));
                        var_67 ^= ((/* implicit */int) max(((+(arr_102 [i_36 + 2]))), (((/* implicit */unsigned int) arr_61 [6] [i_37] [i_37]))));
                    }
                } 
            } 
            arr_142 [9] [i_37] [i_37] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(arr_73 [i_36 - 1] [i_36 + 2] [i_36 + 3])))), (min((max((3893575976U), (((/* implicit */unsigned int) -2147483634)))), (min((var_5), (var_9)))))));
        }
        arr_143 [i_36] [i_36] = ((/* implicit */int) ((((617161852U) <= (((/* implicit */unsigned int) -28)))) ? (arr_108 [i_36] [14] [i_36] [6U]) : (((/* implicit */unsigned int) -25))));
        var_68 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_125 [i_36] [i_36])) ? (var_14) : (((/* implicit */unsigned int) -1657690956)))) <= (arr_60 [i_36 + 3] [i_36 - 1]))))) ^ (min((var_9), (((/* implicit */unsigned int) arr_100 [i_36 + 1])))));
    }
}
