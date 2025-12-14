/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67094
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
    var_13 = ((/* implicit */unsigned char) var_9);
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((var_11) == (((/* implicit */long long int) min((((/* implicit */unsigned int) -464096628)), (2421689059U)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [(signed char)2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)39)))), (arr_1 [i_0] [i_0 - 4])))) : (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (4294967295U) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
        var_15 = ((/* implicit */int) 2637539114980621372ULL);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 3] [i_0])))) ? (min((((((/* implicit */int) arr_0 [i_0] [0ULL])) - (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [4U] [i_0]))))) : ((((~(arr_1 [i_0 - 3] [i_0]))) | (arr_1 [i_0] [1ULL])))));
        var_16 = ((/* implicit */unsigned int) (unsigned char)232);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((arr_1 [i_1] [i_1 - 1]) == (arr_1 [i_1 - 2] [i_1 - 4])));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_15 [(unsigned short)0] [i_2] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_6 [0U] [i_2])) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)204)) ? (arr_10 [i_1] [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_4]))))))));
                        arr_18 [i_1] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 3])) ? (arr_11 [i_1 - 2]) : (arr_11 [i_1 - 2])));
                        arr_19 [i_1 - 1] [i_1] [i_3] [(unsigned short)10] = arr_12 [i_1] [i_1] [i_1];
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 - 4]);
                        var_19 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (arr_1 [3LL] [4ULL]))))));
                        arr_24 [i_1 - 4] [i_1] [(short)0] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_3])))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) -1782624931)) ? (((/* implicit */int) arr_12 [i_1 - 3] [i_2] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1] [i_1 - 4]))))));
                        arr_25 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_20 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_5]) && (arr_9 [i_1] [i_1] [i_1 + 1])))) - (arr_1 [i_1] [i_1])));
                    }
                    var_20 = ((/* implicit */unsigned char) (short)-22267);
                }
            } 
        } 
        arr_26 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_14 [3LL] [i_1]))))) != (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))));
    }
    var_22 = ((/* implicit */long long int) var_1);
}
