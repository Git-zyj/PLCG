/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86104
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = arr_13 [i_0] [i_1] [i_0] [1] [1] [i_4];
                                var_14 = ((/* implicit */unsigned char) 1272367288);
                                arr_16 [i_4] [i_3] [i_4] [i_4] [i_4] |= ((/* implicit */int) ((long long int) (short)0));
                                arr_17 [i_0] [(unsigned short)8] [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_0] [i_3] [(unsigned short)2]);
                                arr_18 [i_0] [(_Bool)1] [i_0] [9ULL] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) 0ULL);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [(signed char)4] [i_2] = ((/* implicit */unsigned int) (short)-1);
                    arr_20 [i_0] [i_0] [i_1] [4] = ((/* implicit */int) (unsigned char)0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_26 [3]);
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_32 [i_5] [i_8 + 1]), (arr_32 [i_8 - 1] [i_5])))) ? (((/* implicit */int) arr_23 [i_5] [i_6])) : ((~(((/* implicit */int) (unsigned short)0)))))))));
                            arr_35 [i_5] [(unsigned char)10] [(unsigned char)10] [i_7 + 1] [(unsigned char)10] = ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5]);
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned char)129))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1560497491U)) + (min((((/* implicit */unsigned long long int) arr_25 [i_6] [i_6 - 1] [i_5])), (arr_21 [i_6 - 1] [i_6])))));
                arr_36 [i_5] [1LL] = ((/* implicit */unsigned short) 4609434218613702656ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (short)0);
                            var_20 *= ((/* implicit */unsigned char) ((unsigned int) 2848507884U));
                            var_21 = ((/* implicit */signed char) 18446744073709551615ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) arr_38 [i_11 + 1]);
                            arr_47 [i_5] [i_5] = ((/* implicit */unsigned int) arr_23 [i_11] [i_6]);
                            arr_48 [i_5] [i_5] [i_5] [7] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)0)), (((max((((/* implicit */unsigned int) (unsigned char)73)), (var_2))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                {
                    arr_59 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_56 [i_14] [i_15])) : (min((max((var_7), (((/* implicit */int) arr_56 [i_14] [i_15])))), (((/* implicit */int) arr_58 [i_13] [i_14] [i_13] [i_14]))))));
                    arr_60 [i_13] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_13])) && (((/* implicit */_Bool) (short)-1)))))));
                }
            } 
        } 
        arr_61 [20] = ((/* implicit */unsigned long long int) var_0);
        arr_62 [i_13] = ((/* implicit */long long int) min((((((/* implicit */_Bool) -2420401614228202452LL)) && (((/* implicit */_Bool) -1806375024)))), (max((arr_50 [i_13]), (arr_50 [i_13])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (short i_17 = 4; i_17 < 24; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    {
                        var_23 = var_5;
                        arr_69 [i_13] [i_16] [i_13] [i_18] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_8)) ^ (((1992970020353058007ULL) & (((/* implicit */unsigned long long int) arr_49 [i_16] [i_18]))))));
                        var_24 = ((/* implicit */unsigned int) 3);
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) arr_66 [i_13] [i_16] [i_13]);
            /* LoopSeq 1 */
            for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -1))) ? (((/* implicit */long long int) -255415185)) : (((((/* implicit */_Bool) 127U)) ? (-2420401614228202452LL) : (((/* implicit */long long int) 127U))))));
                var_27 = var_10;
            }
        }
        for (int i_20 = 3; i_20 < 24; i_20 += 3) 
        {
            arr_75 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((2420401614228202451LL) - (((/* implicit */long long int) ((/* implicit */int) arr_68 [(short)17] [(short)17] [i_20]))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) == (2088960U))))));
            arr_76 [i_20] [i_20] [(unsigned char)16] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((4942255744028898926LL), (((/* implicit */long long int) (unsigned short)56080))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(unsigned short)1] [i_20] [i_20]))) + (12615727836004217908ULL))))) / (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (var_1))), (((/* implicit */unsigned long long int) arr_56 [i_20] [i_20 - 2]))))));
        }
    }
    for (unsigned int i_21 = 1; i_21 < 15; i_21 += 3) 
    {
        arr_79 [i_21] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2255)) * (((/* implicit */int) (unsigned short)36103))))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 2848507884U)) ? (1712816817) : (((/* implicit */int) (unsigned short)7954)))))), (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (short)22389))))));
        /* LoopNest 2 */
        for (signed char i_22 = 1; i_22 < 16; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
            {
                {
                    var_28 = ((int) (unsigned short)65511);
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            {
                                arr_89 [i_21] [i_21] [i_21] [i_21] [i_24] [14] = ((/* implicit */int) max((((((((/* implicit */int) (signed char)111)) > (arr_78 [i_21] [i_22 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_22 + 2] [i_21 + 2]))) : (var_12))), ((+(((var_8) << (((((/* implicit */int) (signed char)-75)) + (99)))))))));
                                var_29 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)26))))) && (((/* implicit */_Bool) (unsigned short)8731))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56805))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_23] [i_21 + 3])) | (((/* implicit */int) arr_63 [i_21] [i_21 - 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 18; i_26 += 1) 
                    {
                        for (unsigned short i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */int) (unsigned short)43008);
                                var_32 = ((/* implicit */unsigned int) ((max((1056964608U), (((/* implicit */unsigned int) (unsigned short)22527)))) != (((/* implicit */unsigned int) max((134217472), (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned short)1022)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_28 = 1; i_28 < 17; i_28 += 3) 
        {
            for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 3) 
            {
                {
                    var_33 = ((/* implicit */int) max((var_33), ((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)17903))))))));
                    var_34 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (1553953998)))) ? (((/* implicit */int) (unsigned short)22528)) : (((/* implicit */int) (unsigned char)0)))) | (((/* implicit */int) arr_51 [i_21]))));
                    /* LoopNest 2 */
                    for (unsigned int i_30 = 1; i_30 < 15; i_30 += 1) 
                    {
                        for (unsigned char i_31 = 0; i_31 < 18; i_31 += 1) 
                        {
                            {
                                arr_108 [i_21] [i_28 + 1] [i_21 + 3] [i_21 + 3] [i_30] [(signed char)7] = ((/* implicit */unsigned short) (signed char)83);
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */int) (unsigned char)255)) : (arr_96 [(unsigned char)12] [(unsigned short)3] [i_29] [(unsigned short)3] [i_28] [(signed char)4] [11U])))))) <= ((+(18446744073709551615ULL)))));
                                var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_70 [i_29] [i_29] [i_30 - 1])) ? (((/* implicit */long long int) 2486993138U)) : (arr_70 [i_21] [i_29] [i_30 + 1])))));
                                arr_109 [i_21 + 2] [i_21] [i_21] [i_21 + 3] [i_21 + 2] = ((/* implicit */unsigned int) arr_71 [i_21] [i_21] [i_28 - 1] [i_30 + 2]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_32 = 0; i_32 < 18; i_32 += 4) 
                    {
                        arr_113 [i_28] [i_28] [i_21] [i_28 - 1] [i_28] = ((/* implicit */unsigned char) ((max((17488569762819367840ULL), (((/* implicit */unsigned long long int) arr_88 [i_28 - 1] [i_21] [i_21 + 2] [(signed char)17] [i_21])))) != (((/* implicit */unsigned long long int) max((arr_96 [i_21 + 1] [i_21 + 1] [i_21] [i_28 - 1] [(short)17] [i_28 + 1] [i_28 + 1]), (((/* implicit */int) (unsigned short)63733)))))));
                        arr_114 [(signed char)13] [i_21] [i_32] [12] = ((/* implicit */_Bool) arr_110 [i_21] [i_28 + 1] [i_29] [i_21] [i_21]);
                        arr_115 [i_21] [9ULL] [(unsigned short)3] [i_29] [i_21] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_101 [i_28 - 1] [i_21 + 2] [i_21 - 1]))))), (((16880211395660437700ULL) | (((/* implicit */unsigned long long int) -1074849079460175795LL))))));
                        arr_116 [i_21] [i_21] [i_28] [i_21] [i_29] [i_32] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) (-2147483647 - 1))) ^ (958174310890183775ULL))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1807974157U))))))) << (((var_1) - (12778716614753727304ULL)))));
                        var_37 = max((((/* implicit */int) arr_65 [i_21] [i_21])), (arr_91 [i_21] [i_21] [i_21] [3] [i_21] [i_21]));
                    }
                }
            } 
        } 
    }
    var_38 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_10)))) ? ((~(((/* implicit */int) (signed char)5)))) : (((/* implicit */int) (_Bool)1))))), (var_3)));
    var_39 = ((/* implicit */short) min((((/* implicit */unsigned int) var_4)), (var_3)));
}
