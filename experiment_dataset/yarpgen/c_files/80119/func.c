/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80119
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) ((1400143333U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1])))));
                    arr_9 [i_2] = ((/* implicit */long long int) (~(1400143333U)));
                }
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 426294648U)) : (((((arr_8 [7U] [(_Bool)1] [i_0]) + (9223372036854775807LL))) >> (((11412701467054854593ULL) - (11412701467054854593ULL))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) 1393306870U)) : (arr_13 [i_5]))) : (arr_13 [i_3]))))));
                    var_21 = arr_15 [i_3];
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_22 |= ((/* implicit */int) 3520628802762366239ULL);
                            var_23 = ((/* implicit */unsigned long long int) var_0);
                        }
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(971761405U)))), (((((/* implicit */_Bool) 704743690)) ? (arr_19 [i_3] [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4 - 1] [i_5] [i_6] [i_4] [i_4 - 2]))))))) ? (((/* implicit */unsigned int) var_15)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_3 + 1] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) : (arr_22 [(unsigned char)17] [i_4] [i_4 + 3] [i_4] [i_5] [i_6])))) ? (((((/* implicit */_Bool) var_0)) ? (2901660416U) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 3] [i_4 + 2])))))));
                        arr_25 [i_3] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)0))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (var_5) : (((/* implicit */int) var_13))))) ? (min((arr_13 [i_4 + 3]), (arr_13 [i_4 + 3]))) : (max((arr_13 [i_4 - 1]), (arr_13 [i_4 + 2])))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_12))))))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_4 + 1])), (((((/* implicit */_Bool) var_13)) ? (arr_19 [i_3] [i_6] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_6]))))))) : (((/* implicit */unsigned long long int) var_15))));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (arr_14 [i_3 + 3] [i_3 - 3] [i_5]))))) : (arr_26 [i_4 + 1] [i_3] [i_4 + 1] [i_3] [i_3 + 1] [i_5]))))))));
                        var_28 = ((/* implicit */short) 4278725523U);
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                        var_31 |= ((/* implicit */unsigned char) (-(arr_27 [i_5] [i_4] [i_5] [i_5] [i_3])));
                        var_32 = ((int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [3LL] [13U]))));
                        arr_30 [i_3] [i_4] = ((((/* implicit */_Bool) arr_13 [i_3 - 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)));
                    }
                    for (int i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        arr_34 [i_3] [i_3] [i_5] [i_10 - 1] = min((max(((+(var_2))), (((/* implicit */int) (short)29107)))), (((((/* implicit */_Bool) -1020976866)) ? (arr_20 [i_10 + 3] [i_3 + 2] [i_5] [i_10 + 3]) : (((/* implicit */int) var_7)))));
                        arr_35 [i_5] [i_3] [i_5] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11872))) : (((((/* implicit */_Bool) 1380855926)) ? ((+(3868672652U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29107)))))));
                        var_33 &= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) arr_23 [i_3 - 2] [i_4] [i_5] [i_3] [i_3] [i_5] [i_4 + 1])), (var_11)))) / (((arr_10 [i_3 - 2] [i_10 + 1]) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_5] [i_10 + 2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                {
                    arr_44 [i_11] [i_12] [i_13] [i_11 + 1] = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */short) max((((((/* implicit */_Bool) 3868672647U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (426294644U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (arr_19 [i_13] [(short)4] [i_13] [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_37 [i_15])) : (((/* implicit */int) var_8))))) - (min((2901660425U), (((/* implicit */unsigned int) var_14)))))))));
                                var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_11 + 1])) ? (((/* implicit */unsigned int) ((int) arr_23 [i_11 + 1] [i_12] [i_13] [i_14] [i_14] [i_14] [i_14]))) : (var_1)))) ? ((+(max((((/* implicit */int) arr_21 [i_13] [i_12] [i_13] [i_14] [i_15] [6U])), (arr_20 [i_12] [i_12] [i_14] [(short)11]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18183))) : (arr_31 [(_Bool)1] [i_13] [i_14]))))))));
                                arr_51 [i_11] = ((/* implicit */short) max((16803123000994446638ULL), (((/* implicit */unsigned long long int) (unsigned char)20))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */_Bool) arr_50 [i_11] [i_12] [i_12] [i_13] [i_11 + 1] [i_11 + 1] [i_13]);
                    var_37 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((2894823944U), (((/* implicit */unsigned int) ((1643621072715104993ULL) < (((/* implicit */unsigned long long int) 1249127259)))))))), (arr_19 [i_12] [i_12] [i_12] [i_13])));
                }
            } 
        } 
        arr_52 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_16))) ? (((((/* implicit */_Bool) 1994662921)) ? (((/* implicit */int) (short)12372)) : (-1249127259))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [i_11] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11 + 1] [i_11]))))));
    }
}
