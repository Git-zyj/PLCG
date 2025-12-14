/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95557
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_8 [2ULL] [i_1]))))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [8ULL] [i_0] [i_1]))) : (var_8))))) : (((/* implicit */long long int) 2010349266)))))));
                            arr_10 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_3 [i_1] [i_2] [i_1]);
                            arr_11 [i_1] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */int) ((((var_1) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_8 [i_0] [i_2])))) - (16771)))))) : (((/* implicit */int) ((((var_1) + (9223372036854775807LL))) >> (((((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_8 [i_0] [i_2])))) - (16771))) + (7985))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                arr_21 [4U] [i_1] [i_4] = var_4;
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (3789753294U)));
                                var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)165)), (arr_6 [i_1] [i_4] [2] [i_6]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                arr_25 [i_0] [(short)15] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) arr_23 [i_0] [i_1] [i_4]);
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_4] [i_5] [i_7] [i_1])) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_4] [i_5] [i_7])) : (((/* implicit */int) arr_24 [i_0] [9] [i_4] [i_5] [i_7] [i_0]))));
                            }
                            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                            {
                                arr_28 [i_0] [6U] [(signed char)7] [6U] [(short)4] = (-(arr_19 [i_0] [i_0] [i_4] [i_5] [i_8]));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned char)64))));
                            }
                            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) ((arr_12 [i_0]) << (((var_4) - (499879187U)))))) ? ((+(arr_3 [i_0] [i_1] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)14] [i_1]))))) <= (((/* implicit */unsigned long long int) arr_26 [i_9] [(short)16] [i_1] [i_4] [i_4] [i_1] [i_0])))))));
                                var_16 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0]);
                                arr_31 [i_9] [i_1] [i_4] [13LL] [i_9] [i_5] [0ULL] = ((/* implicit */unsigned char) var_2);
                                arr_32 [i_0] [i_0] [i_9] [i_0] [i_5] [i_5] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (arr_19 [i_0] [i_1] [i_4] [i_5] [i_9]) : ((-(((/* implicit */int) arr_27 [i_0] [i_1] [i_4] [i_5] [i_5]))))));
                            }
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_20 [i_5] [i_4] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((int) arr_29 [i_0] [i_0]))) + (((0U) / (((/* implicit */unsigned int) arr_7 [i_1]))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-26662), (((/* implicit */short) arr_15 [(short)13] [(short)13] [i_1]))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_16 [i_0] [i_1] [i_1]))) || (((/* implicit */_Bool) (unsigned char)47)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (unsigned char)36);
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 14; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (short i_12 = 2; i_12 < 15; i_12 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */short) (unsigned char)96);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 3; i_14 < 15; i_14 += 4) 
                        {
                            var_21 |= ((/* implicit */signed char) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            arr_49 [i_10 + 2] [i_11] [i_12 + 1] [(short)5] [i_14] [i_10 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_10 + 1])) : (arr_17 [i_10 + 2] [i_11] [i_12] [i_13]))))));
                        }
                        arr_50 [i_10 + 2] [i_11] [10U] [i_13] [6LL] [8LL] = var_4;
                        arr_51 [i_10 - 1] [i_11] [8] [i_13] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) (~((~(var_8))))))));
                        arr_52 [i_12 - 2] = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_19 [i_13 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]))));
                    }
                    /* vectorizable */
                    for (short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_17 [6U] [i_10 + 2] [i_12 + 1] [i_15 + 2]))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)96)) && (((/* implicit */_Bool) 3839212864U)))))) : (var_1)));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        arr_58 [i_10] [i_10] [i_12] [i_16] = ((/* implicit */unsigned int) var_2);
                        var_24 = ((/* implicit */unsigned int) -1);
                        var_25 ^= ((/* implicit */long long int) ((short) ((unsigned int) min((var_1), (((/* implicit */long long int) var_9))))));
                        var_26 ^= ((/* implicit */unsigned char) min((min((arr_56 [12] [i_12] [i_16]), (((((/* implicit */_Bool) arr_26 [(signed char)7] [(signed char)7] [i_11] [(signed char)7] [i_12 + 1] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_10 + 1] [i_11] [i_12] [i_16] [i_12] [i_16] [i_11]))) : (arr_12 [11LL]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_10] [i_11] [i_12] [i_16])) <= (((/* implicit */int) var_9)))) && (((/* implicit */_Bool) arr_13 [i_12 + 1] [i_12 - 1] [i_10 + 1])))))));
                    }
                    arr_59 [i_12] [i_10] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17414)) ? (3247223253U) : (((/* implicit */unsigned int) 2147483647))));
                }
            } 
        } 
    } 
}
