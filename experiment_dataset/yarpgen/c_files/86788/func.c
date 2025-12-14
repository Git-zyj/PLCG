/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86788
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) max((max((((/* implicit */unsigned short) var_4)), (arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_14 [i_4] [i_3] [(unsigned short)15] [i_3] [(unsigned short)15] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1 + 2])) < (((/* implicit */int) arr_12 [i_1] [(short)6] [i_1] [i_3] [i_1] [i_1 + 1])))));
                            var_14 = ((/* implicit */unsigned short) (~(max((min((arr_9 [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4]), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)0])) || (((/* implicit */_Bool) var_2)))))))));
                            var_15 ^= ((/* implicit */signed char) (+(1084716590)));
                            var_16 ^= ((/* implicit */long long int) ((int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_4]))))), (min((((/* implicit */long long int) var_3)), (arr_11 [i_0] [(short)16] [i_2] [i_3] [i_4]))))));
                        }
                    } 
                } 
                arr_15 [i_0] [2LL] [i_0] = var_7;
                arr_16 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_2 [15]);
            }
        }
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_11))));
        arr_17 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (short)-2048))))));
        var_18 = ((/* implicit */long long int) var_12);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65512))));
        var_19 ^= -1084716572;
        var_20 = ((((/* implicit */int) ((arr_10 [i_5] [i_5] [i_5]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_6))) - (40LL))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
        {
            var_21 |= ((/* implicit */unsigned char) arr_9 [i_6] [8LL] [i_6] [i_6] [8LL] [i_6]);
            var_22 = ((/* implicit */int) ((((int) (signed char)-12)) != ((~(arr_19 [10LL])))));
        }
        for (long long int i_8 = 1; i_8 < 7; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_13 [i_8] [i_8] [i_8 + 4] [i_8] [i_8 + 2]))));
                        arr_37 [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) (+(31457280)));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned char)255))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6]))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 10; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    {
                        var_26 += ((/* implicit */long long int) arr_28 [i_8 + 3] [i_6]);
                        arr_42 [i_8] [i_11] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */signed char) ((arr_23 [i_6]) >> (((((/* implicit */int) arr_39 [i_8] [i_8 - 1] [i_8 - 1] [i_8])) - (8129)))))) : (((/* implicit */signed char) ((arr_23 [i_6]) >> (((((((/* implicit */int) arr_39 [i_8] [i_8 - 1] [i_8 - 1] [i_8])) - (8129))) + (30970))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_13 = 3; i_13 < 7; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((((/* implicit */int) arr_30 [0] [i_14])) < (((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [i_15])))))))));
                            arr_53 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_14] [i_15]))) * (16642998272LL)))) ? (((/* implicit */int) (unsigned short)65534)) : (((((/* implicit */_Bool) -4LL)) ? (arr_51 [i_6] [(short)2] [(short)2] [i_14] [(short)2]) : (((/* implicit */int) var_2))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 3] [i_13 - 3] [i_8])) / (arr_19 [i_14])));
                            arr_54 [i_15] [i_14] [8LL] [8LL] [i_8] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_15] [i_13 + 3] [i_8 + 4])) ? (((/* implicit */int) arr_4 [i_13 - 2] [i_13 + 1] [i_8 + 2])) : (((/* implicit */int) arr_4 [i_13] [i_13 + 2] [i_8 + 4]))));
                        }
                    } 
                } 
            } 
            var_29 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_6] [i_8 + 3] [i_8] [0]))) != (arr_9 [i_6] [i_8 + 3] [i_6] [i_8] [4LL] [i_8])));
        }
        var_30 = ((/* implicit */long long int) ((70368744177663LL) == (((/* implicit */long long int) ((/* implicit */int) (short)16456)))));
    }
    for (short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
    {
        arr_59 [i_16] [i_16] = ((/* implicit */short) min((((/* implicit */int) max((arr_3 [i_16] [i_16] [i_16]), (arr_3 [i_16] [3] [i_16])))), ((+(((/* implicit */int) arr_3 [(unsigned short)16] [i_16] [i_16]))))));
        var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(-2347688452872536175LL)))) ? (((/* implicit */int) max(((unsigned short)52169), ((unsigned short)13374)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_35 [(signed char)5] [i_16] [i_16] [i_16])))))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (short i_18 = 3; i_18 < 10; i_18 += 4) 
            {
                {
                    arr_66 [i_16] [i_16] [i_17] [i_16] = ((/* implicit */short) var_9);
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 9; i_19 += 1) 
                    {
                        for (int i_20 = 3; i_20 < 10; i_20 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (max((((int) -355005454159023711LL)), (((/* implicit */int) arr_62 [i_17] [i_17] [i_17]))))));
                                arr_72 [i_16] [i_17] = ((/* implicit */short) ((70368744177666LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_20] [i_16] [i_16] [i_18 - 3])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (var_6)))) : (((((/* implicit */_Bool) arr_67 [i_16] [i_19] [i_16] [i_18])) ? (((/* implicit */int) arr_29 [i_16] [i_16])) : (-759189926))))))));
                                var_33 += ((/* implicit */int) ((((/* implicit */int) ((arr_11 [i_16] [i_17] [i_18] [i_19] [4LL]) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(unsigned char)6])) ? (((/* implicit */int) arr_44 [i_20] [(short)0] [1LL] [i_16])) : (((/* implicit */int) (unsigned short)12000)))))))) < (min((((/* implicit */int) arr_41 [i_20] [i_19] [i_19] [i_18 - 3] [(short)9] [i_16])), (((((/* implicit */_Bool) 42110547)) ? (((/* implicit */int) arr_7 [i_17] [i_17] [(signed char)14])) : (((/* implicit */int) var_8))))))));
                                var_34 = ((/* implicit */short) max((-1347341409), ((+(((/* implicit */int) arr_12 [i_17] [i_19] [18] [i_16] [i_18 + 1] [i_19 + 1]))))));
                                var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_67 [i_19 + 2] [i_18 + 1] [i_16] [i_20 + 1])) ? (arr_67 [i_19 - 1] [i_18 + 1] [i_16] [i_20 - 3]) : (var_0)))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_62 [i_18 + 1] [i_18 + 1] [i_18])))), (arr_68 [i_16] [i_17] [i_18] [i_18]))))));
                    /* LoopSeq 1 */
                    for (short i_21 = 3; i_21 < 9; i_21 += 3) 
                    {
                        var_37 = var_2;
                        var_38 = ((/* implicit */signed char) ((unsigned char) var_4));
                        var_39 = ((/* implicit */short) (((-(((/* implicit */int) arr_2 [i_21 + 1])))) >= (((/* implicit */int) (short)-31510))));
                    }
                }
            } 
        } 
        arr_77 [i_16] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1856189243)))))));
    }
    var_40 = ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (int i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
    {
        var_41 *= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_22] [i_22] [i_22] [i_22])) + (((/* implicit */int) arr_8 [i_22] [i_22] [i_22] [i_22]))));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 19; i_24 += 1) 
            {
                {
                    arr_86 [i_22] [i_23] &= ((/* implicit */signed char) (-(((/* implicit */int) ((1579120331196282384LL) != (((/* implicit */long long int) min((-1856189244), (-759189927)))))))));
                    /* LoopNest 2 */
                    for (long long int i_25 = 2; i_25 < 18; i_25 += 2) 
                    {
                        for (unsigned char i_26 = 0; i_26 < 19; i_26 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */short) ((int) arr_78 [i_23]));
                                var_43 ^= var_7;
                            }
                        } 
                    } 
                    var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (min((var_9), (((/* implicit */long long int) arr_4 [i_22] [14LL] [i_24])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (((/* implicit */int) min((arr_91 [i_22] [i_22] [i_22] [i_23] [i_24]), (((/* implicit */unsigned short) var_1))))) : ((~(((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) var_2)) : (-1497801847))))));
                }
            } 
        } 
        arr_92 [i_22] = ((/* implicit */short) max((var_9), (((/* implicit */long long int) ((arr_88 [i_22] [i_22] [i_22] [i_22] [i_22]) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)-475))))))))));
    }
    for (int i_27 = 0; i_27 < 19; i_27 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_87 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))), (max((((/* implicit */int) arr_8 [i_27] [i_27] [i_27] [i_27])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_83 [i_27] [i_27] [i_27] [i_27])) : (((/* implicit */int) (unsigned short)2882))))))));
        var_46 *= ((/* implicit */signed char) max((((/* implicit */int) ((var_6) >= (var_9)))), ((~(((/* implicit */int) arr_79 [i_27]))))));
        /* LoopNest 3 */
        for (unsigned char i_28 = 0; i_28 < 19; i_28 += 2) 
        {
            for (signed char i_29 = 0; i_29 < 19; i_29 += 3) 
            {
                for (unsigned char i_30 = 3; i_30 < 17; i_30 += 1) 
                {
                    {
                        arr_102 [(signed char)6] [i_30] [i_30] [i_27] = ((/* implicit */int) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_31 = 0; i_31 < 19; i_31 += 4) 
                        {
                            arr_105 [i_27] [i_31] [i_30] [i_29] [i_31] = ((/* implicit */short) (+((+(-759189947)))));
                            var_47 ^= ((long long int) var_0);
                            var_48 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_30] [4LL] [i_27]))));
                            var_49 = var_9;
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_32 = 1; i_32 < 16; i_32 += 2) 
        {
            arr_110 [(signed char)15] [i_32] [i_32] = ((/* implicit */short) min((((signed char) var_7)), (((/* implicit */signed char) ((((/* implicit */long long int) 362754828)) >= (arr_97 [i_27] [i_32 + 1] [i_32 + 2] [(short)7]))))));
            /* LoopSeq 1 */
            for (unsigned short i_33 = 1; i_33 < 17; i_33 += 4) 
            {
                var_50 = ((/* implicit */short) max((((/* implicit */long long int) (-(arr_96 [i_33 + 2] [(signed char)3] [i_33 + 2])))), (((((/* implicit */_Bool) ((signed char) 1799863814393608816LL))) ? (arr_78 [i_27]) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((arr_96 [i_27] [i_27] [i_33 - 1]) + (884696444))) - (21))))))))));
                arr_113 [i_32] [i_33] = ((/* implicit */unsigned char) (unsigned short)57147);
                /* LoopSeq 1 */
                for (int i_34 = 2; i_34 < 16; i_34 += 2) 
                {
                    arr_116 [i_32] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) var_4)), (var_8))));
                    /* LoopSeq 2 */
                    for (int i_35 = 0; i_35 < 19; i_35 += 2) /* same iter space */
                    {
                        arr_120 [i_27] [i_32] [i_27] [i_32] [i_32] = ((short) ((unsigned char) (unsigned char)233));
                        var_51 ^= ((/* implicit */long long int) ((((long long int) max((arr_78 [i_32 + 2]), (((/* implicit */long long int) arr_1 [i_27]))))) >= (((/* implicit */long long int) min((min((((/* implicit */int) var_11)), (-362754815))), (((((/* implicit */int) arr_100 [i_27] [i_34])) * (((/* implicit */int) (short)-18024)))))))));
                    }
                    for (int i_36 = 0; i_36 < 19; i_36 += 2) /* same iter space */
                    {
                        var_52 = ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (unsigned short)2870)))))) ? (max((((/* implicit */long long int) (signed char)37)), (arr_114 [i_32]))) : (((/* implicit */long long int) arr_111 [i_32] [i_36])));
                        arr_123 [i_27] [i_32] [3] [2LL] = ((/* implicit */unsigned char) arr_89 [i_27] [i_32] [i_33] [i_34] [i_34]);
                        var_53 = ((/* implicit */short) ((((/* implicit */long long int) (((+(((/* implicit */int) arr_4 [i_27] [i_33] [i_27])))) ^ ((~(((/* implicit */int) var_8))))))) < (var_9)));
                        var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) 362754832))));
                    }
                }
            }
            arr_124 [i_32] [i_32 + 1] [i_32] = ((((((/* implicit */int) arr_12 [i_27] [(short)4] [i_27] [i_32] [i_32 + 2] [i_32])) < (((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */int) arr_122 [i_27] [i_32 + 2] [i_32] [i_32] [i_32] [i_27] [i_27])) : (((/* implicit */int) arr_8 [i_32] [i_32] [i_32] [11])))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) arr_121 [i_32] [i_27] [i_27] [i_32]))))))) : (max((((/* implicit */long long int) arr_122 [i_32 + 1] [i_32 - 1] [i_32 + 2] [i_32 - 1] [i_27] [i_32] [i_27])), (-9223372036854775788LL))));
        }
        for (unsigned short i_37 = 2; i_37 < 18; i_37 += 4) 
        {
            var_55 ^= ((short) ((((/* implicit */_Bool) -9223372036854775778LL)) ? ((+(-4651763751302676290LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62638)))));
            var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_90 [i_27] [i_27] [i_37 - 2] [i_27] [i_27])) >= (((/* implicit */int) arr_87 [i_27] [i_37 - 1] [i_37] [i_27] [i_37] [i_37])))))));
        }
    }
    /* vectorizable */
    for (short i_38 = 2; i_38 < 21; i_38 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_39 = 0; i_39 < 22; i_39 += 4) 
        {
            var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_130 [i_38 - 1] [i_38 + 1])))))));
            arr_133 [i_39] [i_38] = ((/* implicit */int) ((short) arr_129 [i_39] [i_38]));
        }
        arr_134 [i_38] [i_38] &= ((/* implicit */signed char) ((((/* implicit */int) arr_130 [i_38 + 1] [i_38 + 1])) != ((-(((/* implicit */int) arr_130 [i_38] [i_38]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_40 = 0; i_40 < 24; i_40 += 2) 
    {
        arr_137 [i_40] = ((/* implicit */signed char) (+(var_10)));
        var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) (signed char)-48))));
    }
    /* vectorizable */
    for (long long int i_41 = 1; i_41 < 24; i_41 += 2) 
    {
        arr_140 [i_41] [i_41] = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (int i_42 = 0; i_42 < 25; i_42 += 1) 
        {
            for (unsigned short i_43 = 0; i_43 < 25; i_43 += 1) 
            {
                for (unsigned char i_44 = 2; i_44 < 23; i_44 += 2) 
                {
                    {
                        var_59 = ((/* implicit */long long int) arr_139 [i_43]);
                        arr_147 [i_44] &= (-(((/* implicit */int) (unsigned short)59350)));
                        var_60 = ((/* implicit */signed char) (+(-9223372036854775793LL)));
                    }
                } 
            } 
        } 
        var_61 *= ((/* implicit */long long int) ((((((/* implicit */int) (short)26126)) + (((/* implicit */int) (short)-12598)))) == (1497801860)));
        /* LoopNest 3 */
        for (short i_45 = 1; i_45 < 23; i_45 += 2) 
        {
            for (signed char i_46 = 1; i_46 < 23; i_46 += 1) 
            {
                for (unsigned char i_47 = 0; i_47 < 25; i_47 += 2) 
                {
                    {
                        arr_155 [i_41] [i_45] [i_46] [i_41] [i_41] [i_46] = ((((/* implicit */_Bool) arr_141 [i_46])) ? (arr_141 [i_46]) : (arr_141 [i_46]));
                        var_62 = arr_150 [i_41] [i_46];
                    }
                } 
            } 
        } 
        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (arr_141 [2LL]))))));
    }
}
