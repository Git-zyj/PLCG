/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72356
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_16 |= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            /* LoopNest 3 */
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_17 ^= arr_7 [i_1] [i_2 + 1] [11ULL] [i_4];
                            arr_14 [i_4] [(unsigned short)19] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_4] [i_1 + 1] [i_1 - 2])), (var_7)))) * (((((/* implicit */_Bool) 1399521681U)) ? ((+(18446744073709551609ULL))) : (922942529448498217ULL)))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))) * ((-(((unsigned long long int) arr_17 [i_0] [i_5]))))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) var_12);
                            arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) arr_5 [i_0]);
                        }
                    } 
                } 
            } 
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_6)))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_0] [i_0])))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_20 -= ((/* implicit */long long int) arr_13 [i_9] [i_9] [i_9]);
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
                    {
                        arr_38 [i_9] [7U] [(unsigned short)3] [i_11] [i_10] = ((/* implicit */signed char) (+((~(2ULL)))));
                        var_21 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12] [i_10] [i_10]))) & (var_11)))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1311035291U)) && (((/* implicit */_Bool) 5ULL)))))));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (arr_4 [i_11] [i_11] [4U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) arr_31 [i_9]))))) : (((/* implicit */int) arr_7 [i_9] [0LL] [i_11] [i_12 + 1]))));
                    }
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_11]))))), (max((arr_20 [i_9] [i_9]), (((/* implicit */unsigned int) var_1))))))), (var_6))))));
                    arr_39 [i_11] [i_11] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(var_13)))), (min((((/* implicit */unsigned long long int) var_0)), (arr_25 [i_11] [i_9])))));
                    var_25 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_10] [i_10] [i_10] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551603ULL))))));
                    var_26 ^= ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_33 [i_9] [9ULL])) >= (((/* implicit */int) arr_31 [i_9])))) ? ((-(arr_10 [i_10] [i_11] [i_10] [i_10] [i_10] [(unsigned short)20]))) : (((/* implicit */long long int) (-(arr_13 [i_10] [i_10] [i_10])))))), (((/* implicit */long long int) (~(((/* implicit */int) ((var_11) == (arr_17 [i_9] [i_10])))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned long long int) var_6)))));
}
