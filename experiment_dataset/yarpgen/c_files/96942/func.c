/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96942
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 2] [i_3] |= ((/* implicit */int) arr_1 [i_0]);
                            var_12 &= ((((((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1])) != (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_7 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 2])) + (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_16 [(short)6] [(_Bool)1] [(short)6] [i_5] [i_5] [(short)16])))), (((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_4] [i_5] [13])) >> (((((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4] [(short)7] [i_4])) - (49111)))))));
                                var_14 = ((var_10) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8))))), (arr_21 [(signed char)18] [i_1] [i_4] [i_5] [i_6])))));
                                var_15 = ((((/* implicit */long long int) ((/* implicit */int) (short)-10776))) != (116959111652482020LL));
                                var_16 = ((/* implicit */unsigned char) arr_15 [(_Bool)1]);
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)61923)), (1641101898)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_30 [i_8] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */short) arr_18 [i_9] [i_9 + 1] [i_9 - 1] [i_10] [i_7])), (arr_13 [i_7]))))));
                            var_18 = ((/* implicit */short) min((((((((/* implicit */int) (short)-7962)) + (2147483647))) << (((((/* implicit */int) (short)15590)) - (15590))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)7567)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) arr_2 [i_7] [i_9 + 1])) : (((/* implicit */int) arr_25 [i_8]))))))))));
                            arr_31 [i_10] [i_8] [i_8] [i_8] [i_8] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (arr_7 [i_9 - 1] [i_9] [i_9 - 1])))));
                            arr_32 [i_7] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((max((arr_14 [i_9] [i_9] [i_9] [i_9 + 1]), (arr_14 [i_8] [i_9] [i_8] [i_9 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7] [21U] [i_7] [i_7]))) : (var_5)))))) : (arr_7 [(unsigned short)0] [(unsigned short)20] [i_9])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        {
                            var_19 = arr_3 [i_11 + 2] [i_7];
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)17))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 782923076))))) : (((/* implicit */int) (unsigned short)30343)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        for (short i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_15 = 2; i_15 < 13; i_15 += 3) 
                {
                    for (short i_16 = 3; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_22 &= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) ((((/* implicit */_Bool) max((arr_34 [i_13] [i_14] [i_14] [i_14]), (((/* implicit */unsigned short) arr_24 [i_13] [i_14] [i_16]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_13])))))))));
                            var_23 ^= ((/* implicit */short) max((max((var_5), (((/* implicit */unsigned int) arr_9 [i_14] [i_14] [i_16 - 3] [i_16 + 1])))), (((/* implicit */unsigned int) arr_13 [2LL]))));
                            var_24 = arr_43 [i_16 + 3] [i_15 + 1] [i_15] [i_13];
                            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)248)))))))) ? (((((/* implicit */_Bool) (+(1754424972)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)58)) : (-1754424973)))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_17 [i_16 + 2] [i_14] [i_15])))) | (((((/* implicit */int) (short)-26776)) - (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 12; i_17 += 1) 
                {
                    for (unsigned int i_18 = 3; i_18 < 13; i_18 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (max((((/* implicit */long long int) ((arr_50 [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) min(((short)18070), (var_7)))))))), (arr_45 [i_13] [i_18 + 1] [i_18 + 1] [i_17 + 2] [i_14])))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((arr_15 [i_18 - 2]) ? (arr_1 [i_17]) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18057)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) arr_3 [i_17] [i_17])), (var_3))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        for (short i_21 = 0; i_21 < 14; i_21 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)2))));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((min(((!(((/* implicit */_Bool) (signed char)10)))), ((!(((/* implicit */_Bool) arr_55 [i_13] [i_14] [i_13])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (2ULL))))))) : (((/* implicit */int) arr_47 [i_13] [i_13] [i_21] [(unsigned char)12] [i_13] [i_13])))))));
                                arr_62 [i_13] [i_14] [i_19] [i_13] [i_21] &= ((/* implicit */unsigned char) min(((short)-10776), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [(short)6] [i_14] [i_19] [i_20] [11ULL]))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [i_14] [i_19] [(short)3]))) : (-4863969986062620915LL))))))));
                                arr_63 [i_13] [i_14] [i_19] [i_21] [i_21] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_21] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 14; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)7540))));
                            arr_71 [i_13] [i_14] [(unsigned short)0] [7] = (~(max((arr_50 [i_14]), (((/* implicit */unsigned int) var_2)))));
                            var_31 = ((/* implicit */unsigned short) arr_6 [i_23] [i_13] [i_14] [i_13]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        for (int i_25 = 0; i_25 < 11; i_25 += 4) 
        {
            for (long long int i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_27 = 3; i_27 < 9; i_27 += 2) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                arr_86 [i_25] [i_25] |= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_25] [i_24] [i_26] [(unsigned short)18])) ? (((/* implicit */int) arr_26 [i_24] [i_27] [i_26])) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_60 [i_24] [i_25] [i_25] [i_25] [i_28])) ? (arr_45 [(unsigned short)12] [i_25] [i_26] [i_27] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [2U] [(short)6] [2LL] [i_27] [i_28]))))))), (((/* implicit */long long int) ((arr_14 [i_24] [i_25] [i_26] [i_26]) ? (((/* implicit */int) max(((unsigned char)255), (var_1)))) : (((/* implicit */int) (signed char)-19)))))));
                                arr_87 [i_24] [2ULL] [i_26] [i_26] = ((/* implicit */unsigned char) arr_2 [i_26] [i_25]);
                                var_32 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) (short)10788)) && (((/* implicit */_Bool) (unsigned char)106))))) * (((/* implicit */int) ((((/* implicit */int) (short)7541)) == (((/* implicit */int) arr_10 [i_28] [(short)1] [i_25] [i_24]))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_6))))) && (((((/* implicit */_Bool) 2221478074U)) && (((/* implicit */_Bool) arr_17 [i_25] [i_26] [i_27])))))))));
                                var_33 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)7567)), (268435440)))))))) != (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8)))))) + (arr_70 [(unsigned short)1] [(unsigned short)1] [i_26] [i_27 + 1] [(unsigned short)1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 0; i_29 < 11; i_29 += 2) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 11; i_30 += 4) 
                        {
                            {
                                arr_93 [i_24] [7] [i_26] [3U] [i_29] [i_29] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_30] [i_29] [i_26] [i_26] [4U] [i_24])) != (var_9)))), (((arr_90 [i_24] [i_24] [i_24] [i_24] [i_24] [i_26] [i_30]) | (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_24] [i_25] [i_24]))))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_49 [i_24] [i_25] [i_26]), (((/* implicit */unsigned long long int) arr_10 [18U] [18U] [i_26] [i_29])))))))))));
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_24])) | (((/* implicit */int) arr_14 [i_24] [i_25] [i_26] [i_26]))))) ? (((((/* implicit */_Bool) arr_22 [i_24])) ? (((/* implicit */int) arr_22 [i_24])) : (((/* implicit */int) arr_14 [i_24] [(short)12] [i_26] [i_29])))) : ((+(((/* implicit */int) arr_22 [i_26]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_31 = 0; i_31 < 11; i_31 += 4) 
                    {
                        for (unsigned int i_32 = 0; i_32 < 11; i_32 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_35 [i_24] [i_26] [i_24] [i_24]), (arr_35 [i_25] [i_26] [i_26] [i_31]))))) <= (((2073489222U) | (2221478069U)))));
                                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_78 [i_25])))) <= (((((/* implicit */_Bool) (short)25090)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))))))), (max((((/* implicit */unsigned int) (short)16241)), (max((((/* implicit */unsigned int) var_1)), (4294967292U))))))))));
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_24] [i_25] [i_26] [i_31])) ? (arr_29 [(short)13] [(unsigned short)11] [i_26] [(short)13] [i_32]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_24] [i_24] [i_24] [i_24])) && (((/* implicit */_Bool) arr_88 [i_24] [i_24] [i_26] [i_32]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_33 = 2; i_33 < 9; i_33 += 3) 
                    {
                        for (int i_34 = 0; i_34 < 11; i_34 += 1) 
                        {
                            {
                                arr_105 [i_26] [i_34] [(unsigned short)0] [i_26] [i_25] [i_24] [i_26] = ((/* implicit */long long int) arr_25 [i_26]);
                                var_38 = max((max((((/* implicit */int) arr_37 [6] [6] [i_25] [i_34])), (-1754424982))), (((/* implicit */int) max((arr_9 [i_25] [i_33 + 2] [i_33 + 2] [i_25]), (arr_9 [i_25] [i_33 - 2] [i_33 - 1] [i_25])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
