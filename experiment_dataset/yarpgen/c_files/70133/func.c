/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70133
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0])) < (((/* implicit */int) ((short) arr_0 [i_0] [i_1]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_1] [i_1]));
                        arr_12 [(short)12] [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */short) arr_6 [i_0] [i_1] [4U]);
                        arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_3 + 1] [i_2]);
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_3] [i_3]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_15 += ((/* implicit */unsigned char) arr_3 [i_2 - 3] [i_2 - 3]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_21 [15U] [i_2] [i_2 - 2] [i_2 - 2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_2])) + (arr_3 [i_1] [i_2 - 2])));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((signed char) arr_7 [i_2] [i_1] [i_2 - 3])))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [12ULL] [i_1] [12LL])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)12])) : (((/* implicit */int) arr_6 [i_0] [i_1] [(short)22])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((arr_5 [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_1] [i_6] [i_2 - 2] [1ULL] [i_6] [i_1] [i_1])))) : (arr_20 [i_4] [i_2 - 2] [i_0] [i_0] [i_6] [i_6] [i_6]))))));
                            arr_25 [i_2] [i_1] [i_2] [(_Bool)1] [i_4] [i_6] = arr_5 [i_2] [i_2 - 3];
                            var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_2 - 2] [20U])) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_2 - 3] [i_4] [i_6])))));
                            arr_26 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) -1LL))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])))));
                    var_21 = ((signed char) arr_2 [i_2 - 1] [i_0] [i_0]);
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 3) 
                    {
                        for (signed char i_9 = 4; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (arr_6 [i_1] [i_8] [i_9])));
                                var_23 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_32 [i_9] [i_7])))) - (arr_30 [19LL] [i_9] [i_9 + 2] [i_8 + 1] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_7] [18LL] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_19 [i_1] [i_1] [i_7] [i_10] [i_7] [(_Bool)1] [i_1])))) ? (((/* implicit */int) ((_Bool) arr_19 [i_0] [i_0] [i_1] [i_7] [i_7] [i_7] [i_10]))) : (((/* implicit */int) arr_5 [i_7] [i_0]))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_7] [i_7] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_29 [i_0] [i_1] [i_1])))) + (((((/* implicit */_Bool) arr_18 [i_0] [12ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [8U] [i_10]))) : (arr_9 [(signed char)4]))))) : (((((/* implicit */_Bool) arr_35 [i_0] [(short)1] [(short)14] [(short)1] [i_7] [i_10])) ? (arr_20 [i_0] [i_1] [i_7] [i_10] [i_10] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_7])) ? (arr_19 [i_0] [i_1] [i_1] [i_7] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_10]))))))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10] [i_7])) ? (arr_32 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_10] [i_0]))))) ? (((/* implicit */unsigned int) arr_1 [i_10] [i_1])) : (((unsigned int) 0LL))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) arr_24 [i_0] [i_1] [i_7] [i_7] [i_10]))) % (((((/* implicit */_Bool) arr_35 [i_0] [5U] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [16U]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10] [i_7] [i_1])))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)-17230)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-13257)))) : (((/* implicit */int) (unsigned short)36112)))));
                }
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((long long int) arr_35 [i_0] [i_0] [i_0] [i_11 - 1] [i_11] [i_11])))) ? (((/* implicit */int) arr_34 [i_11 + 1] [(short)20])) : (((/* implicit */int) arr_15 [4U] [4U]))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_16 [i_11] [i_1] [(short)2] [i_0] [i_11 - 1] [i_11 + 1])) ? (arr_16 [i_0] [i_1] [i_1] [(unsigned short)14] [i_0] [i_11 + 1]) : (arr_16 [i_0] [i_1] [i_11 + 1] [i_11] [i_11] [i_11 - 1])))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    var_31 += ((/* implicit */unsigned char) arr_6 [i_0] [i_12 + 1] [(signed char)10]);
                    var_32 = ((/* implicit */unsigned int) ((arr_32 [i_12 + 1] [i_12 + 1]) & (arr_9 [i_12])));
                }
                for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_49 [i_0] [i_0] [i_0] [(_Bool)1] [1U] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_41 [i_0] [i_13] [i_14]);
                                var_33 = ((/* implicit */int) ((_Bool) ((((long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */long long int) arr_0 [i_14] [i_0])))));
                            }
                        } 
                    } 
                    arr_50 [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_24 [i_0] [i_1] [i_1] [i_13] [i_1]))) ? (arr_31 [i_0] [i_13] [i_1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1] [i_13])))));
                    var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_13] [i_13] [i_13])) ? (arr_18 [i_0] [i_13] [i_13]) : (arr_18 [i_13] [i_13] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_10 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_5 [i_1] [i_1])))))))))));
                    var_35 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0] [i_0] [(unsigned char)0] [i_0] [(unsigned char)0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_13]))))) == (((/* implicit */int) arr_33 [i_0] [7U] [(_Bool)1] [i_13] [23LL])))));
                    arr_51 [i_0] [i_0] = ((/* implicit */_Bool) ((((((arr_9 [i_13]) % (((/* implicit */long long int) ((/* implicit */int) arr_47 [5LL] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_48 [i_1] [i_1] [i_0] [i_1] [i_1] [20LL] [i_1])) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13257))) == (arr_3 [i_0] [i_0])))) : (((/* implicit */int) (signed char)-31))))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_2))));
}
