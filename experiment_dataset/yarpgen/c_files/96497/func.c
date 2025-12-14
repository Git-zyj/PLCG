/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96497
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) var_6);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (arr_4 [i_0] [i_0] [i_1]) : (((((/* implicit */int) var_15)) / (arr_4 [i_1] [i_0] [i_0])))));
            var_22 += ((/* implicit */unsigned int) arr_3 [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) arr_8 [i_0] [i_2]);
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_2])) != (((/* implicit */int) arr_7 [i_3] [i_2]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_25 -= ((/* implicit */short) arr_4 [i_0] [(short)4] [i_0]);
                    var_26 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_0])) != (((/* implicit */int) arr_13 [i_3] [i_4] [i_0] [i_0]))));
                }
                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [(signed char)5] [i_0] [i_0]);
            }
            for (unsigned short i_5 = 4; i_5 < 6; i_5 += 4) 
            {
                var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_5 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (var_6)));
                var_28 = ((/* implicit */unsigned char) arr_16 [i_5 - 4] [i_5 - 3] [i_5 - 4]);
                var_29 = ((/* implicit */unsigned short) arr_3 [i_5 - 4]);
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4166609915591412373LL)) ? (((/* implicit */int) (short)-30121)) : (((/* implicit */int) arr_7 [0LL] [i_2]))))) ? (((/* implicit */int) arr_13 [i_2] [i_5 - 4] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_5 - 3] [i_5]))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5 - 2] [i_5 - 4] [i_5 - 4] [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 4] [i_5 - 4]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_16 [i_0] [i_2] [i_5])))));
            }
            var_32 = ((/* implicit */unsigned char) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_6] [i_0] [i_0]))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_6])) <= (((/* implicit */int) arr_2 [i_0]))));
            var_34 = ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_17 [i_0] [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_0] [i_6] [i_0])));
            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))));
        }
    }
    var_36 = ((/* implicit */unsigned long long int) var_1);
}
