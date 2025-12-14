/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75066
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 - 2] [(signed char)10] [i_4] [i_4])) && (((/* implicit */_Bool) var_9))))) >> (((min((4294967295U), (((/* implicit */unsigned int) var_8)))) - (23006U))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65527)) + (((/* implicit */int) (unsigned short)3072))))) : (((arr_6 [i_3]) + (((/* implicit */unsigned long long int) var_5))))))) ? (min(((+(var_11))), (((arr_14 [2] [i_1] [i_2]) * (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4611545280939032576LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)8))))) ? ((~(2871405094U))) : (max((arr_8 [i_4] [i_4 + 3] [11ULL] [i_4 - 1]), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                        for (short i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) (((+(arr_0 [i_0]))) / (((arr_3 [i_3 - 1]) / (arr_3 [i_3 + 2])))));
                            var_19 = ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) arr_4 [i_5 + 1] [i_3 + 1]))))) ? (((((/* implicit */int) var_12)) * (((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) var_8)))))) : ((-((+(((/* implicit */int) (unsigned char)1)))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_14) + (1U)))) / ((~((+(var_13)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(max((arr_6 [i_3 + 1]), (arr_6 [i_3 + 1]))))))));
                        }
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_3 - 1] [6LL] [i_3])))), (((/* implicit */int) min((arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))))))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 + 1])) + (arr_9 [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3] [i_3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))) : (((4294967265U) << (((((/* implicit */int) (unsigned short)20600)) - (20599))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) arr_17 [i_7] [i_8]);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (long long int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        {
                            arr_30 [i_7] [i_8] [i_9] = ((/* implicit */short) arr_28 [i_0] [i_7] [i_8] [i_9] [(signed char)8]);
                            arr_31 [i_9] [i_9] [i_9] [i_8] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1423562214U)) ? (var_4) : (((((/* implicit */_Bool) arr_8 [i_7] [8] [15] [i_10])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_8))))));
                            arr_32 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_7]))));
                            arr_33 [(signed char)15] [i_9] [i_8] = ((/* implicit */int) var_11);
                            arr_34 [i_9] [i_7] = ((/* implicit */unsigned long long int) (-((-(9223372036854775807LL)))));
                        }
                    } 
                } 
            }
            for (int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (arr_14 [0ULL] [i_7] [i_11])));
                var_27 = ((((var_13) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [14U]))))) % (((/* implicit */long long int) (~(2871405089U)))));
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((1423562211U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_38 [i_7] = ((/* implicit */unsigned int) (+(var_9)));
            }
            for (int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
            {
                arr_42 [i_12] [i_7] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_12] [i_7] [i_0]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    arr_47 [i_7] [15ULL] [i_13] = ((/* implicit */_Bool) arr_7 [i_0] [i_7] [7U] [i_13]);
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)99)))))));
                    arr_48 [i_0] [i_12] [i_13] = ((/* implicit */unsigned short) ((unsigned char) arr_3 [i_7]));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_51 [i_14] [i_14] [i_14 - 1] = var_1;
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        var_29 += (!(arr_13 [8] [8] [i_0] [i_14 - 1] [i_14 - 1]));
                        arr_54 [i_0] [(unsigned char)5] [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1423562196U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_13)))) && ((_Bool)1)));
                        var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) (_Bool)1))))));
                        var_31 = 1423562214U;
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_32 = (~(arr_53 [i_0] [i_0]));
                        arr_58 [(short)14] [i_7] [i_14] [i_14] [2U] = ((/* implicit */long long int) ((4734519727541277974ULL) > (((/* implicit */unsigned long long int) -3))));
                    }
                    for (short i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1])) ? ((+(((/* implicit */int) (short)32640)))) : (((((/* implicit */int) arr_40 [i_0] [i_0])) / (((/* implicit */int) (signed char)80))))));
                        arr_63 [i_14] [i_14] [i_12] [i_12] [i_12] = ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_10));
                    }
                    arr_64 [i_14] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_14] [i_7]))));
                    arr_65 [i_0] [i_0] [i_0] [i_0] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65408))));
                }
                for (signed char i_18 = 3; i_18 < 16; i_18 += 4) 
                {
                    arr_70 [i_0] [i_0] [i_7] [i_12] [2] [i_18 - 2] = ((/* implicit */signed char) 3554538936U);
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_5))));
                }
                for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                    arr_73 [i_0] [i_7] [i_19] [i_19] = ((/* implicit */int) ((short) (signed char)-42));
                }
                arr_74 [i_7] [i_7] = ((/* implicit */long long int) 1U);
                var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_7] [6LL])) ? (((/* implicit */int) arr_52 [i_7] [i_7] [i_7] [i_7] [i_12] [i_12] [i_12])) : (((/* implicit */int) (_Bool)1))));
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((1423562207U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_7] [7] [i_12]))))))));
            }
            for (int i_20 = 0; i_20 < 17; i_20 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    for (unsigned char i_22 = 2; i_22 < 16; i_22 += 3) 
                    {
                        {
                            arr_86 [i_0] [11] [i_22] [i_0] [13LL] [i_0] [i_0] = ((/* implicit */signed char) (+(var_0)));
                            arr_87 [i_22] [i_7] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_20] [i_21])) && (((/* implicit */_Bool) 18011360787168351757ULL))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_55 [i_7])) : (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_20]))))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    for (short i_24 = 1; i_24 < 16; i_24 += 4) 
                    {
                        {
                            arr_92 [i_0] [i_7] [i_7] [i_20] [i_23] [i_7] = ((/* implicit */unsigned int) ((var_4) % (var_0)));
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [(signed char)13] [i_0] [i_24 + 1] [i_23] [i_24 + 1])))))));
                            arr_93 [i_0] [i_7] [i_23] [i_0] = ((/* implicit */unsigned short) ((1736282288U) * (arr_85 [i_7])));
                            arr_94 [i_0] [i_7] [i_20] [i_23] [i_24] |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)27394)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_6 [(signed char)1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27394)))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_7]))) + (var_13))))));
            }
            arr_95 [i_0] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_7] [i_7] [i_7] [(short)0])) - (((/* implicit */int) (short)27394))))) ? (var_0) : (((/* implicit */int) (signed char)74))));
        }
        for (unsigned char i_25 = 0; i_25 < 17; i_25 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-27395))))) <= (((unsigned long long int) var_7))))), (((((((/* implicit */int) var_16)) + (2147483647))) << (((((/* implicit */int) (unsigned char)116)) - (116)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 3) 
            {
                var_42 |= ((/* implicit */unsigned short) (~(var_11)));
                var_43 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((1746310466) >> (((((/* implicit */int) (short)-2048)) + (2050))))) & (((/* implicit */int) arr_13 [16ULL] [i_25] [i_25] [i_26] [i_26])))))));
                var_44 = ((/* implicit */unsigned short) (+(((var_4) & (((/* implicit */int) arr_72 [i_25] [i_25]))))));
            }
            for (long long int i_27 = 3; i_27 < 15; i_27 += 4) 
            {
                var_45 = ((max((((/* implicit */int) ((1219413119U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */int) (unsigned short)2)) << (((var_3) - (1153346335U))))))) * ((~(((((/* implicit */_Bool) -15LL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)0)))))));
                var_46 = ((/* implicit */signed char) min(((~(((/* implicit */int) min((((/* implicit */signed char) arr_75 [i_25] [i_0])), ((signed char)89)))))), ((~(((/* implicit */int) (short)-512))))));
                arr_104 [i_0] [i_0] = ((/* implicit */_Bool) 4294967295U);
                arr_105 [i_0] [i_25] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4212069326U), (((/* implicit */unsigned int) (unsigned short)1346))))) ? (min((((/* implicit */unsigned long long int) 4294967295U)), (0ULL))) : (((/* implicit */unsigned long long int) -8865932856857897388LL))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_25] [i_25] [i_25] [i_27 + 1]))))) : (max((2898801758U), (((/* implicit */unsigned int) arr_55 [i_27 - 1]))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_28 = 0; i_28 < 16; i_28 += 1) 
    {
        arr_110 [i_28] [i_28] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_36 [i_28] [i_28] [i_28])) ? (arr_18 [i_28] [i_28] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_28] [(unsigned short)16]))))))));
        arr_111 [(unsigned short)12] |= ((/* implicit */unsigned int) ((_Bool) arr_27 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]));
        arr_112 [i_28] [i_28] = (unsigned char)133;
    }
    var_47 = ((/* implicit */int) ((unsigned long long int) ((((-1028593204) + (2147483647))) << (((((/* implicit */int) (unsigned char)127)) - (127))))));
    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_9))));
}
