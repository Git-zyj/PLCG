/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99062
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned short)32963)) ? (3363541366U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((~(-6267500057712350057LL))) == (((/* implicit */long long int) -1163631309)))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_19 = ((/* implicit */short) (~(524287)));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2147483633)))) ? (arr_4 [i_0 - 1] [i_0 + 3]) : (((/* implicit */long long int) (+(2147483641))))));
                arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((-1605044619) ^ (((/* implicit */int) arr_6 [i_0 + 2] [i_0] [(unsigned char)23] [i_0 + 3]))));
            }
        }
        for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            arr_13 [i_0 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((1800017224153260623LL) - (((/* implicit */long long int) 536862720U))))))), (((((/* implicit */_Bool) ((var_4) ? (6664324838474850257LL) : (((/* implicit */long long int) -2147483641))))) ? (((/* implicit */unsigned long long int) var_3)) : (max((var_6), (((/* implicit */unsigned long long int) var_12))))))));
            var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((_Bool)0), ((_Bool)0)))), (((((/* implicit */_Bool) 2147483136)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)20))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (short)-2315)) / (((/* implicit */int) arr_0 [i_3 - 3])))), (((/* implicit */int) (unsigned char)127)))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((var_11) / (((/* implicit */int) var_12)))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                var_23 = ((((/* implicit */_Bool) (short)31868)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)));
                arr_16 [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62392)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_2)))))));
                arr_17 [i_4] [i_4] = (unsigned short)16762;
                arr_18 [i_0 + 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (-(var_6)));
            }
            /* vectorizable */
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 2) 
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                var_24 = ((/* implicit */unsigned int) 333410217);
                var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(2147483626)))) ? (((/* implicit */int) (unsigned char)50)) : ((~(((/* implicit */int) var_13))))));
            }
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_28 [i_0] [i_6] [(unsigned char)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((max((2709029532U), (((/* implicit */unsigned int) (_Bool)1)))) == (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (signed char)-21)))))))) : (var_1)));
                        arr_29 [(unsigned char)8] [i_6 - 1] [i_3] [15] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_12 [i_6 - 1] [i_6 - 1]))))));
                        arr_30 [11LL] [i_3] [i_6] [11LL] [(short)4] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_7 - 1])) < (((/* implicit */int) var_0))))), ((+(((/* implicit */int) (unsigned char)255))))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */int) ((unsigned long long int) (signed char)-25));
        arr_31 [i_0] = ((/* implicit */signed char) ((((8175822280167384318ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2720308625U)))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_12))) & (max((((/* implicit */long long int) arr_24 [i_0 + 3] [i_0] [i_0])), (5538394017204059830LL))))) - (153LL)))));
        var_27 = arr_8 [i_0] [i_0];
        arr_32 [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-2315))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 2; i_10 < 24; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(arr_1 [i_10 - 1]))))));
                    arr_41 [i_8 - 2] [i_9] [(unsigned short)13] [i_9] = 10ULL;
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((-2147483626) + (2147483647))) >> (((((/* implicit */int) var_0)) - (13825))))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_10)) > (arr_36 [i_10 - 2] [i_10 + 1] [i_10 - 1])));
                    var_31 += ((/* implicit */_Bool) arr_14 [i_10] [i_9] [i_9] [i_8]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 3; i_11 < 24; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 24; i_12 += 2) 
            {
                {
                    arr_49 [i_8] [i_11] [(short)3] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_8 [i_11] [i_8 - 2]))));
                    arr_50 [i_8] [(unsigned char)2] [i_12 + 1] [i_11] = ((/* implicit */long long int) var_5);
                    arr_51 [i_11] [i_11] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) + ((-(((/* implicit */int) (short)-30245))))));
                }
            } 
        } 
        arr_52 [i_8] [i_8 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)152)) && (((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) -1605044619))))));
    }
    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) /* same iter space */
    {
        var_32 += ((/* implicit */long long int) var_10);
        var_33 = ((int) (!(((/* implicit */_Bool) 18446744073709551606ULL))));
    }
    /* LoopSeq 3 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_34 = ((/* implicit */unsigned long long int) (unsigned char)103);
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4419363263117849013ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) (unsigned short)47788))))) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)4))));
        arr_58 [i_14 + 1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_14] [i_14 + 1] [i_14 + 1] [(unsigned short)12]), (arr_20 [i_14] [i_14 + 1] [i_14 + 1] [i_14]))))) ^ (((var_4) ? (((/* implicit */long long int) 1894118510)) : ((-9223372036854775807LL - 1LL))))));
        var_36 += ((/* implicit */int) arr_21 [i_14] [i_14] [i_14] [i_14]);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_16 = 1; i_16 < 24; i_16 += 2) 
        {
            arr_64 [i_15] [i_15] [i_15] = max((max((((/* implicit */unsigned long long int) max((var_10), (var_11)))), (max((13557472722750102129ULL), (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775790LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_16 + 1])))))));
            var_37 ^= ((/* implicit */unsigned char) var_5);
            var_38 = ((/* implicit */long long int) ((int) ((var_4) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_2 [i_16 + 1])))));
        }
        for (int i_17 = 4; i_17 < 22; i_17 += 2) 
        {
            arr_68 [i_15] [i_15] [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_63 [i_17] [i_17 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16235))))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((((/* implicit */_Bool) -4285272960866480833LL)) ? (((/* implicit */unsigned long long int) var_16)) : (var_6)))))));
            arr_69 [i_17] |= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)7))))) == (max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))))));
            /* LoopNest 2 */
            for (unsigned short i_18 = 4; i_18 < 24; i_18 += 2) 
            {
                for (long long int i_19 = 3; i_19 < 24; i_19 += 2) 
                {
                    {
                        arr_75 [i_15] [i_17] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)50612)), (((0ULL) / (((/* implicit */unsigned long long int) -818579778))))))) ? (((((/* implicit */_Bool) -1605044619)) ? (var_6) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)97))))));
                        arr_76 [i_15] [(short)3] [i_17 + 1] [i_15] = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_14)) - (var_6))) + (((/* implicit */unsigned long long int) (-(var_15))))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_19 - 1])))))))));
                        arr_77 [i_18] [i_17] [16LL] [i_19] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_72 [(unsigned char)12] [i_17 - 4])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */long long int) (~(var_8)))) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 1986911905U)) : (var_15))))) : (((((/* implicit */long long int) ((569666182U) / (((/* implicit */unsigned int) -1641369337))))) + (max((var_3), (((/* implicit */long long int) 2289118492U))))))));
                        var_39 = ((/* implicit */unsigned short) max(((-(((-43221428) * (((/* implicit */int) (unsigned char)0)))))), ((+(((/* implicit */int) arr_12 [i_17] [i_17]))))));
                        arr_78 [i_15] [i_17] [i_18 - 3] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_11))) | (((((/* implicit */int) (unsigned short)50612)) + (((/* implicit */int) (unsigned char)185))))))) : (4285272960866480833LL)));
                    }
                } 
            } 
            var_40 = ((/* implicit */long long int) arr_55 [i_15]);
        }
        for (unsigned long long int i_20 = 1; i_20 < 24; i_20 += 2) 
        {
            var_41 = ((/* implicit */int) max((((arr_15 [i_20 - 1] [i_15] [i_20] [i_15]) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) / (6647599863587209508LL)))))), (((/* implicit */unsigned long long int) max(((unsigned char)32), (((/* implicit */unsigned char) var_9)))))));
            arr_81 [(short)0] [i_20] [i_20] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_62 [i_20 + 1] [(short)22] [i_20 - 1])))), (((((/* implicit */_Bool) arr_42 [(unsigned short)10] [(unsigned short)10])) ? (((/* implicit */int) arr_62 [i_20 + 1] [8U] [i_20 - 1])) : (((/* implicit */int) arr_62 [i_20 + 1] [(short)10] [i_20 - 1]))))));
        }
        arr_82 [i_15] = ((/* implicit */unsigned int) ((((2289118492U) ^ (var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))));
    }
    /* vectorizable */
    for (unsigned char i_21 = 3; i_21 < 11; i_21 += 2) 
    {
        /* LoopSeq 4 */
        for (short i_22 = 3; i_22 < 11; i_22 += 2) 
        {
            /* LoopNest 3 */
            for (int i_23 = 3; i_23 < 9; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        {
                            arr_98 [i_21] [i_22] [i_21] [i_24] [i_25] = ((/* implicit */short) 1641369336);
                            arr_99 [i_21] = ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_22] [i_22 - 3] [i_22 - 3]))) & (var_15));
                            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)14923))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (var_3) : (var_3))) : ((((_Bool)1) ? (var_14) : (((/* implicit */long long int) var_11)))))))));
                            arr_100 [i_24] [i_21] [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-11646)) ? (((/* implicit */unsigned long long int) -898664381)) : (2170749259229390177ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((var_8) - (2455328357U))))))));
                        }
                    } 
                } 
            } 
            var_43 -= ((/* implicit */unsigned long long int) var_2);
            arr_101 [i_21] [6U] = ((/* implicit */unsigned char) ((var_3) & (((/* implicit */long long int) ((((/* implicit */_Bool) 894153960U)) ? (((/* implicit */int) (unsigned short)62713)) : (var_10))))));
        }
        for (short i_26 = 3; i_26 < 10; i_26 += 2) 
        {
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)29247)) : ((~(((/* implicit */int) (_Bool)1))))));
            arr_104 [10LL] [i_21] [i_21] = ((/* implicit */unsigned char) (-(-2044457391)));
            var_45 = ((/* implicit */unsigned short) arr_15 [i_26] [i_26] [i_21 - 3] [i_26 + 1]);
            var_46 ^= ((/* implicit */unsigned char) var_1);
        }
        for (int i_27 = 3; i_27 < 11; i_27 += 2) 
        {
            var_47 = ((/* implicit */unsigned int) arr_84 [i_21]);
            arr_108 [i_21] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_27 + 1] [i_21 - 3])) ? (((/* implicit */long long int) 4294967295U)) : (arr_4 [i_27 - 1] [i_21 + 1])));
            /* LoopSeq 3 */
            for (signed char i_28 = 2; i_28 < 9; i_28 += 2) 
            {
                arr_111 [i_21] [i_21] [i_21 + 1] = ((((var_15) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (28983))));
                var_48 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)245))));
                arr_112 [i_21] [(unsigned short)8] [i_28] = ((/* implicit */short) ((((long long int) (short)24339)) <= (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            }
            for (unsigned int i_29 = 2; i_29 < 9; i_29 += 2) 
            {
                var_49 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)38290)) && (((/* implicit */_Bool) 9223372036854775807LL)))));
                arr_115 [(unsigned char)4] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_21] [i_21]))) : (4294967276U)));
                arr_116 [i_21] [i_21] [i_21] [i_29 + 3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)62717))));
            }
            for (long long int i_30 = 4; i_30 < 11; i_30 += 2) 
            {
                arr_119 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((var_15) >= (var_14))))));
                arr_120 [i_21] [i_21] [i_21] [i_21] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)29247)) : (((/* implicit */int) (short)18455)));
                var_50 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((arr_15 [i_21] [i_27] [i_21] [i_30]) >> (((3464219336482439570LL) - (3464219336482439515LL)))))));
            }
        }
        for (signed char i_31 = 3; i_31 < 11; i_31 += 2) 
        {
            arr_123 [(unsigned short)0] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-32762))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)1908)) : (var_11)))));
            arr_124 [i_21] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) 2147483624))));
        }
        arr_125 [4] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)36)) != (var_11)))) & (((/* implicit */int) arr_110 [i_21 - 2]))));
    }
    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-27544)) ? ((-(((((/* implicit */_Bool) (short)-30480)) ? (((/* implicit */long long int) 226231379U)) : (var_15))))) : (max((((/* implicit */long long int) 466435000)), (var_14)))));
    var_52 = ((/* implicit */int) var_12);
    var_53 = ((/* implicit */unsigned int) ((var_16) <= (var_15)));
}
