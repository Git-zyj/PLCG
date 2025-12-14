/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70784
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
    var_15 = ((/* implicit */_Bool) var_14);
    var_16 = var_10;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */int) (short)2300);
        var_18 = ((/* implicit */unsigned short) 250965861);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_19 *= ((/* implicit */unsigned long long int) ((int) (unsigned short)65535));
            var_20 = 2038815661;
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_3])) + (((/* implicit */int) arr_5 [i_1] [(unsigned char)11]))));
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_12 [i_1] [i_3])) >> (((-250965844) + (250965844)))))));
                arr_14 [i_4] [i_3] [i_4 - 3] [i_4 - 3] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) -250965834)) : (arr_8 [i_4 - 1] [i_4 + 3] [i_4])));
                arr_15 [i_1] [i_4] [i_4 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1LL)))) && (((/* implicit */_Bool) -7LL))));
            }
            for (int i_5 = 4; i_5 < 13; i_5 += 2) 
            {
                var_23 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 ^= ((/* implicit */int) arr_4 [i_5 - 3]);
                    var_25 = ((/* implicit */int) var_13);
                }
                var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) <= ((-2147483647 - 1)))) ? (arr_21 [i_5 - 4] [i_5 - 4] [i_5 - 4] [9LL] [i_5 - 4]) : (((((/* implicit */_Bool) -250965857)) ? (-250965870) : (arr_10 [i_5] [15] [(signed char)8])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_3] [12] [i_3])) ? (var_2) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1546252941741318789ULL)))) : (-3LL)));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 250965865)) ? (arr_10 [i_5 + 1] [i_5 + 3] [i_5 - 4]) : (arr_10 [i_5 + 1] [i_5 + 3] [i_5 - 4]))))));
                    var_29 = ((/* implicit */short) arr_19 [i_1] [i_5 - 1] [i_5 - 1]);
                }
                var_30 = var_4;
            }
            var_31 = ((/* implicit */int) max((var_31), (((int) (unsigned char)91))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                arr_26 [i_8] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8])) ? (128880876) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_4 [i_3]))));
                arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_8] [i_1]);
            }
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    arr_35 [i_9] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1)))) ? (arr_29 [i_1] [i_1]) : (((/* implicit */int) arr_20 [i_3] [i_10 + 2] [i_9] [i_9]))));
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_10 + 2] [i_9]))));
                    var_33 += ((/* implicit */short) (-(((/* implicit */int) arr_34 [15] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 3] [i_10 + 3]))));
                }
                for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    arr_38 [(unsigned short)8] [(unsigned short)0] [i_9] = var_6;
                    arr_39 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 128880875)) ? (16900491131968232827ULL) : (((/* implicit */unsigned long long int) 2LL))));
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    var_34 = ((/* implicit */unsigned short) ((signed char) (short)-23809));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_9] [i_3] [3ULL]))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (short)3420)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_22 [i_1] [i_3] [i_3] [i_12])))) : (((/* implicit */int) (short)-27033))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13179158648866134610ULL)) ? (((/* implicit */int) arr_36 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_9])) : (250965857)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_44 [i_1] [i_1] [i_9] [i_12 + 1] [i_13] [i_12] [i_1] = ((/* implicit */short) ((signed char) arr_41 [i_13] [(unsigned short)10] [i_9] [i_1]));
                        arr_45 [i_9] [i_12] [(unsigned char)0] [i_12 + 1] [i_12] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_12] [9] [i_12 + 1] [i_12 + 1] [i_12] [i_9])) ? (var_13) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        arr_46 [i_9] [i_9] [i_9] [i_3] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_9])) / (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7)))));
                    }
                    for (signed char i_14 = 4; i_14 < 15; i_14 += 4) 
                    {
                        arr_49 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2U)) ? (250965843) : (250965866)));
                        arr_50 [i_1] [i_9] [i_12 + 1] = ((/* implicit */int) ((unsigned short) arr_48 [(unsigned short)6] [i_14 - 2] [i_14 + 1] [i_14] [i_9] [i_9]));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) -250965848)) ? (((/* implicit */int) arr_20 [i_9] [i_12 + 1] [i_12] [i_9])) : (((/* implicit */int) var_1))));
                        arr_53 [i_15] [(unsigned char)2] [i_9] [i_1] [i_1] = ((/* implicit */unsigned int) (-(14724229207101944362ULL)));
                        var_38 = ((/* implicit */unsigned long long int) (short)30167);
                    }
                }
                arr_54 [i_9] [i_3] [i_1] [i_9] = ((/* implicit */unsigned long long int) arr_28 [i_9]);
                arr_55 [i_1] [i_9] [i_1] [4U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_9] [i_9])) : (arr_29 [(unsigned short)3] [(unsigned short)3])))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            arr_58 [i_16] [i_16] [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_0)))) < (((/* implicit */int) (unsigned short)49107))));
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 4; i_19 < 15; i_19 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */short) 3817265037U);
                            var_40 = ((/* implicit */unsigned long long int) 283012733031055747LL);
                            var_41 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (374384858)))) >= (((((/* implicit */_Bool) arr_62 [i_1] [i_1] [i_1] [i_1] [i_19 - 1])) ? (((/* implicit */int) arr_51 [(short)1] [(short)1] [i_17] [5U] [i_17])) : (((/* implicit */int) var_0))))));
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_17])))) : (arr_18 [i_19 - 1] [(unsigned char)0] [i_19 - 4]))))));
                            var_43 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-8872)) ? (((/* implicit */int) (unsigned short)9700)) : (250965844))));
                        }
                    } 
                } 
            } 
            var_44 += ((/* implicit */unsigned short) -2960926431123446846LL);
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                arr_70 [1] [1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1023)))))));
                var_45 ^= (((-(((/* implicit */int) var_10)))) ^ (((((/* implicit */_Bool) var_6)) ? (arr_28 [i_1]) : (((/* implicit */int) arr_5 [i_1] [i_16])))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 4; i_21 < 14; i_21 += 1) 
                {
                    var_46 = ((/* implicit */short) ((unsigned short) arr_56 [i_20]));
                    var_47 &= ((/* implicit */unsigned int) ((unsigned short) arr_48 [i_1] [3] [3] [i_21 + 1] [14] [i_21 + 1]));
                }
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_1] [i_16])) && (((/* implicit */_Bool) arr_63 [i_1] [i_1] [i_16] [i_16]))));
                arr_73 [i_20] [i_16] [(unsigned short)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2115971797)) ? (((arr_21 [(signed char)1] [9] [i_16] [(signed char)1] [(signed char)1]) << (((((arr_29 [(_Bool)1] [i_20]) + (1183022710))) - (9))))) : (((((/* implicit */_Bool) arr_62 [i_1] [i_16] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_24 [i_1])) : (-250965839)))));
            }
            for (signed char i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                arr_78 [i_1] [i_1] [i_22] [i_16] = ((/* implicit */short) ((int) (-2147483647 - 1)));
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_77 [7U] [9]))))) * (arr_25 [2U] [i_16] [i_16] [(short)10])));
                var_50 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_17 [i_1] [(short)9] [(short)9])))));
                /* LoopSeq 4 */
                for (int i_23 = 0; i_23 < 16; i_23 += 1) 
                {
                    var_51 ^= ((/* implicit */signed char) (((~(3722514866607607255ULL))) <= (((((/* implicit */_Bool) (short)-8859)) ? (9089252287940339034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21879)))))));
                    arr_82 [i_23] [i_1] [i_22] [i_22] [(short)12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-8872)) ? (((/* implicit */unsigned int) arr_63 [i_23] [i_22] [i_1] [i_1])) : (3212913272U)));
                    arr_83 [i_1] [i_1] [(short)6] [(short)6] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_1] [i_23] [i_22] [i_16] [14U] [i_1])) ? ((-(4553552159309580407ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_22] [i_1] [i_1]))));
                }
                for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    var_52 = ((/* implicit */unsigned long long int) 2147483647);
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((((/* implicit */_Bool) (unsigned short)54280)) ? (3228753953U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8865)))))));
                    var_54 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_24])) : (2119387271)))) ? (var_2) : (-103641943));
                    var_55 = ((/* implicit */int) ((((/* implicit */_Bool) 14724229207101944348ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (3104148944U)));
                }
                for (signed char i_25 = 0; i_25 < 16; i_25 += 3) 
                {
                    var_56 = ((int) ((short) (unsigned short)37153));
                    var_57 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                    var_58 -= ((/* implicit */short) 2232200877U);
                    var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_7))))))));
                    arr_88 [i_1] [i_22] [i_16] [i_1] &= ((/* implicit */unsigned char) ((arr_37 [i_1] [i_22] [i_22] [i_1] [10] [i_22]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21693)))));
                }
                for (int i_26 = 1; i_26 < 15; i_26 += 1) 
                {
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (-1611211596) : (((/* implicit */int) (short)-17099))));
                    arr_91 [i_1] [i_1] [i_1] [i_16] [i_22] [i_26 - 1] = ((/* implicit */unsigned char) ((-2147483647) / (((/* implicit */int) (short)32747))));
                    arr_92 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_24 [i_22]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_27 = 0; i_27 < 16; i_27 += 1) 
                    {
                        arr_95 [i_22] [i_22] [(signed char)10] [i_27] = arr_3 [i_27] [i_16];
                        var_61 = ((/* implicit */int) ((var_12) ? (((/* implicit */unsigned int) arr_28 [i_22])) : (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (1520624554U) : (2744425764U)))));
                        var_62 = ((/* implicit */unsigned short) ((long long int) var_13));
                        arr_96 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_26 + 1] [i_26 + 1])) - (((/* implicit */int) arr_5 [i_26 - 1] [i_26 + 1]))));
                        var_63 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)19315))) == (arr_10 [i_26 - 1] [i_22] [i_16])));
                    }
                    for (unsigned short i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        var_64 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_68 [i_26 + 1] [i_26 - 1] [i_26 - 1] [i_28]))));
                        var_65 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_71 [7] [5] [i_26 + 1] [i_26 - 1] [i_26 + 1] [i_26 - 1]))));
                        var_66 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (arr_48 [i_1] [(unsigned short)2] [i_26 - 1] [i_26 - 1] [i_28] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_67 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65532)) ? ((-2147483647 - 1)) : (112444142)))) - (((((/* implicit */_Bool) arr_64 [i_28] [i_16] [i_16] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (0U)))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_29 = 0; i_29 < 16; i_29 += 3) 
                {
                    var_68 = ((/* implicit */int) var_14);
                    arr_101 [i_22] [i_22] [i_29] = ((/* implicit */short) arr_32 [i_1] [i_16] [i_22] [i_22]);
                }
                for (unsigned int i_30 = 0; i_30 < 16; i_30 += 4) 
                {
                    var_69 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_16] [i_16] [i_22] [i_30] [i_22] [i_30])) ? (((/* implicit */int) arr_34 [i_1] [(_Bool)1] [(_Bool)1] [(unsigned short)9] [0ULL] [i_30])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (short)32746)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_22] [i_22])))));
                    var_70 += ((unsigned int) (unsigned short)60978);
                    /* LoopSeq 1 */
                    for (short i_31 = 3; i_31 < 15; i_31 += 1) 
                    {
                        arr_106 [i_22] [(unsigned char)1] [(signed char)9] [(unsigned char)0] [i_30] [i_31 - 2] [(unsigned char)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-32746))));
                        arr_107 [i_31] [i_22] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_31 [i_1] [i_22] [i_30])) + (((/* implicit */int) (short)(-32767 - 1))))) / (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (signed char)-100)) : (-1611211619)))));
                    }
                }
            }
            for (unsigned short i_32 = 0; i_32 < 16; i_32 += 1) 
            {
                arr_112 [i_1] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_104 [i_1] [i_1] [(unsigned short)12] [i_16] [i_16] [i_16]) : (arr_104 [i_1] [i_1] [i_32] [i_1] [i_1] [(unsigned short)0])));
                arr_113 [(unsigned short)10] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */unsigned short) ((12U) > (((/* implicit */unsigned int) arr_42 [i_1] [i_1]))));
                arr_114 [i_16] [i_16] [i_16] [i_32] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) : (4294967277U)))));
            }
        }
        var_71 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_89 [i_1] [(unsigned char)2] [(unsigned char)2]))));
    }
    for (signed char i_33 = 0; i_33 < 15; i_33 += 2) 
    {
        var_72 = ((/* implicit */unsigned long long int) max((var_72), (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
        var_73 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14621)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_85 [7] [i_33])))) ? (1057013896U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)84))))))))));
    }
}
