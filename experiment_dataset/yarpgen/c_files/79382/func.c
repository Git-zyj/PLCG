/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79382
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) arr_4 [i_2 + 1] [i_2 + 1] [i_2]);
                var_13 = ((/* implicit */unsigned char) arr_6 [(unsigned char)0] [i_2 + 2] [i_2 + 2]);
            }
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                var_14 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_3 + 1]);
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3 + 3] [i_0] [i_4] = arr_12 [i_0] [(signed char)8] [i_1] [i_1] [i_3] [i_4];
                    var_15 = ((/* implicit */int) arr_9 [i_1] [i_0] [i_3 + 1]);
                    arr_14 [i_0] [i_0] [i_4] &= ((/* implicit */unsigned int) arr_3 [i_3 - 1]);
                    var_16 = ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                }
                var_17 = ((/* implicit */signed char) arr_3 [i_0]);
            }
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                arr_18 [i_0] = ((/* implicit */int) arr_9 [i_5 - 1] [i_0] [i_5 + 3]);
                arr_19 [i_0] = ((/* implicit */short) arr_1 [i_0]);
            }
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]);
            var_18 += ((/* implicit */unsigned long long int) arr_9 [i_0] [10ULL] [10ULL]);
        }
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            var_19 = arr_6 [i_0] [i_0] [i_6 + 2];
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_5 [i_6 + 2]))));
            arr_23 [i_0] = arr_4 [i_6 + 2] [i_6 + 1] [i_6 - 1];
            var_21 -= ((/* implicit */signed char) arr_21 [i_0] [i_6]);
        }
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_22 = arr_16 [i_0] [i_7] [i_0];
            arr_26 [i_0] = arr_21 [i_0] [i_7];
            var_23 += arr_24 [i_7];
            var_24 = ((/* implicit */short) arr_2 [i_0]);
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_25 = arr_15 [i_0];
            var_26 |= ((/* implicit */unsigned char) arr_0 [i_8]);
        }
    }
    for (unsigned int i_9 = 2; i_9 < 11; i_9 += 4) 
    {
        var_27 = ((/* implicit */int) arr_31 [i_9 - 2] [i_9 - 2]);
        var_28 = ((/* implicit */unsigned long long int) arr_31 [i_9] [i_9 + 1]);
        var_29 = ((/* implicit */unsigned long long int) arr_32 [i_9 + 1]);
    }
    var_30 = var_6;
    var_31 += var_0;
}
