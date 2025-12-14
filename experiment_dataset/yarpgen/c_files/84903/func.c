/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84903
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_1] [(_Bool)1] [i_1] [i_4] = (i_4 % 2 == zero) ? (((/* implicit */signed char) max((((((((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_4] [i_2 - 2] [i_2 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_4] [i_2 + 2] [i_2 - 2])) + (116))))), (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */signed char) max((((((((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_4] [i_2 - 2] [i_2 - 1])) + (2147483647))) >> (((((((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_4] [i_2 + 2] [i_2 - 2])) + (116))) - (50))))), (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1))))))));
                                arr_13 [i_0] [i_4] [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-76), ((signed char)75)))) && (((_Bool) (_Bool)0)))))));
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-126))));
                                arr_14 [i_0] [i_1] [8] [8] [i_4] |= ((/* implicit */int) max((max((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-118)), (var_14)))), (var_10))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_1] [i_1 - 1] [i_2 + 2] [i_3] [(unsigned short)23] [(unsigned char)23]))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) max(((+(2147483647))), (((/* implicit */int) var_2))));
                                arr_18 [i_0 + 1] [i_1] [i_2] [(unsigned char)22] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned char)1])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_1]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
    {
        for (signed char i_7 = 4; i_7 < 8; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */short) min(((_Bool)1), ((_Bool)1)))), (max((var_14), (((/* implicit */short) arr_5 [i_6 - 2] [i_7 + 1]))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))))) ? ((~(((int) 10332250962161863300ULL)))) : (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_13)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 4; i_9 < 11; i_9 += 1) 
                    {
                        arr_30 [(short)0] [i_6] [i_6] [(signed char)3] [i_8] [(short)6] = ((/* implicit */short) ((-1940699343) >= (((/* implicit */int) (unsigned short)28269))));
                        arr_31 [i_6] [i_6] [i_8 + 1] [i_9] [i_6] [i_6] = (-(((((/* implicit */int) (unsigned char)197)) >> (((((/* implicit */int) var_16)) + (25833))))));
                        arr_32 [i_6 + 1] [i_7] [i_8 + 1] [i_6] = ((/* implicit */short) ((int) arr_19 [i_6 + 2] [i_9]));
                        arr_33 [i_6] [i_9] = ((/* implicit */unsigned char) arr_23 [i_6] [i_6] [i_8]);
                    }
                    var_21 ^= ((/* implicit */long long int) max((((/* implicit */short) min(((signed char)-76), (((/* implicit */signed char) arr_7 [i_6] [i_6 - 1] [(_Bool)1] [i_7]))))), ((short)6267)));
                    var_22 = ((/* implicit */unsigned long long int) var_13);
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_23 += ((/* implicit */short) (-(max((arr_19 [i_6 - 1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_28 [i_6] [i_7] [i_7 + 2] [i_7]))))));
                    var_24 -= ((/* implicit */unsigned short) arr_1 [i_7] [(signed char)20]);
                    arr_38 [i_6] = ((/* implicit */signed char) arr_8 [i_6] [i_6] [i_7 + 4] [i_10]);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)39)), (10332250962161863300ULL))))));
                }
                arr_39 [i_6 + 2] [i_6] = ((/* implicit */short) var_2);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_11 = 4; i_11 < 21; i_11 += 4) 
    {
        var_26 = ((/* implicit */_Bool) max((max((((/* implicit */short) (signed char)0)), (min((arr_42 [i_11]), (((/* implicit */short) arr_6 [i_11 - 2] [i_11])))))), (((/* implicit */short) arr_11 [(short)20] [(short)20] [i_11] [i_11] [i_11]))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [19])))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_11 [i_11] [i_11 - 3] [i_11] [i_11] [i_11])) : (((((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) arr_9 [i_11] [(unsigned short)21] [(short)19] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_11] [(signed char)8] [i_11] [i_11] [i_11])) : (var_15))))))))));
        arr_43 [i_11] &= ((((/* implicit */_Bool) (signed char)114)) ? (-2026294014) : (((/* implicit */int) var_13)));
        arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (arr_16 [i_11 + 1] [i_11] [i_11] [(signed char)2] [i_11] [i_11 - 2]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            for (unsigned short i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                {
                    arr_52 [i_12] [i_13] [i_12 - 1] [i_12] = ((/* implicit */signed char) var_10);
                    arr_53 [i_14] [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((int) (short)0))) ? (((/* implicit */int) max((var_2), ((signed char)107)))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_1))))))));
                    arr_54 [i_12] [i_12] = ((/* implicit */short) 1270085733);
                    arr_55 [i_12] [0ULL] [i_14] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-75)) : ((-((+(((/* implicit */int) var_0))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_15 = 3; i_15 < 19; i_15 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (max((1153694462), (((/* implicit */int) (unsigned short)39505))))))) < (min((arr_48 [(signed char)8]), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_2)), (arr_0 [i_12])))))))))));
            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_12] [i_15] [i_15] [i_12] [i_12 + 1] [i_15])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-9)), (var_4)))) : (((/* implicit */int) (signed char)67))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)126)))) == (((/* implicit */int) arr_45 [i_12] [i_15]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)65516))))))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
        }
        var_31 = ((/* implicit */long long int) 0ULL);
        arr_58 [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-8)) + (2147483647))) << (((((/* implicit */int) ((unsigned short) max((arr_8 [i_12] [8LL] [i_12] [i_12]), (((/* implicit */unsigned long long int) var_14)))))) - (50328)))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 4; i_17 < 17; i_17 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
                    {
                        var_32 = var_14;
                        arr_69 [i_12] [i_12] [i_17] [(signed char)11] [i_17] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (-2147483647 - 1))), (7680U))), (((/* implicit */unsigned int) max((var_15), (((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 1])))))));
                        arr_70 [i_12 - 1] [i_16] [i_17] [i_17] [i_12] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_12 + 1])) : (var_15))) << ((((~(((/* implicit */int) (_Bool)1)))) + (21)))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
                    {
                        arr_73 [i_12] [(signed char)9] [i_12] = ((/* implicit */short) (-(((((/* implicit */int) arr_1 [i_12] [i_12])) % (((/* implicit */int) (_Bool)1))))));
                        arr_74 [(signed char)0] [(signed char)0] [i_12] [i_16] &= (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))));
                        var_33 &= ((/* implicit */signed char) max(((unsigned short)65529), (((/* implicit */unsigned short) arr_10 [(_Bool)1] [(_Bool)1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_34 -= (unsigned short)65516;
                            arr_81 [i_12] [i_16] [i_21] [i_20] [i_21] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-28154)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) < (((((((/* implicit */int) (short)-8)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (27)))))));
                            arr_82 [i_12 - 1] [i_16] [i_16] [i_17] [i_12] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_16] [i_12] [(signed char)9]))) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_80 [i_21] [i_12] [3ULL] [i_12] [i_12 - 1]))));
                        }
                        arr_83 [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_12 + 1] [i_12 - 1]))));
                        var_35 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) -313166168)) < (arr_66 [i_12 - 1] [i_16] [i_17 - 3])));
                        arr_84 [7LL] [i_17] [i_12] = ((arr_15 [i_12] [i_12] [(_Bool)1] [i_12 + 1] [i_12 + 1] [i_12]) && (((/* implicit */_Bool) (signed char)0)));
                    }
                    var_36 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_17] [i_16] [i_12 - 1]))));
                    var_37 -= var_6;
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 17; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_92 [i_23] [2ULL] [i_12] [i_22 + 3] [i_12] = ((/* implicit */unsigned short) (unsigned char)128);
                                arr_93 [i_23] [i_12] [i_17] [i_12] [i_12] = ((/* implicit */unsigned long long int) (((~(8068933320038100423ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)63194)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_24 = 1; i_24 < 15; i_24 += 2) 
    {
        var_38 = ((/* implicit */signed char) min((((/* implicit */int) max(((short)32747), (((/* implicit */short) arr_0 [i_24]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_4))))) : ((+(((/* implicit */int) (unsigned short)3))))))));
        /* LoopSeq 1 */
        for (unsigned char i_25 = 4; i_25 < 14; i_25 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_26 = 4; i_26 < 12; i_26 += 1) 
            {
                for (signed char i_27 = 0; i_27 < 16; i_27 += 2) 
                {
                    {
                        arr_105 [11U] [(unsigned short)6] [i_24 + 1] [i_27] = ((/* implicit */signed char) ((10377810753671451192ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_6), (var_13))), (var_13)))))));
                        var_39 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                    }
                } 
            } 
            arr_106 [i_24] [i_24] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2505))));
            arr_107 [i_24] [i_25] [i_25 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_91 [i_24] [i_24] [i_25 + 2] [i_24] [i_25]), (((/* implicit */short) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(signed char)7] [i_24] [i_24 - 1] [i_24 + 1] [(signed char)7] [i_25 - 4]))) : (min((10377810753671451192ULL), (((/* implicit */unsigned long long int) arr_90 [i_24 + 1] [(unsigned short)6] [4] [i_24] [i_25]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_96 [i_24])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((((/* implicit */int) var_14)), (arr_67 [18ULL] [2ULL] [18ULL]))) : (((/* implicit */int) min((var_3), ((_Bool)0)))))) : (((/* implicit */int) arr_3 [i_24] [i_24] [i_25]))));
        }
    }
    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) var_6))));
}
