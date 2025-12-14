/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79697
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4294967288U)) : (var_4))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2] [i_2]))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_3 [i_3])))) - (((/* implicit */int) ((unsigned short) (+(var_4)))))));
                    }
                } 
            } 
        } 
        var_19 = var_14;
    }
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_13 [i_5] [13]))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4 - 1] [i_5] [i_5])) / (((/* implicit */int) arr_15 [10ULL] [i_4 + 1] [i_5]))))))))))));
                /* LoopSeq 2 */
                for (short i_6 = 4; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) ((((min((((/* implicit */int) arr_15 [i_4] [i_5] [i_6])), (arr_20 [i_4] [i_4] [i_4] [i_6]))) % (arr_20 [i_4] [i_5] [i_5 - 3] [i_4]))) / (((/* implicit */int) (!((_Bool)0))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_16)) ? (-6814750551411216535LL) : (((/* implicit */long long int) 0))))))));
                            arr_28 [i_4] [i_4] [1] [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_12 [i_4 + 1])))) ? ((+(arr_12 [i_4 + 1]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_4 + 1] [i_5 - 1] [i_6 - 1]))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5 - 1] [i_5 - 2]))))) : (((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_6 + 2] [i_6] [i_6] [i_6]))));
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) arr_21 [i_4] [i_5 - 2] [i_4 + 1] [i_4])))) ? (((int) arr_26 [i_5] [i_5] [i_7] [i_7] [i_4 - 1] [i_9])) : (((((/* implicit */int) (unsigned char)68)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((/* implicit */unsigned long long int) (!(var_6)))), (min((((((/* implicit */_Bool) var_4)) ? (arr_24 [i_4] [(unsigned short)8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)2] [i_5 - 2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_5 - 3]))))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) -170224373)), (var_15))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_6 - 2])) | (((/* implicit */int) arr_29 [i_4] [i_5] [i_4] [2LL] [i_7] [i_9])))))))) / ((-(((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) -8))))))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] [i_6] [2LL] [i_10] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((var_7) % (var_7)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_14))))));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_4] [(unsigned char)4] [i_4] [i_7] [i_7] [i_10])) ? (((/* implicit */int) (unsigned short)42008)) : (((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_10] [i_7] [i_4] [i_4] [i_5] [i_4])) << (((var_5) - (12267198987486939961ULL)))))), (var_5)))));
                            var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_21 [i_4] [i_6] [i_6] [i_10 + 3])) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))), (((int) ((short) var_11)))));
                            var_30 += ((/* implicit */unsigned long long int) ((524288U) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_10] [i_4] [i_4 - 1] [i_4 + 1])))))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_7))));
                            arr_38 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3)) ? (((/* implicit */int) arr_27 [i_4] [i_5 - 1] [i_4] [i_7] [i_4])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) -8)) || (var_14))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_17))) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)956))) - (arr_13 [i_4] [i_6]))) + (8165595115393253895LL)))))) : (min((max((arr_24 [i_11 + 4] [i_4] [i_4]), (((/* implicit */unsigned long long int) 2465956804U)))), (((/* implicit */unsigned long long int) var_16))))));
                        }
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1910172872)) ? (max((((/* implicit */int) ((_Bool) arr_29 [i_4] [i_4] [i_4] [i_6 + 3] [i_6 - 2] [i_7]))), (arr_22 [i_4] [i_4] [0U] [i_4] [i_4 - 1] [i_4]))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) var_14)), ((unsigned short)961))), (((/* implicit */unsigned short) var_14)))))));
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_32 [i_4]) / ((-(4217828872398102891LL)))))) ? ((-(((/* implicit */int) arr_39 [i_4] [i_5] [i_6] [i_12] [(_Bool)1] [i_13])))) : ((+(((((/* implicit */int) arr_33 [i_13] [i_6 - 2])) * (((/* implicit */int) var_2))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((arr_15 [i_4] [i_6 + 3] [i_4]), (((short) var_17))));
                            arr_47 [i_4] [i_5] [i_5] [i_6] [i_12] [i_12] [i_13] = ((/* implicit */signed char) arr_25 [i_4] [i_4] [i_5] [i_4] [i_4] [(_Bool)1]);
                        }
                        for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */short) arr_25 [i_6 + 3] [i_12] [i_6 + 1] [i_4] [6ULL] [i_12]);
                            var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */short) arr_34 [i_12] [i_6] [i_5] [i_4]))))) ? (((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((27) ^ (((/* implicit */int) (short)0))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) arr_30 [i_4] [i_5 - 2] [i_6] [i_4] [i_5] [i_4] [i_6]))))) ? (((arr_43 [i_14] [i_12] [i_6] [i_5 - 1] [i_5] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_12] [i_4 + 1] [i_5] [i_4 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            arr_50 [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_12 [i_12]))), ((-(((/* implicit */int) (unsigned short)1217))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]))))) : ((-(arr_32 [i_12])))));
                        }
                        for (short i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_4 + 1] [i_4] [i_6] [i_12] [i_15] = ((/* implicit */unsigned long long int) var_6);
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_30 [i_4] [i_4] [i_5] [i_6 - 4] [i_12] [i_4] [i_12])))))) : (var_7)));
                            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((16777215), (((/* implicit */int) var_16)))), (((/* implicit */int) (!(arr_45 [i_4] [i_4 - 1] [i_5] [i_4 - 1] [i_4] [i_12] [i_15])))))))));
                            var_39 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        }
                        for (short i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                        {
                            var_40 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [4] [i_6] [4])) * (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_14 [i_4 + 1] [(short)15] [i_4 + 1])) ? (2865268585U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) max((min((((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_6] [2U] [(signed char)14] [i_5])) ? (arr_32 [i_4]) : (((/* implicit */long long int) -669128900)))), (((/* implicit */long long int) max((arr_22 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */int) arr_46 [i_4] [(unsigned short)10] [i_4] [i_12] [i_16] [i_4 - 1] [i_12]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)65534), (((/* implicit */unsigned short) arr_46 [i_4] [i_5 - 2] [i_6 + 1] [i_12] [i_16] [i_6 + 1] [i_4])))))))))))));
                        }
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_53 [i_4] [i_4] [i_6] [i_4]))))) ? (((/* implicit */unsigned long long int) ((arr_31 [i_4] [i_5] [(unsigned short)0] [i_12] [(unsigned short)9] [i_5] [i_4 + 1]) >> (((((((/* implicit */_Bool) arr_34 [i_4 + 1] [i_4 + 1] [i_6] [i_12])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) - (12267198987486939953ULL)))))) : (((((/* implicit */_Bool) 660438186)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_17))))) : (max((13835058055282163712ULL), (((/* implicit */unsigned long long int) -660438202))))))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_24 [i_6 + 3] [i_5 + 1] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_4] [8ULL] [i_6 - 3] [i_12]))))) ? (arr_43 [i_4] [i_5] [i_6] [i_5] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)176)) < (((/* implicit */int) var_2)))))))) : (((/* implicit */long long int) (-(arr_12 [i_4 - 1]))))));
                        var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_46 [i_5] [i_5] [i_5 - 1] [i_5 - 2] [i_5] [i_5 - 3] [i_5])) : (((/* implicit */int) arr_46 [i_5] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5] [i_5])))) | (((/* implicit */int) max((((/* implicit */short) arr_33 [i_6 - 1] [i_5 - 1])), (arr_27 [i_12] [i_12] [i_4] [4ULL] [i_12]))))));
                        var_45 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_56 [i_4 - 1] [i_5] [i_5] [i_6 - 4] [i_6 + 3] [i_12])) ^ (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_56 [i_4] [(_Bool)1] [i_5 - 2] [i_4] [i_6 + 3] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_56 [i_4] [i_4] [i_5 + 1] [i_6] [i_12] [i_12]))))));
                    }
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) 1180120605))));
                        arr_61 [i_4] [i_5 - 1] [i_6] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) var_4);
                        var_47 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_4] [i_4] [i_6])), (arr_20 [i_17] [14LL] [i_17] [i_17])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 1360676676U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))) | ((+(arr_13 [i_4] [i_4])))))));
                        var_48 |= ((/* implicit */unsigned int) ((int) (-((-(arr_59 [i_4 - 1] [i_4] [i_4] [i_17] [i_4]))))));
                    }
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_59 [i_4 + 1] [i_6 + 1] [i_6 - 4] [2LL] [i_6 + 3])))))));
                }
                for (short i_18 = 4; i_18 < 13; i_18 += 1) /* same iter space */
                {
                    arr_65 [i_4] [i_4 + 1] [i_4] [i_18 + 1] = ((/* implicit */signed char) max((min(((+(arr_51 [i_5 - 2] [i_18] [i_5 - 2] [i_4] [i_4]))), (((/* implicit */long long int) max((((/* implicit */short) arr_33 [i_18 - 4] [i_4])), ((short)28964)))))), (((/* implicit */long long int) (_Bool)1))));
                    var_50 = ((/* implicit */signed char) arr_64 [i_18 - 4] [i_4]);
                    var_51 = ((/* implicit */short) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (!(arr_55 [i_5] [i_5 - 1] [2LL] [2LL]))))));
                }
                arr_66 [10U] |= ((/* implicit */signed char) (-(arr_32 [6ULL])));
                var_52 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1217)) || (((((arr_24 [11U] [i_5] [i_4]) + (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)50)))))))));
            }
        } 
    } 
}
