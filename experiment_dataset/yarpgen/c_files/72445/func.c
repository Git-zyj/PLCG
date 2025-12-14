/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72445
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
    var_10 = ((/* implicit */int) (-(((max((((/* implicit */unsigned long long int) (unsigned short)50284)), (var_1))) / (var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) > (max((((/* implicit */unsigned long long int) 172816977)), (arr_3 [(unsigned char)14] [i_2 + 3] [i_2 - 1])))));
                        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((max((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2 + 3] [i_1])), (var_2))) > (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_3]), (var_6)))))))), (min((((/* implicit */int) ((3374716569615847369ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 1] [i_2] [i_1])))))), (arr_4 [i_0 + 1])))));
                        var_13 *= ((/* implicit */unsigned long long int) -6903857245762872362LL);
                        var_14 = ((/* implicit */unsigned char) (-((-(((((/* implicit */unsigned long long int) 4421650176194858959LL)) / (15072027504093704255ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) > (((/* implicit */int) ((short) var_4)))));
                        arr_14 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)2);
                        arr_15 [i_1] [i_0 + 2] [i_1 + 2] [14LL] [14LL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((15072027504093704252ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28))))))));
                        var_15 = ((/* implicit */unsigned long long int) ((arr_9 [i_2 - 2] [2ULL] [i_0 + 3] [i_2 - 2]) / (arr_9 [i_2 - 3] [i_2 - 3] [i_0 - 1] [i_4])));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) (short)1023)))))) > (((/* implicit */int) arr_8 [i_1] [i_2 - 1]))));
                    }
                    arr_16 [9] [9] [i_1] = ((/* implicit */short) (+(var_3)));
                    arr_17 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((min((max((((/* implicit */long long int) arr_0 [i_0 + 2] [i_0])), (var_0))), (arr_12 [i_0] [i_1] [i_2 - 1] [i_1]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1 + 1] [i_1] [i_2 - 3])))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_1 + 2] [i_1] [i_0])) / (arr_18 [i_7 - 1] [i_0] [i_0 + 2] [i_0])));
                                var_18 = ((/* implicit */unsigned short) (short)17722);
                            }
                        } 
                    } 
                    arr_27 [(unsigned short)16] [i_1 + 2] [i_5] &= ((/* implicit */_Bool) -6016836721289911397LL);
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)13135)) <= (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 2]))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_32 [i_0] [i_0 + 2] [i_1] [i_8] = ((/* implicit */long long int) arr_6 [i_0 + 2]);
                    var_19 = ((/* implicit */long long int) ((17199995572232908603ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24)))));
                }
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) var_6);
                                var_21 &= ((/* implicit */long long int) arr_23 [i_1 + 1] [i_1 + 1]);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */signed char) (~(((((arr_39 [i_0 + 1] [i_0 + 1] [13] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_9]) ^ (((/* implicit */int) var_4)))) & (((((/* implicit */int) arr_36 [i_0] [i_0] [i_1 - 1] [i_9] [i_9] [i_9])) & (((/* implicit */int) (unsigned short)49))))))));
                }
                for (long long int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                {
                    arr_45 [i_1] [i_1] [i_12] = ((/* implicit */unsigned long long int) max(((+(6903857245762872362LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_11 [i_1] [i_1 - 1] [i_1] [i_1 + 2])), ((unsigned short)37))))));
                    arr_46 [(unsigned short)24] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_30 [23] [i_1 + 1] [i_1 + 2] [i_1 - 1])))));
                    arr_47 [i_1] [i_1] [i_12] [i_0] = ((/* implicit */signed char) arr_0 [20ULL] [i_12]);
                }
                arr_48 [i_1] = ((/* implicit */unsigned int) -658426937);
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)6] [(short)4] [i_1] [(unsigned short)6]))) * (((arr_37 [(signed char)8] [i_1 + 2] [6ULL] [6ULL] [i_1 + 1] [i_1 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-1014)))))));
            }
        } 
    } 
}
