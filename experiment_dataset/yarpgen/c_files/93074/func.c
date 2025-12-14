/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93074
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) -1151518728);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 2])) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-8)), ((unsigned short)65505)))) - (65502)))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6))) : (arr_14 [i_2] [i_2 + 2]))) >> (((var_14) - (3677596520U)))));
                            arr_16 [i_0] [(_Bool)1] [(short)10] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((2210443757160525184LL), (((/* implicit */long long int) arr_12 [i_2]))))) ? (arr_4 [i_1] [i_3] [i_4]) : (min((((/* implicit */int) var_2)), ((+(-1151518719)))))));
                            arr_17 [i_0] [i_1] [(unsigned short)7] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)4))));
                            arr_18 [i_2] [i_0] [i_1] [i_2] [i_3] [i_4] = ((3389390719U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-16100))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 3])) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_12)))))) * ((-(((/* implicit */int) (short)-1))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                            arr_28 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */unsigned char) arr_9 [i_0 + 1] [i_2 - 1] [i_6 + 2]);
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((((/* implicit */_Bool) (short)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned char)19] [(_Bool)1] [i_7]))) : (3389390711U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_7] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_15 [i_0] [i_1] [i_7] [i_7] [i_7]))))));
                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) -9223372036854775797LL)))));
            }
            /* LoopNest 3 */
            for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-16075)))))));
                            arr_37 [i_0] [i_1] [i_8] [i_9] [(unsigned char)4] = ((/* implicit */_Bool) var_9);
                            var_20 ^= ((/* implicit */int) 655357870U);
                            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) ((_Bool) 1151518723))) != (((((/* implicit */int) (short)16110)) & (((/* implicit */int) (signed char)31))))))), (((((/* implicit */_Bool) ((unsigned char) arr_5 [i_10]))) ? (((((/* implicit */int) (short)1)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)10)))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((arr_23 [i_0] [i_0] [i_0] [i_0 + 2] [i_1] [i_1]), (((/* implicit */short) arr_33 [i_0 + 2] [i_1] [i_1] [i_1]))))) >> (((/* implicit */int) max(((signed char)7), (((/* implicit */signed char) arr_21 [i_0] [i_1]))))))) <= (((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((+(3389390701U))) : (((((/* implicit */_Bool) arr_1 [i_12])) ? (2655224606U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16161))))))) >= (905576574U)));
                        arr_42 [i_12] [i_11] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) 1349524773U);
                            arr_45 [22] [i_12] [i_11] [20ULL] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_22 [i_13] [i_12] [i_11] [20ULL] [i_0] [i_0])))) ? (((/* implicit */int) max(((signed char)111), (((/* implicit */signed char) ((((/* implicit */int) (short)-6)) < (((/* implicit */int) arr_1 [i_13])))))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)9))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_11] [21LL] [i_13] [i_11] [i_12])) ? ((~(((((/* implicit */int) (signed char)67)) | (((/* implicit */int) arr_39 [(short)9] [i_11] [i_11])))))) : (((((/* implicit */int) (signed char)18)) | (((/* implicit */int) arr_23 [i_0] [i_0 + 2] [i_11] [i_11] [22U] [i_11 + 1]))))));
                        }
                        var_26 = ((/* implicit */unsigned short) (signed char)4);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_14 = 1; i_14 < 22; i_14 += 3) 
        {
            var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)52)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_48 [i_0] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1151518748) < (((/* implicit */int) (signed char)-51)))))) : ((-(3389390742U)))));
            var_28 ^= ((/* implicit */short) ((((/* implicit */int) ((short) arr_34 [i_0]))) & (((/* implicit */int) var_5))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_16 = 2; i_16 < 22; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        {
                            var_29 = (signed char)44;
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_0] [i_0] [4LL] [i_0] [i_0 + 2] [i_15] [i_16 - 1])) - (((/* implicit */int) (signed char)42))));
                            arr_58 [(unsigned char)16] [i_15] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) (signed char)51);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_0] [i_0 - 1])) ? (arr_41 [i_20] [i_21] [i_19] [i_19] [i_0 + 1] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-23)) > (-1151518722)))))));
                            arr_68 [i_0] [i_15] [i_19] [(unsigned short)3] [i_0] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_20] [i_15] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_66 [(short)8] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)-7))))));
                            arr_69 [i_20] [i_20] [i_19] [i_15] [i_15] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)222)) >> (((((/* implicit */int) (signed char)-9)) + (19)))));
                            var_32 += ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) arr_52 [i_0 + 1] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (long long int i_22 = 2; i_22 < 22; i_22 += 2) 
            {
                arr_72 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) arr_65 [i_15]))));
                var_34 ^= ((/* implicit */long long int) ((signed char) (signed char)70));
                /* LoopSeq 1 */
                for (signed char i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((unsigned int) arr_59 [i_0 + 2] [i_0] [22U] [i_23])))));
                    arr_75 [(unsigned char)22] [i_15] [i_15] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)23))))) ? (13444562394293265010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))));
                }
            }
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_15])) ? ((+(((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) (short)-25))));
        }
        var_37 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((var_6) + (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [8U])))), (max((((/* implicit */long long int) (signed char)-24)), (4700391696200359718LL))))), (min((((/* implicit */long long int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))), (((9223372036854775805LL) >> (((6279470837727998940LL) - (6279470837727998891LL)))))))));
        arr_76 [i_0] = ((/* implicit */short) 18446744073709551604ULL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_24 = 0; i_24 < 14; i_24 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_25 = 1; i_25 < 13; i_25 += 2) 
        {
            for (signed char i_26 = 1; i_26 < 13; i_26 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        for (short i_28 = 0; i_28 < 14; i_28 += 2) 
                        {
                            {
                                arr_87 [i_28] [i_27] [i_25] [i_25] [i_24] = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) (signed char)36)))));
                                var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_88 [(signed char)2] [i_25] [i_24] &= ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_26 - 1] [(_Bool)1] [i_26] [i_26 - 1] [i_26])) * (((/* implicit */int) arr_55 [i_26 + 1] [i_26] [i_26] [i_26 + 1] [i_26]))));
                    /* LoopSeq 1 */
                    for (long long int i_29 = 0; i_29 < 14; i_29 += 4) 
                    {
                        arr_91 [i_24] [i_25] [i_26] [i_29] = ((/* implicit */int) (signed char)-61);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((_Bool) (short)28)))));
                    }
                    var_40 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_53 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) > (9223372036854775776LL))))));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((unsigned short) (signed char)-108)))));
        var_42 = ((/* implicit */int) min((var_42), (((var_12) ? ((-(((/* implicit */int) arr_65 [i_24])))) : (((/* implicit */int) var_12))))));
        var_43 ^= ((/* implicit */long long int) (short)17);
    }
    for (long long int i_30 = 3; i_30 < 15; i_30 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_31 = 0; i_31 < 18; i_31 += 4) 
        {
            for (unsigned int i_32 = 0; i_32 < 18; i_32 += 4) 
            {
                {
                    var_44 += ((/* implicit */unsigned short) min((arr_22 [i_31] [19LL] [i_32] [i_31] [(signed char)4] [i_30]), (((/* implicit */long long int) ((((((/* implicit */_Bool) 1145789342U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23719))) : (-4700391696200359730LL))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_52 [i_30] [i_31] [i_32] [i_30 - 1]) >= (var_14))))))))));
                    var_45 += ((/* implicit */signed char) ((-9223372036854775801LL) / (((/* implicit */long long int) min((var_14), (((/* implicit */unsigned int) (signed char)87)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_33 = 0; i_33 < 18; i_33 += 3) 
        {
            var_46 &= ((/* implicit */long long int) (unsigned char)226);
            /* LoopNest 2 */
            for (signed char i_34 = 1; i_34 < 17; i_34 += 2) 
            {
                for (int i_35 = 0; i_35 < 18; i_35 += 1) 
                {
                    {
                        arr_107 [i_34] [(signed char)14] [i_33] [i_33] [i_34] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_30 + 1])), (max((((/* implicit */unsigned short) var_7)), (var_13))))))) != ((~(arr_53 [i_30] [i_33] [i_34] [i_35] [i_35] [i_35])))));
                        var_47 -= ((/* implicit */_Bool) ((-4700391696200359724LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
                        var_48 += ((/* implicit */unsigned char) -4700391696200359704LL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_36 = 1; i_36 < 16; i_36 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_37 = 0; i_37 < 18; i_37 += 2) 
            {
                for (unsigned char i_38 = 0; i_38 < 18; i_38 += 2) 
                {
                    {
                        var_49 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_37]))));
                        arr_118 [i_36] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_39 = 0; i_39 < 18; i_39 += 2) 
            {
                var_50 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55792))) / (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4700391696200359713LL)) || (((/* implicit */_Bool) (signed char)-5))))))));
                /* LoopNest 2 */
                for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                {
                    for (long long int i_41 = 0; i_41 < 18; i_41 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */signed char) ((unsigned char) arr_55 [i_40 - 1] [i_41] [i_41] [i_41] [i_41]));
                            var_52 = ((/* implicit */unsigned char) ((unsigned int) arr_114 [i_36] [i_30 - 2] [i_36]));
                            var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) ((long long int) (_Bool)0)))));
                            var_54 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)44)) || (((/* implicit */_Bool) (signed char)-27)))))) & (-3243603287149243135LL)));
                            var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_94 [i_30 + 3] [i_36 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_39] [i_39] [i_39] [11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [0U] [i_30] [i_30] [(signed char)20]))) : (var_1)))) : (((unsigned long long int) var_6))));
                        }
                    } 
                } 
                arr_127 [i_36] [i_36] [i_36] [i_39] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29139))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(signed char)20])) / (((/* implicit */int) var_7))))) : (((arr_14 [i_36] [i_39]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            }
            for (short i_42 = 0; i_42 < 18; i_42 += 3) 
            {
                var_56 = ((/* implicit */unsigned short) arr_13 [i_30] [16LL] [i_30]);
                /* LoopNest 2 */
                for (signed char i_43 = 0; i_43 < 18; i_43 += 3) 
                {
                    for (signed char i_44 = 0; i_44 < 18; i_44 += 2) 
                    {
                        {
                            var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_121 [i_42] [i_36] [i_36] [i_30])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_2))));
                            var_58 = ((/* implicit */short) ((((/* implicit */int) (signed char)-13)) & (((/* implicit */int) (unsigned char)78))));
                            var_59 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_122 [i_30 + 1] [i_36] [i_42] [i_43])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((var_2) ? (1289009816U) : (4294967284U)))));
                        }
                    } 
                } 
            }
        }
        arr_136 [i_30] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) 737710585U)), (arr_132 [i_30] [(_Bool)1] [i_30 + 3] [i_30] [i_30])))));
    }
    var_60 = ((/* implicit */long long int) var_11);
}
