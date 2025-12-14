/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7578
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15569))) | (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))))), (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) / ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(-9223372036854775805LL)))))) + (3248667710U)));
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775804LL))));
            var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) 3248667719U)))))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) 8070450532247928832LL));
        }
    }
    for (int i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        arr_13 [i_2 + 1] [i_2] = ((/* implicit */signed char) (+((+(9223372036854775807LL)))));
        var_13 = ((/* implicit */unsigned char) ((unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */long long int) 362204706)), (arr_11 [i_2]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [i_3] [0ULL])) / (((/* implicit */int) arr_3 [i_3] [i_4] [12])))))));
                arr_18 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) (unsigned short)60560)) || (((/* implicit */_Bool) (unsigned short)58388))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    arr_21 [i_3] [i_4] = ((/* implicit */unsigned short) 4187665428U);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_3] [i_4] [10] [i_6] [i_7] &= ((/* implicit */signed char) ((_Bool) arr_16 [i_5 + 1] [i_4]));
                                arr_28 [(unsigned short)7] [(unsigned short)7] [i_4] = ((/* implicit */unsigned char) (((+(14882094786951915845ULL))) + (((/* implicit */unsigned long long int) ((int) 1006632960)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
                                var_16 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                                var_17 = ((/* implicit */unsigned short) ((int) ((-296475019) / (((/* implicit */int) (_Bool)1)))));
                                arr_36 [i_4] [i_5 + 1] [i_5] = ((/* implicit */short) ((arr_17 [i_4] [i_4] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_9] [i_9] [i_9])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_42 [i_4] [i_11] |= ((/* implicit */unsigned short) ((((((long long int) var_8)) + (9223372036854775807LL))) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775757LL))) + (95LL))) - (44LL)))));
                            var_18 |= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_10] [i_11])) ? (5250984840690699985LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_10] [i_5] [i_5] [i_5 + 1] [i_5] [i_4]))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((arr_35 [i_3] [i_3] [i_3] [i_3] [i_4] [5LL] [i_12]) ? (((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3]))));
                        var_21 ^= ((/* implicit */unsigned char) ((arr_10 [i_5 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5 - 1] [i_3] [(unsigned short)2] [i_12] [i_4])))));
                        arr_45 [i_3] [i_4] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_3] [i_3])))) | (3058996079503885330ULL)));
                        arr_46 [i_3] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 17356223106507635373ULL))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!((!((_Bool)1))))))));
                        arr_51 [i_3] [i_4] [i_3] [i_3] = ((arr_38 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) << (((arr_40 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_3] [i_3]) - (342452369))));
                        var_23 *= ((/* implicit */unsigned char) (short)12087);
                    }
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1046299570U)) ? (((/* implicit */int) arr_35 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_35 [i_5 - 1] [i_5] [(_Bool)0] [i_5] [i_5] [i_5] [i_5 - 1]))));
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_4])) || (((/* implicit */_Bool) 1229132600)))) || (((/* implicit */_Bool) ((arr_26 [i_3] [i_4] [i_5] [i_14] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1090520967201916229ULL))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_41 [i_3] [(_Bool)1] [i_5 - 1] [i_14] [i_14] [i_14] [i_15]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12087))))) : ((~(3284396008U))))))));
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29787)) >> (((/* implicit */int) arr_56 [i_3] [i_4] [i_5] [i_3] [i_15] [i_5 - 1] [i_14]))))) | (arr_15 [i_5 + 1] [i_14])));
                        }
                        arr_57 [i_3] [6U] [i_4] [i_4] [i_4] [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(15647960U)))) ^ (((arr_50 [i_4] [i_5] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27677)))))));
                        var_28 ^= ((/* implicit */int) ((arr_10 [i_14]) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)27405)) / (var_10))))));
                    }
                }
                arr_58 [(unsigned char)16] &= ((((/* implicit */_Bool) max((((var_3) * (((/* implicit */int) arr_26 [i_3] [(unsigned short)11] [i_4] [i_3] [i_3])))), (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)251))))))) ? (max((min((-9), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) 11ULL))))))) : (((/* implicit */int) (_Bool)0)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_8);
}
