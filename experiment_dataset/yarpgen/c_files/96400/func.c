/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96400
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [(_Bool)1]);
            var_20 = ((/* implicit */unsigned char) var_8);
            var_21 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_16))))))))));
            var_22 = ((/* implicit */unsigned int) arr_1 [9LL]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_23 += ((/* implicit */long long int) arr_0 [i_3 + 1]);
                        var_24 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_12 [i_3])))));
                        var_25 = ((/* implicit */unsigned int) (unsigned char)13);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
            {
                var_26 *= arr_16 [i_0] [i_0] [(signed char)22] [(signed char)22];
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_27 ^= ((/* implicit */unsigned char) var_7);
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_14 [i_2]))));
                    arr_20 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_0] = ((/* implicit */unsigned short) 2628116579296109295LL);
                    arr_21 [i_0] [i_2] [i_5] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) arr_16 [i_0] [i_5] [i_2] [i_0])) : (var_3)))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned char)243)))))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_5] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_8] [i_5] [i_2]))))))))));
                            var_30 |= (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1]))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) min((((unsigned short) arr_14 [(unsigned short)8])), (((/* implicit */unsigned short) var_9))))))))));
                            var_32 *= ((/* implicit */unsigned int) arr_4 [7LL] [13]);
                            var_33 *= ((/* implicit */unsigned short) arr_14 [i_2]);
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_2] [i_2] [i_5 + 1])) : (((/* implicit */int) arr_14 [i_0 - 1]))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (var_0) : (0U))))) : (arr_8 [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) (unsigned char)203);
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(arr_23 [i_9] [i_5] [i_5] [(unsigned short)22] [i_10]))))));
                            var_37 -= ((/* implicit */signed char) arr_8 [i_10] [i_9 - 3]);
                        }
                    } 
                } 
            }
            for (long long int i_11 = 2; i_11 < 23; i_11 += 2) /* same iter space */
            {
                var_38 = ((/* implicit */_Bool) ((unsigned char) (+(arr_24 [i_0] [i_0] [i_11 - 1] [i_0] [i_0]))));
                arr_33 [i_2] = -1597396539;
                arr_34 [i_11] [i_2] [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((int) var_12));
                arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((arr_23 [i_11 - 2] [i_2] [i_0] [i_2] [i_0]) ? (((/* implicit */int) arr_23 [i_11 - 2] [i_2] [i_0] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_23 [i_11 + 1] [i_2] [6] [i_2] [i_0])))), (((/* implicit */int) (signed char)-68))));
            }
            var_39 = ((/* implicit */long long int) min((var_39), (((long long int) 2628116579296109323LL))));
            arr_36 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((1970240591237780956LL), (((/* implicit */long long int) -979500985)))), (((((/* implicit */_Bool) -2632969)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_2] [i_2]))) : (arr_32 [14U] [i_2] [i_2] [i_0])))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */long long int) 0U)) ^ (9223372036854775807LL)))))));
        }
    }
    for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_14 = 2; i_14 < 15; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(4))))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_11))))))));
                            var_41 = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_17 = 1; i_17 < 15; i_17 += 2) 
            {
                var_42 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_43 [i_12] [i_17] [2ULL])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [i_13] [i_13] [i_17])))))))) : (((unsigned long long int) ((((/* implicit */_Bool) -3541190428470095107LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_12] [(_Bool)1] [i_12] [12ULL] [i_12]))) : (var_0))))));
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    arr_57 [i_13] [(short)0] [(_Bool)1] [i_18] [i_17] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((+(((unsigned int) arr_29 [i_18] [i_13] [i_13] [i_13] [i_13] [i_13])))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | (var_6))), (((/* implicit */unsigned int) var_9))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_19 = 2; i_19 < 14; i_19 += 3) 
                    {
                        var_43 = ((/* implicit */signed char) arr_22 [i_12] [i_12] [i_18] [i_12]);
                        arr_60 [i_12] [i_13] [i_12] [i_18] [3] |= ((/* implicit */unsigned int) var_11);
                        var_44 = ((/* implicit */unsigned int) arr_14 [i_12]);
                        var_45 = ((/* implicit */_Bool) (~(((unsigned int) (!(((/* implicit */_Bool) arr_48 [8] [i_18] [i_18] [i_13])))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((int) var_2)))));
                        arr_63 [i_12] [i_12] [i_13] [i_12] [i_12] [4ULL] = ((((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_17] [(unsigned char)8])) ? (((arr_46 [9U] [i_13] [i_17 - 1] [i_18]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : ((+(arr_46 [i_12] [i_12] [(unsigned short)16] [i_20]))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) ((((((/* implicit */int) ((short) arr_2 [i_12]))) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((arr_32 [i_21] [i_17] [i_12] [i_12]) == (((/* implicit */long long int) (+(((/* implicit */int) arr_61 [i_12] [i_13] [12ULL] [i_12] [i_18] [i_21])))))))) : (-6)));
                        var_48 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [(unsigned short)12])))))) / (((arr_59 [i_17] [11ULL] [i_17 - 1] [i_17] [i_17] [i_17 + 2] [i_17]) ? (135679748997140306LL) : (((((/* implicit */_Bool) arr_61 [10LL] [i_13] [i_13] [i_18] [i_21] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_64 [i_12] [i_12] [i_17] [i_17] [i_18] [i_21])))))));
                        var_49 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_59 [i_21] [i_12] [10U] [i_13] [i_12] [i_12] [i_12]))))))))));
                    }
                    var_50 = ((/* implicit */unsigned int) var_11);
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_51 = ((/* implicit */_Bool) arr_43 [12ULL] [i_17 + 1] [12ULL]);
                    var_52 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */long long int) 3765532277U)))) >> (((((unsigned int) var_9)) - (208U))))), (((/* implicit */long long int) var_8))));
                }
                var_53 ^= ((((/* implicit */int) var_14)) < ((-(((/* implicit */int) ((signed char) arr_19 [i_17] [(unsigned short)2] [(unsigned short)2] [i_12]))))));
                arr_71 [i_13] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (+(778868715937725665LL)))))));
            }
            for (signed char i_23 = 1; i_23 < 15; i_23 += 3) 
            {
                arr_74 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) var_11);
                var_54 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3)))) ? (max((((/* implicit */long long int) arr_14 [i_12])), (-2925180537641101557LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12] [i_13] [i_23] [i_12] [i_12]))) - (1466632377U)))))));
            }
            for (signed char i_24 = 3; i_24 < 16; i_24 += 2) 
            {
                arr_79 [i_12] = ((/* implicit */_Bool) ((unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)19)))))));
                var_55 = ((/* implicit */signed char) 4);
                var_56 = (~(3171955901U));
            }
        }
        var_57 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((unsigned int) (-2147483647 - 1)))) : (arr_37 [i_12]))));
    }
    var_58 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 3 */
    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
    {
        arr_82 [i_25] [i_25] = ((/* implicit */unsigned int) var_14);
        /* LoopSeq 3 */
        for (unsigned char i_26 = 4; i_26 < 10; i_26 += 1) 
        {
            var_59 = ((/* implicit */_Bool) arr_4 [i_25] [i_26]);
            var_60 -= ((/* implicit */unsigned long long int) var_16);
        }
        for (unsigned char i_27 = 1; i_27 < 11; i_27 += 4) 
        {
            var_61 = ((/* implicit */unsigned char) -1439658741407949995LL);
            var_62 *= ((/* implicit */signed char) (+(((unsigned int) ((arr_46 [i_25] [i_27] [i_27] [i_25]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_25]))))))));
        }
        for (int i_28 = 1; i_28 < 10; i_28 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_29 = 3; i_29 < 12; i_29 += 2) 
            {
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 13; i_30 += 1) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((12176560173703614183ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_100 [i_25] [i_25] [i_25] [i_25] [i_25])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_47 [i_25] [i_28] [i_25] [i_25]))))))))));
                            arr_101 [i_25] [i_28 + 2] [i_28] [i_28] [i_30] [i_28] [i_31] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_53 [i_31] [i_29]))))))));
                            var_64 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_13 [i_31] [i_30] [i_29 - 3] [i_25])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (var_7))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_25] [9U]))))))));
                        }
                    } 
                } 
                var_65 -= ((((/* implicit */_Bool) ((var_2) ? (arr_88 [i_25] [i_28 - 1] [4LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) ? (((/* implicit */int) ((unsigned short) arr_64 [i_29] [i_29 - 3] [(unsigned char)10] [i_29] [i_29] [i_29 - 3]))) : (((/* implicit */int) (short)(-32767 - 1))));
                /* LoopSeq 2 */
                for (unsigned int i_32 = 0; i_32 < 13; i_32 += 3) 
                {
                    arr_104 [i_28] [i_28 + 2] [i_28] [i_29] [(short)11] = ((/* implicit */long long int) ((((/* implicit */int) arr_91 [i_28] [i_28] [i_28])) * (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49934))) : (arr_102 [(unsigned short)8] [i_28 + 2] [i_29] [i_32]))))));
                    var_66 |= ((((((/* implicit */_Bool) arr_47 [8U] [i_25] [i_25] [i_28])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) >= (((/* implicit */long long int) arr_90 [i_29] [i_29] [i_25])));
                    var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18021427743303219097ULL)) ? (((((/* implicit */_Bool) arr_78 [i_29 - 3] [i_28 + 3])) ? (((/* implicit */int) arr_78 [i_29 - 2] [i_28 + 3])) : (((/* implicit */int) arr_77 [i_29] [i_29] [i_29 - 1] [i_28 + 3])))) : (((((/* implicit */_Bool) arr_24 [i_29 - 2] [i_29 - 2] [i_28 + 2] [i_28 + 1] [i_25])) ? (((/* implicit */int) arr_31 [i_29 - 1] [i_28 + 2] [(unsigned short)5] [i_25])) : (((/* implicit */int) var_18))))));
                }
                for (unsigned long long int i_33 = 4; i_33 < 11; i_33 += 2) 
                {
                    arr_109 [i_25] [i_28] [i_29] [i_33] [8U] [i_33] &= ((/* implicit */unsigned int) ((short) ((unsigned short) (short)9229)));
                    arr_110 [i_25] [i_25] [i_33] [i_25] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (-2147483645)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)81)))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_47 [i_25] [i_25] [i_29] [i_33])) == (((/* implicit */int) (signed char)122)))))))));
                }
                var_68 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_18)))) + (((((/* implicit */_Bool) var_8)) ? ((-(8LL))) : (((/* implicit */long long int) arr_84 [3ULL] [i_28] [0U]))))));
            }
            arr_111 [i_28] [i_28 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_28 - 1] [i_28 + 3] [i_28]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_34 = 1; i_34 < 12; i_34 += 1) 
        {
            var_69 = 1876429573U;
            arr_115 [i_34] [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_50 [16] [8U] [i_25] [i_34] [i_25]))))) ? ((~(arr_37 [i_25]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 536346624U)) ? (arr_29 [i_25] [20LL] [i_25] [22LL] [i_34] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_25] [i_25] [i_25])))))) ? (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (8785409785879056875LL) : (-2255430440553352052LL))))));
        }
    }
    for (short i_35 = 2; i_35 < 11; i_35 += 1) 
    {
        arr_119 [(unsigned short)9] = ((/* implicit */short) (((+(((unsigned int) var_5)))) > (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) % (((((/* implicit */_Bool) arr_17 [i_35 - 1] [i_35] [i_35] [i_35] [6U] [i_35])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_35] [(signed char)16] [(signed char)16] [i_35]))) : (var_7)))))));
        arr_120 [i_35] = ((/* implicit */int) arr_66 [i_35] [i_35 + 3] [i_35 + 1] [i_35] [i_35 - 2] [i_35] [i_35]);
        /* LoopSeq 2 */
        for (short i_36 = 0; i_36 < 14; i_36 += 1) 
        {
            var_70 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_35] [i_35] [2] [i_36]))) == (3171955875U)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_45 [14] [(unsigned char)0] [14] [i_36])))))));
            /* LoopNest 2 */
            for (unsigned int i_37 = 1; i_37 < 10; i_37 += 1) 
            {
                for (long long int i_38 = 0; i_38 < 14; i_38 += 3) 
                {
                    {
                        arr_129 [i_35] [i_37] [i_37] [10LL] [10LL] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_128 [i_37])))));
                        var_71 = ((/* implicit */unsigned int) arr_25 [i_37]);
                        var_72 = ((/* implicit */unsigned long long int) arr_125 [i_37]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_39 = 1; i_39 < 10; i_39 += 3) 
        {
            arr_134 [i_39] = ((/* implicit */unsigned short) var_18);
            var_73 = ((/* implicit */long long int) arr_78 [i_39] [16LL]);
        }
        var_74 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_118 [i_35] [i_35 + 1]))))));
        var_75 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_122 [i_35 + 3])))) == (((/* implicit */int) (unsigned short)35253))));
    }
    for (unsigned char i_40 = 0; i_40 < 11; i_40 += 3) 
    {
        var_76 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_122 [i_40]))));
        var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) (!(((/* implicit */_Bool) arr_92 [i_40] [i_40] [i_40] [i_40])))))));
        var_78 ^= ((/* implicit */long long int) var_11);
        var_79 = ((/* implicit */unsigned char) 4075084266U);
    }
}
