/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74388
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(576460752303423487LL)));
        var_20 = ((/* implicit */short) max((((/* implicit */signed char) var_16)), (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = 0LL;
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((unsigned char) ((var_0) - (1086997665U)));
        var_21 = ((/* implicit */unsigned int) ((arr_5 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
        var_22 = ((/* implicit */unsigned char) arr_0 [4LL] [i_1]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_9 [(_Bool)1])) + (53)))))));
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_7 [(unsigned char)6] [(unsigned char)6]))));
            var_25 = ((/* implicit */_Bool) arr_0 [i_2] [i_1]);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_15 [i_2] [i_2] [i_3] [2LL] = ((((arr_10 [i_1] [i_1] [i_1]) + (2147483647))) >> (((((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (3274035883837673503LL))));
                var_26 = arr_6 [i_1];
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    arr_18 [i_3] [i_3] [i_3] [9] [i_2] [i_3] = ((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_4 - 1]);
                    var_27 = ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 + 3] [i_2] [i_3] [i_2]))) <= (arr_2 [i_1]));
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_28 = ((/* implicit */int) ((((long long int) -5LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                }
                arr_21 [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_1]);
                arr_22 [i_2] [i_2] [4] &= ((/* implicit */long long int) ((arr_0 [(short)6] [i_2]) - (((/* implicit */unsigned int) ((int) var_7)))));
            }
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) arr_10 [i_1] [(unsigned short)4] [i_6]);
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((long long int) arr_0 [i_7] [i_7]));
                arr_29 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) arr_10 [i_1] [i_6] [i_7]);
            }
        }
    }
    var_32 = var_3;
}
