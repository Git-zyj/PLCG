/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86192
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((_Bool) (-(arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_2])) : (3213378828U))), (((/* implicit */unsigned int) ((int) var_8)))))) : (var_7)));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((short) 2784173243U)))));
                            var_18 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) 3U)) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5]))) : (arr_9 [i_0])))));
                                var_20 += ((unsigned char) arr_15 [i_6 - 1] [i_4] [(unsigned short)15] [i_1 - 1] [i_4]);
                                arr_20 [14] [i_1] [i_5] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_4] [i_0] [i_1] [i_4]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_13)) < (3U)))) : (((/* implicit */int) arr_1 [i_0]))));
                                var_21 = ((/* implicit */int) 9223372036854775807LL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_7])) ? (((/* implicit */unsigned int) var_13)) : (0U))) : (((((/* implicit */_Bool) var_5)) ? (arr_11 [i_7] [i_7] [i_7] [i_4]) : (((/* implicit */unsigned int) arr_0 [i_0]))))));
                        var_23 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */int) arr_26 [i_0] [i_1 - 1] [i_4] [i_8]);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (~((+(arr_8 [i_0] [i_9] [i_9])))));
                            arr_30 [i_9] [i_9] [i_4] [i_9] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_0] [i_1 + 2] [i_4] [i_8] [i_9]));
                        }
                    }
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (1263051798U))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        for (unsigned short i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) var_3);
                            arr_40 [i_13 + 2] [i_10] [i_13] = ((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-24165)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((_Bool) var_5)))));
                    arr_44 [i_10] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_9)) ? (arr_15 [i_10] [i_10] [(unsigned char)5] [i_11] [i_14]) : (((/* implicit */int) (unsigned short)23785)))) == (((/* implicit */int) ((_Bool) (unsigned char)255))))), (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)248)))) < (((/* implicit */int) ((arr_8 [i_10] [i_10] [i_14]) == (((/* implicit */int) arr_36 [i_10])))))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (3413156831U) : (((/* implicit */unsigned int) 580755216))));
                }
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_30 = ((/* implicit */signed char) var_5);
                    var_31 &= ((/* implicit */_Bool) max((var_8), (min((((/* implicit */unsigned int) arr_8 [i_11 + 2] [10U] [i_11 - 1])), (min((262144U), (((/* implicit */unsigned int) var_3))))))));
                    var_32 -= ((/* implicit */short) min((max((((/* implicit */unsigned int) (unsigned char)0)), (4294967292U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_10] [(_Bool)1] [i_10] [i_10])) / (((/* implicit */int) (!((_Bool)0)))))))));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)7)), (12872017105533062729ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_33 [i_11])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)192)), (1348413402296185052ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10]))) : (arr_23 [i_10] [i_10] [i_10] [i_11 + 2])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((8384512) - (8384510)))))) & (((unsigned long long int) (unsigned short)0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned short)58972)))) + (2147483647))) >> (((((((/* implicit */_Bool) -1304562554)) ? (((/* implicit */int) (signed char)-66)) : (var_6))) + (78)))))) > ((~(arr_23 [i_16] [i_17] [i_17] [i_18]))))))));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_19])) ? (var_7) : (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) (-(arr_2 [i_18] [i_19]))))));
                        arr_59 [(signed char)7] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_19] [i_18] [i_16])) ? (((/* implicit */int) arr_52 [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_57 [i_19])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) != (arr_27 [i_19] [i_18] [i_17] [i_16]))))))) <= (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_38 [i_16] [i_18] [i_19])) : (var_11))) | (((/* implicit */long long int) var_6))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) (unsigned short)21))), (((((/* implicit */_Bool) ((arr_46 [i_17]) ? (((/* implicit */int) (unsigned short)16256)) : (((/* implicit */int) (unsigned short)65535))))) ? (4186112U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)248))))))))))));
                                arr_66 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_16])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-75))));
    var_38 += ((/* implicit */unsigned char) (unsigned short)53237);
}
