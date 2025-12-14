/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66055
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */int) (short)-5638))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 - 1]), ((signed char)-96))))) : (0U)));
        arr_4 [(unsigned char)10] [4U] = ((/* implicit */unsigned int) ((short) (_Bool)1));
        var_17 ^= ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (min((8250566605515165032LL), (((/* implicit */long long int) (unsigned short)50797))))));
        var_18 *= ((/* implicit */unsigned int) (!(arr_0 [i_0 - 1] [i_0])));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned char) arr_7 [(short)2]);
        arr_8 [i_1] = max((var_4), (((/* implicit */long long int) arr_1 [i_1])));
    }
    for (int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (arr_7 [(unsigned char)4]) : (arr_7 [6LL])))) ? (arr_7 [(unsigned char)4]) : (((((/* implicit */_Bool) arr_7 [(short)8])) ? (arr_7 [6LL]) : (arr_7 [(unsigned short)4])))));
        var_21 = ((/* implicit */unsigned char) arr_7 [8LL]);
        var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    var_23 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_2] [i_5])) ? (2191603649561643917LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_5])))))));
                    /* LoopSeq 3 */
                    for (int i_6 = 4; i_6 < 9; i_6 += 2) 
                    {
                        arr_23 [i_2] [i_2] [i_4] [i_5] [i_5 + 2] [i_6] [i_6] = ((/* implicit */int) arr_12 [i_2] [i_4]);
                        var_24 |= ((/* implicit */unsigned int) ((short) 8250566605515165032LL));
                        arr_24 [i_3] [i_3] [i_4] [(unsigned char)7] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [(unsigned char)6] [i_4] [i_2 - 1] [i_5 - 4]))));
                    }
                    for (int i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((short) arr_13 [i_2] [i_2] [i_5 - 4] [i_7]));
                        arr_28 [i_4] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12288)) >> (((((/* implicit */int) (unsigned char)135)) - (135)))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_26 [i_2] [(unsigned char)7] [i_4] [i_5] [i_7]))))) ? (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (var_5) : (((/* implicit */int) arr_14 [i_3] [(unsigned char)2] [3])))) : (((/* implicit */int) (short)14792))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (2262135339U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78)))));
                    }
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_31 [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-8250566605515165032LL)));
                        arr_32 [i_2] [i_3] [i_2] [i_4] [i_8] = ((/* implicit */signed char) -25LL);
                        var_28 = ((/* implicit */int) max((var_28), ((+(var_11)))));
                        arr_33 [i_4] [i_3] [i_4] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1]))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)95))))) ? (var_8) : ((~(((/* implicit */int) arr_14 [i_2] [i_2] [1ULL]))))));
                    }
                    var_30 = ((/* implicit */unsigned char) (!(((_Bool) arr_11 [i_4]))));
                }
                for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_11 [i_9 + 2]))) || (((/* implicit */_Bool) (signed char)95))));
                    arr_37 [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) (short)12288)), (((((/* implicit */_Bool) (short)-16339)) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (2130706432)))))) / ((+(-10LL)))));
                }
                var_32 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)151)) ^ (((/* implicit */int) (short)-32415)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_5))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (min((527319426), (((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 1])))) : (((/* implicit */int) (signed char)-100))));
            }
            var_35 -= ((/* implicit */unsigned char) (short)12282);
            var_36 = ((/* implicit */unsigned int) max((max(((+(arr_11 [i_2]))), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(short)2])) ? (((/* implicit */int) arr_6 [6LL])) : (((/* implicit */int) arr_6 [(short)10])))))));
            var_37 = ((/* implicit */unsigned char) (short)-32415);
        }
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_12 = 1; i_12 < 9; i_12 += 3) /* same iter space */
            {
                arr_49 [i_2] [i_11] [5LL] [10] = ((/* implicit */unsigned char) ((short) arr_45 [i_2 + 2] [i_12 + 2] [i_12 + 2]));
                var_38 |= ((((/* implicit */_Bool) arr_17 [i_11] [i_2] [i_2] [(unsigned short)4] [6LL])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_40 [i_2 + 2]));
                arr_50 [i_2] = ((/* implicit */short) ((527319426) / (((/* implicit */int) arr_35 [(short)4]))));
            }
            for (short i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_2 + 1] [10U] [i_13]))) : (min((1312442883U), (707483113U))))))));
                arr_54 [i_2 + 1] [i_11] [i_13 + 3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_47 [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [(short)8] [i_13])))))))), (max((var_15), (((/* implicit */unsigned long long int) arr_30 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12289))))), (((((/* implicit */_Bool) arr_25 [(_Bool)0] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29372))) : (arr_25 [(short)10] [i_2 + 2]))))))));
                var_41 = ((/* implicit */int) min((var_41), (var_5)));
            }
            for (short i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
            {
                var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_2 + 2] [i_2])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_14] [i_14] [i_2 - 1] [4LL])) ? (((/* implicit */int) (signed char)-96)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_2] [i_11])) : (((/* implicit */int) (signed char)95))))))) : (arr_30 [i_2] [i_11] [i_14])));
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32256)) || (((/* implicit */_Bool) (signed char)94))));
                var_44 = ((/* implicit */int) ((long long int) arr_20 [i_14] [i_14] [(unsigned char)10] [i_14 + 1] [i_14] [i_14]));
            }
            /* vectorizable */
            for (short i_15 = 1; i_15 < 9; i_15 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) -345578520048483267LL)) || (((/* implicit */_Bool) (short)0))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) arr_10 [i_2 - 1]))));
            }
            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13134)) ? (((/* implicit */int) (short)2904)) : (((/* implicit */int) (signed char)27))));
            arr_59 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-96)), ((short)-9056)))) ? ((~(0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (short)16944)) : (((/* implicit */int) (unsigned short)50797)))))));
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) arr_29 [(unsigned short)6]))));
            var_49 = ((/* implicit */_Bool) var_2);
        }
    }
    for (int i_16 = 1; i_16 < 10; i_16 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_50 = ((/* implicit */unsigned char) ((((((arr_0 [i_16] [i_17]) ? (2820859879U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_16] [i_17]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_16 + 2] [i_16 + 2]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-12296)), (92999065)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    for (short i_20 = 2; i_20 < 11; i_20 += 4) 
                    {
                        {
                            arr_74 [i_17] [i_16] = ((/* implicit */unsigned short) ((unsigned char) arr_48 [i_16 + 1] [i_16 - 1] [i_16 + 1]));
                            var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            arr_75 [i_16] [i_18] [i_19] [i_16] = ((/* implicit */unsigned char) (unsigned short)14717);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_21 = 1; i_21 < 10; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        arr_83 [i_16] = ((/* implicit */unsigned short) ((2311547554U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) arr_45 [i_16] [(short)2] [i_18]))));
                        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((unsigned long long int) arr_26 [i_16] [i_16 + 1] [i_17] [i_16 - 1] [i_21 + 1])))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        arr_87 [i_16] [i_17] [i_16] [i_18] [i_21] [i_23] = (+(((((/* implicit */_Bool) arr_78 [i_16] [i_21] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_16] [(short)5] [6LL]))) : (arr_41 [i_17] [i_17]))));
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_16] [i_16 - 1] [i_18] [i_21 + 2])) ? (arr_53 [i_16] [i_16 - 1] [i_18] [i_21 + 1]) : (arr_53 [i_21] [i_16 + 2] [i_16 + 2] [i_21 + 1])));
                        arr_88 [i_16] [i_17] [i_16] = ((/* implicit */unsigned char) arr_47 [(short)8]);
                        arr_89 [i_16] [7LL] [i_16] [i_18] [i_21] [i_16] = ((/* implicit */short) (+(((/* implicit */int) arr_48 [(unsigned short)11] [i_21 + 1] [i_23]))));
                    }
                    arr_90 [i_16] [i_16] [i_17] [i_16] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3))));
                    arr_91 [i_16] [i_16] [i_16] [i_16] [(signed char)6] = ((/* implicit */unsigned long long int) ((unsigned char) arr_39 [i_18] [1ULL]));
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        var_55 = ((/* implicit */int) ((short) -1030211172));
                        arr_95 [i_16] [i_16] [i_18] [(unsigned short)4] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3220388815U) >> (((((/* implicit */int) var_0)) - (13723)))))) ? (((/* implicit */int) arr_51 [i_21 + 1] [i_16 - 1])) : (((/* implicit */int) arr_16 [i_16] [i_17] [i_16] [i_21]))));
                    }
                    var_56 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_18] [i_21])) ? (2050460708) : (((/* implicit */int) (short)27903))));
                }
                var_57 = ((/* implicit */unsigned int) -1030211172);
                var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) arr_84 [i_16] [i_17] [i_16 + 1]))));
            }
            arr_96 [i_16] [i_16] [i_17] = ((/* implicit */int) arr_39 [i_17] [i_17]);
            arr_97 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2834833549031200739LL)) ? (4883150800126536885LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (short i_25 = 0; i_25 < 12; i_25 += 2) 
        {
            var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_16 + 1] [i_16] [i_16]))))), (max((arr_57 [i_16 + 2] [i_25] [(_Bool)1]), (arr_57 [i_16 + 1] [i_25] [6]))))))));
            var_60 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -1210099914)) * (1456189062U)))))))));
            var_61 *= ((/* implicit */short) (-(9223363240761753600LL)));
            var_62 = arr_51 [i_16] [i_16];
            var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) min(((-(((/* implicit */int) (short)-26573)))), ((+(max((arr_1 [i_25]), (((/* implicit */int) var_2)))))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_26 = 0; i_26 < 12; i_26 += 4) 
        {
            for (short i_27 = 2; i_27 < 11; i_27 += 4) 
            {
                {
                    var_64 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_9 [i_27])))));
                    var_65 = ((/* implicit */int) ((((/* implicit */_Bool) arr_82 [i_16] [i_26] [i_26] [i_16] [i_26])) ? ((-(((((/* implicit */_Bool) (unsigned char)255)) ? (5832056641738854769LL) : (((/* implicit */long long int) 641660672U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_62 [i_27 - 2] [i_16 + 2]))))));
                    var_66 = ((/* implicit */unsigned char) max((((unsigned int) arr_30 [(short)8] [(short)8] [(short)8])), (min((arr_30 [i_27] [i_27] [i_27]), (((/* implicit */unsigned int) (short)20853))))));
                    arr_107 [i_16] [i_26] = ((/* implicit */unsigned char) min(((short)-20854), (((/* implicit */short) (_Bool)0))));
                }
            } 
        } 
    }
    var_67 ^= ((/* implicit */unsigned int) ((unsigned char) (short)24278));
}
