/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80534
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
    var_15 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3030782550891121916ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */int) var_0)), (var_13))) : ((~(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [1U] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(arr_8 [(unsigned char)11] [i_0 + 2] [(signed char)5] [i_3] [i_3] [(signed char)5])))), (max(((~(var_9))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                            arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) var_4)) + (min((15415961522818429700ULL), (((/* implicit */unsigned long long int) (unsigned char)31)))))), (((/* implicit */unsigned long long int) (-(((819721631U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) ((int) 44777015))))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                            {
                                var_17 = ((/* implicit */_Bool) ((1550000817) % (((/* implicit */int) (short)(-32767 - 1)))));
                                var_18 = ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_1] [i_4 + 1]);
                                var_19 = (-(((/* implicit */int) (unsigned char)182)));
                            }
                            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                            {
                                var_20 ^= ((/* implicit */int) ((3865869276U) >> (0U)));
                                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_0))))) ^ (max((var_10), (((/* implicit */long long int) var_8))))))));
                                arr_20 [16LL] [i_5] [(signed char)7] [16LL] [i_1] [i_5] [(signed char)7] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) 6540665955430616502LL)) ? (429098020U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))))))) >= (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_0)))))))));
                                arr_21 [i_5] [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_9))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_7]))) & (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [(unsigned char)17])), (var_8))))) : (2764736313U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_4 + 1] [i_4 + 1] [i_0 + 3]), (arr_7 [i_5] [i_4 + 1] [i_0 - 1])))))));
                                var_22 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0])), (arr_11 [i_0] [i_0] [i_5] [i_0])))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */_Bool) (-(3336215610081441474ULL)));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6540665955430616502LL) % (8796093022207LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_12 [i_0 + 3] [i_0] [i_4 + 1] [i_5]))));
                            }
                            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                            {
                                var_25 = ((/* implicit */int) var_11);
                                var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_5 [i_0 + 2]))))));
                            }
                            arr_28 [i_0] [i_5] = min((max((((/* implicit */long long int) arr_2 [i_0 + 1])), (((((/* implicit */long long int) ((/* implicit */int) arr_23 [(signed char)8] [i_5] [i_4] [i_4] [i_4] [i_1] [i_0]))) % (-8167643330423515871LL))))), (((/* implicit */long long int) (~(arr_24 [i_0] [i_0 + 2] [i_4 + 2] [i_0] [i_5])))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_25 [i_0 + 1] [i_1] [i_4] [i_5] [i_4] [i_1])))) ? (min((arr_25 [i_0 + 3] [7ULL] [10U] [16LL] [i_5] [i_5]), (((/* implicit */int) var_3)))) : (arr_17 [i_1])));
                        }
                    } 
                } 
                arr_29 [i_0] = ((/* implicit */unsigned char) max(((+(arr_19 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_1] [i_0 - 1]))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_8)))))));
                var_28 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (((~(var_4))) > (var_4)))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4214871638U))), (((/* implicit */unsigned int) (~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        var_29 = ((/* implicit */int) ((arr_19 [i_10] [i_10] [i_10] [i_10] [i_10] [(short)3] [i_10]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_10])) % (((/* implicit */int) var_14)))))));
        arr_32 [(unsigned char)10] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))))), ((((-(8796093022223LL))) + (((/* implicit */long long int) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10] [18LL] [i_10]))))));
    }
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) ((min((arr_33 [i_11] [i_11]), (arr_33 [i_11] [i_11]))) >> (((((/* implicit */int) ((unsigned char) var_12))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0)))) - (156)))))));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 4; i_14 < 23; i_14 += 4) 
                {
                    var_31 -= (-(((/* implicit */int) arr_43 [i_11] [16U] [i_11] [i_14 - 1] [16U] [i_11])));
                    arr_45 [i_13] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) >= (var_11)));
                    var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_41 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(unsigned char)12] [(unsigned char)2] [i_14] [i_14] [i_14 - 2] [i_14 - 2])))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) arr_37 [(signed char)1]);
                    var_34 = ((/* implicit */int) ((unsigned char) 2678446252U));
                    var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11]))) >= (arr_41 [i_15])));
                }
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) ((_Bool) var_7));
                    arr_52 [i_11] [i_12] [i_11] [i_13] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_12] [i_13])) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) arr_49 [i_16] [i_13] [i_13] [24U] [i_11]))));
                    arr_53 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11] [(signed char)23] [(unsigned char)24] [i_16] [i_16] [i_16])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [2LL] [i_12]))) : (arr_40 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
                {
                    arr_56 [i_11] [i_12] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_11])) - (((/* implicit */int) arr_47 [i_17] [i_12] [i_12] [i_11]))));
                    var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)142))));
                }
            }
            var_38 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [(signed char)4] [i_12] [i_11] [(signed char)4] [(unsigned char)1])) ? (((/* implicit */int) max((arr_38 [i_11] [i_11]), (((/* implicit */short) var_7))))) : (((/* implicit */int) var_8))))) & (((((/* implicit */_Bool) max((arr_50 [i_11] [i_11] [i_11]), (175824919)))) ? (arr_33 [i_11] [i_11]) : (((unsigned int) -177446550)))));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 14; i_18 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))));
            var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [(signed char)12] [8U] [i_19] [i_19] [(_Bool)1] [i_18] [i_18]))));
        }
        for (unsigned char i_20 = 1; i_20 < 12; i_20 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_21 = 3; i_21 < 11; i_21 += 1) 
            {
                arr_67 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                var_41 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_37 [i_18]))));
            }
            arr_68 [i_20] = (~(((/* implicit */int) var_6)));
            /* LoopSeq 3 */
            for (unsigned long long int i_22 = 2; i_22 < 13; i_22 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) % (((/* implicit */int) (short)(-32767 - 1)))));
                var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -3566477507481661216LL))));
                var_44 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-16769)) >= (((/* implicit */int) (unsigned char)204))));
            }
            for (unsigned long long int i_23 = 2; i_23 < 13; i_23 += 1) /* same iter space */
            {
                arr_75 [i_23] [i_23] [(unsigned char)1] [(unsigned char)1] = (+(arr_69 [0] [i_23] [i_20 - 1] [i_18]));
                arr_76 [0LL] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((unsigned char) (short)5455));
            }
            for (unsigned int i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                arr_79 [i_18] = ((/* implicit */int) (~(((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_45 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_26 = 3; i_26 < 12; i_26 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_27 = 1; i_27 < 13; i_27 += 4) 
                {
                    var_46 = ((/* implicit */signed char) (!(((15415961522818429700ULL) > (15873548085057790523ULL)))));
                    arr_87 [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_49 [i_27] [i_27 - 1] [i_27] [i_27] [i_27]))));
                }
                /* LoopSeq 1 */
                for (signed char i_28 = 0; i_28 < 14; i_28 += 3) 
                {
                    var_47 = ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((1905275640U) - (1905275640U))));
                    var_48 = ((/* implicit */unsigned char) ((arr_70 [8] [i_26] [i_26 + 1] [8]) % (((/* implicit */unsigned long long int) var_10))));
                    /* LoopSeq 2 */
                    for (int i_29 = 2; i_29 < 13; i_29 += 2) 
                    {
                        arr_93 [i_18] [i_18] [i_26] [i_26] [i_18] [5] [i_29] = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_29 - 1] [i_29])) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((var_1) - (1577993595U))))))));
                        arr_94 [i_26] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = var_2;
                    }
                    for (int i_30 = 0; i_30 < 14; i_30 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                        var_50 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                        var_51 *= var_4;
                        var_52 = ((/* implicit */unsigned int) (unsigned char)117);
                    }
                }
            }
            for (short i_31 = 1; i_31 < 11; i_31 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_32 = 0; i_32 < 14; i_32 += 1) 
                {
                    var_53 = ((/* implicit */unsigned char) arr_48 [(signed char)22] [i_32] [i_31] [24U] [i_31] [i_31 + 2]);
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) arr_82 [i_18] [i_18] [i_31 - 1] [i_25])) ? (-8796093022223LL) : (((/* implicit */long long int) var_9))));
                    arr_105 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    arr_106 [i_18] [i_25] [i_18] [i_32] [i_32] [11U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                }
                /* LoopNest 2 */
                for (long long int i_33 = 2; i_33 < 12; i_33 += 1) 
                {
                    for (unsigned char i_34 = 1; i_34 < 11; i_34 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */long long int) var_2);
                            var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % (arr_25 [i_18] [i_18] [i_33 - 2] [i_18] [i_34] [i_34])));
                            var_57 = ((/* implicit */short) ((((/* implicit */int) var_3)) >= (arr_114 [i_25] [i_25] [i_25] [i_31] [i_34] [i_25] [8])));
                        }
                    } 
                } 
                arr_115 [2] [(unsigned char)10] [i_31] [i_25] = ((/* implicit */signed char) var_8);
            }
            for (short i_35 = 1; i_35 < 11; i_35 += 4) /* same iter space */
            {
                arr_118 [i_18] = ((/* implicit */unsigned char) ((2931663744205347709LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))));
                var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((arr_89 [i_35] [i_35] [(signed char)3] [11LL] [i_35]) >> (((((/* implicit */int) arr_43 [(unsigned char)16] [(unsigned char)16] [20U] [i_18] [i_25] [i_18])) + (103))))) : (((/* implicit */int) arr_100 [i_18] [i_25] [i_18] [i_25]))));
                var_59 += ((/* implicit */long long int) ((((/* implicit */_Bool) -7749134040194139674LL)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)144))));
            }
            var_60 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_36 [i_18] [i_18] [i_18]) : (((/* implicit */int) var_12))));
            var_61 = ((/* implicit */signed char) (-((+(4294967295U)))));
        }
        arr_119 [i_18] = ((/* implicit */long long int) 4191402245U);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_36 = 1; i_36 < 21; i_36 += 2) 
    {
        arr_122 [i_36] = ((/* implicit */unsigned char) ((arr_48 [15] [i_36 + 1] [i_36 + 1] [i_36] [i_36] [i_36]) >> (((/* implicit */int) arr_121 [i_36 + 1]))));
        arr_123 [i_36] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) % ((~(((/* implicit */int) arr_37 [i_36]))))));
        var_62 = ((/* implicit */unsigned char) var_13);
        /* LoopSeq 1 */
        for (signed char i_37 = 0; i_37 < 23; i_37 += 2) 
        {
            var_63 = ((/* implicit */unsigned int) (+(0LL)));
            var_64 = ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_51 [i_37] [i_36 + 1] [i_36 - 1])) + (18655))));
        }
    }
    /* LoopNest 3 */
    for (int i_38 = 2; i_38 < 19; i_38 += 4) 
    {
        for (unsigned char i_39 = 3; i_39 < 18; i_39 += 4) 
        {
            for (int i_40 = 1; i_40 < 20; i_40 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_41 = 1; i_41 < 18; i_41 += 3) 
                    {
                        for (long long int i_42 = 0; i_42 < 22; i_42 += 2) 
                        {
                            {
                                var_65 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-27570))));
                                var_66 = ((/* implicit */int) min((var_66), (((((/* implicit */int) ((((/* implicit */int) arr_128 [i_41 + 3] [i_39 + 1])) > (((/* implicit */int) arr_128 [i_41 + 3] [i_39 + 1]))))) >> (((((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((var_4) >> (((var_11) + (293047110191629912LL))))))) - (4294961981U)))))));
                            }
                        } 
                    } 
                    var_67 = ((/* implicit */signed char) var_6);
                    arr_142 [i_39] [i_39] [i_39] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_141 [i_38] [(short)18] [i_40 + 2] [6ULL] [(unsigned char)8])) >= (var_13))))));
                    var_68 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(2942329191696429930ULL))) * (((/* implicit */unsigned long long int) arr_120 [(unsigned char)14] [i_39]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_132 [i_38 + 2] [i_40 + 2]))))) : ((+(arr_42 [(unsigned char)3] [i_40])))));
                }
            } 
        } 
    } 
}
