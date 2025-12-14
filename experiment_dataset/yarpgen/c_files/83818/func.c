/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83818
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
    var_18 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (103523861U))), (((/* implicit */unsigned int) var_4)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4191443448U)) ? (var_0) : (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */int) ((_Bool) var_15))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned int) var_14);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)56274)) ? (-1523194431) : (-1523194431))), (((/* implicit */int) ((arr_7 [i_0] [i_1 + 1]) < (((/* implicit */int) var_3))))))))));
                        var_20 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [(unsigned short)24]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2])))))) : (((unsigned long long int) arr_12 [(unsigned short)14] [(unsigned short)14])))));
                        var_21 = ((/* implicit */unsigned char) var_14);
                        var_22 = ((/* implicit */signed char) ((unsigned char) ((arr_1 [i_0 + 1] [i_2 - 2]) - (arr_1 [i_0 + 1] [i_0 - 1]))));
                        var_23 &= ((/* implicit */short) arr_3 [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_16 [6ULL] [i_1] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (arr_11 [(unsigned char)15] [i_1] [i_2] [i_1])));
                        arr_17 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] |= var_12;
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_1] [i_1] [(signed char)18] = (i_1 % 2 == zero) ? (((arr_6 [i_1]) << (((arr_6 [i_1]) - (3861417271U))))) : (((arr_6 [i_1]) << (((((arr_6 [i_1]) - (3861417271U))) - (1461358004U)))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_24 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2004658146104669277ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2004658146104669277ULL))) * (((/* implicit */unsigned long long int) 1523194430))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4191443434U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_0] [14ULL] [(signed char)9]))) : ((((_Bool)1) ? (2004658146104669265ULL) : (((/* implicit */unsigned long long int) 103523846U))))));
                            arr_25 [i_1] [i_5] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) var_6);
                            arr_26 [i_0] [i_1] [18ULL] [i_5] [i_6] [i_1] = ((arr_24 [(short)3] [i_1] [i_1] [i_5] [i_5 - 1] [i_5]) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_1] [i_5] [i_5 - 1] [i_2])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_5] [i_5 - 1] [(short)19])));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_0] [(signed char)13] [(_Bool)1] = ((/* implicit */unsigned int) arr_19 [(unsigned char)1] [i_1]);
                            var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_5] [i_5] [21ULL])) || (((/* implicit */_Bool) arr_9 [i_1 + 1] [i_5] [16LL] [i_5]))));
                            arr_30 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)8528)) ? (4191443435U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            arr_31 [i_0] [i_0] [i_1] [i_1] [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [4])) * (((/* implicit */int) var_9))));
                        }
                        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [10] [i_1] [i_2 + 2]))));
                        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1 + 1] [i_1] [i_1] [i_5 - 1] [i_5] [i_5]))) <= (arr_9 [i_0] [i_0] [(unsigned char)16] [(unsigned char)5]));
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) var_8);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((4191443442U) < (((/* implicit */unsigned int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1]))));
                            var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_7 [i_8] [i_9])), (((unsigned int) arr_7 [i_0] [i_0 - 1]))));
                        }
                        for (short i_10 = 4; i_10 < 23; i_10 += 1) 
                        {
                            arr_39 [i_10] [i_10] [i_10] [i_10] [i_1] = ((/* implicit */_Bool) var_4);
                            arr_40 [i_1] [(unsigned short)17] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((arr_37 [i_2 - 2] [i_2 - 2] [i_1]) ? (((/* implicit */int) arr_37 [i_2 + 1] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_2 - 3] [i_1] [i_8] [9ULL]))))) ? (arr_21 [i_1] [i_1] [2U] [i_1] [2U] [i_1] [0U]) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_2] [19U] [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((arr_34 [19LL]), (((/* implicit */long long int) arr_7 [i_0] [(_Bool)1]))))))));
                            var_32 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 1523194430)), (103523846U)));
                            arr_41 [i_10] [i_10] [i_10] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [i_2] [i_2] [i_2] [i_10]);
                        }
                        var_33 += ((/* implicit */short) (+(min((2262443177U), (((/* implicit */unsigned int) (unsigned short)12))))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_35 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [(unsigned short)20] [i_0])))))) * (((((/* implicit */long long int) arr_6 [i_1])) / ((-9223372036854775807LL - 1LL)))))));
                    }
                }
            } 
        } 
    } 
}
