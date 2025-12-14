/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83746
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) var_4);
        arr_3 [i_0] = ((((((/* implicit */_Bool) -8969699322368537443LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22775)) ? (((/* implicit */int) (unsigned short)42802)) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) (short)-32763);
                            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) max(((short)22782), (arr_14 [i_4] [i_4] [i_1] [i_2] [i_1])))))) : (((/* implicit */int) (short)22775))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_2]))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1374045754) | (((/* implicit */int) (unsigned short)31544))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_1] [i_1]))))), (7009211995365965942LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1 + 2])) ? (2134699530U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7018)) ? (-1374045748) : (arr_9 [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_6 + 4] [i_6 + 3] [i_6 + 1])) ? (arr_10 [i_1 - 4] [i_1 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((+(var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_2] [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2408)))))) ? (2160267773U) : (((/* implicit */unsigned int) (~(-1790512358))))))));
                        var_20 = var_6;
                        var_21 = max((((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_1 - 4])) : (((/* implicit */int) arr_6 [i_2 + 2] [i_1 - 1])))), ((~(((((/* implicit */_Bool) var_12)) ? (-1374045744) : (arr_5 [i_6]))))));
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned int) var_5);
                        var_23 = ((/* implicit */long long int) arr_11 [i_2 + 2] [i_2 + 2]);
                        var_24 = 6529528132660588396LL;
                    }
                    arr_25 [i_5] [i_1] [i_1] = ((/* implicit */long long int) 4294967295U);
                }
                for (unsigned int i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_27 [i_1] [i_2] [i_2] [i_1])), (-2147483639)));
                    var_26 = ((/* implicit */unsigned short) (short)28482);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) var_8))))));
    var_28 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 13; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            {
                arr_34 [i_9] [i_9] = ((/* implicit */unsigned int) -861417069);
                arr_35 [i_9] [i_9] [i_9] |= ((/* implicit */short) 2338347441U);
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_31 [i_9] [i_10] [i_12])) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9]))))), (((/* implicit */unsigned int) arr_37 [i_12] [i_12] [i_11] [i_9]))))) ? (((/* implicit */long long int) arr_38 [i_11] [i_10] [i_9])) : (((((/* implicit */_Bool) (-(3260169183U)))) ? (((((/* implicit */_Bool) arr_33 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10]))) : (arr_40 [i_11] [i_10]))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)22782)))))))));
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-22767))))) ? (var_1) : (3260169185U)))) ? (((/* implicit */long long int) (-((-(2160267767U)))))) : (((((/* implicit */_Bool) ((arr_37 [i_10] [i_10] [i_10] [i_9]) >> (((-2062184369) + (2062184392)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_39 [i_9] [i_9] [i_9] [i_9])))) : (var_12)))));
                    }
                    var_32 += ((/* implicit */unsigned int) arr_41 [i_9] [i_10] [i_10] [i_11]);
                }
                for (int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_9] [i_10] [i_10])) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) (unsigned short)6))))) - (arr_0 [i_10]))))))));
                    var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) ^ (((((/* implicit */_Bool) arr_0 [i_9])) ? (arr_32 [i_9] [i_9] [i_9]) : (1832755457U)))))) ? (max((arr_0 [i_9]), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36934)))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        arr_48 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((unsigned int) arr_37 [i_9] [i_9] [i_9 - 1] [i_14]));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) (~(arr_41 [i_10] [i_10] [i_9 + 1] [i_9]))))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) 4261412864U))));
                        }
                        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
                        {
                            arr_56 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_53 [i_13] [i_9] [i_9])) ? (max((((/* implicit */long long int) 3260169195U)), (arr_51 [i_9] [i_9] [i_13] [i_14] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 7325428782062928203LL)))))), (((/* implicit */long long int) arr_32 [i_9] [i_9] [i_9]))));
                            arr_57 [i_10] [i_10] = arr_42 [i_9] [i_9] [i_16];
                            arr_58 [i_16] [i_14] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) (~(arr_28 [i_9] [i_9])));
                        }
                        arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) arr_44 [i_9] [i_10] [i_10] [i_9] [i_10])) ? (var_0) : (((/* implicit */int) (short)-22771)))) << (((1207650556U) - (1207650556U)))))));
                        var_37 = ((/* implicit */unsigned short) (-2147483647 - 1));
                        var_38 = ((/* implicit */short) -7325428782062928204LL);
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_39 += arr_47 [i_9] [i_9];
                        var_40 ^= ((/* implicit */int) arr_60 [i_9] [i_9] [i_10] [i_10] [i_13] [i_17]);
                    }
                    var_41 = ((/* implicit */int) var_12);
                }
                for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    var_42 = ((/* implicit */unsigned short) 3913844390U);
                    var_43 = ((unsigned int) (+(-2147483641)));
                }
            }
        } 
    } 
}
