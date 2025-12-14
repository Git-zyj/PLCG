/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96496
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_13)))) / (((/* implicit */int) var_12)))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) || (((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
    var_17 = ((((/* implicit */int) (unsigned short)64797)) + (((/* implicit */int) (unsigned short)755)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [(unsigned char)12] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_18 += ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)64806)) > (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_4 [i_0] [23LL])) : (arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [(unsigned short)2])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_6 [i_4]) : (arr_0 [i_0] [i_1])))));
                            arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4] [i_1])) ? (((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])) << (((((arr_2 [i_2]) + (1069212497))) - (12))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [5U] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_6 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4])))))) ? (((arr_0 [5U] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((arr_16 [9LL] [i_0] [i_1] [i_2] [i_1] [i_1] [i_1]) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4])))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1396634621U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)752)))))) || (((arr_5 [16ULL]) <= (arr_2 [i_0])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (unsigned short i_7 = 4; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_21 [i_7 + 4] [i_7]) + (2147483647))) << (((((arr_2 [i_6]) + (1069212483))) - (12)))))) ? (((((/* implicit */unsigned int) arr_22 [i_6])) & (arr_6 [i_5]))) : (arr_6 [i_6])));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_6 - 1] [i_8] [(unsigned short)6]))) - (arr_29 [i_5] [i_5] [i_7 - 4] [i_8] [(_Bool)1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [0] [0] [i_8] [0])) != (arr_2 [i_8])))))));
                                arr_34 [i_5] [i_5] [i_6] [i_5] [i_8] [i_6] [11U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) & (arr_8 [i_5] [i_6 - 1] [i_7])))) ? (((arr_29 [i_5] [4LL] [i_7] [i_8] [i_9]) & (((/* implicit */unsigned long long int) arr_22 [i_6])))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5] [i_5] [i_7] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_8] [i_9]))) : (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7])))));
                                arr_35 [i_5] [i_6] [i_5] [i_7] [i_7 - 1] [i_8] [i_9] = ((/* implicit */unsigned int) ((arr_2 [i_7]) != (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_6] [i_7] [i_6] [i_9])) != (((/* implicit */int) arr_11 [i_7] [i_9])))))));
                                arr_36 [i_5] [14ULL] [14ULL] [14ULL] [i_8] [i_6] = ((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5]))) % (arr_23 [i_5] [i_5]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5] [i_5])) << (((/* implicit */int) arr_33 [i_5] [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_5])))))));
        arr_37 [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */int) arr_10 [i_5] [(_Bool)1] [i_5] [(unsigned char)4] [i_5])) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [(_Bool)1]))))) < (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5]))) : (arr_0 [i_5] [i_5])))));
        var_23 = ((((/* implicit */int) ((arr_15 [i_5] [i_5] [(short)21] [i_5] [i_5] [i_5] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])))))) < (((/* implicit */int) ((((/* implicit */int) arr_13 [(unsigned char)0] [i_5] [i_5] [i_5] [i_5] [17ULL])) == (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [(_Bool)1]))))));
    }
}
