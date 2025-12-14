/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7641
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_20 |= ((/* implicit */unsigned short) arr_4 [i_3]);
                        var_21 ^= ((/* implicit */unsigned int) arr_8 [i_2]);
                        arr_10 [i_0] [i_1 - 1] [i_3] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_3]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_4] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_0 - 3]);
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) arr_15 [i_2] [i_2] [i_2] [i_4] [i_1 - 1]);
                            arr_17 [i_0] [i_1 - 1] [i_2 + 3] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) arr_8 [i_2]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
                            var_24 = ((/* implicit */unsigned short) arr_18 [i_4] [i_4]);
                            arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_4] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0 - 2] [i_4]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 1] [i_2] [i_4] [i_0] [i_1]);
                            var_26 = ((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [(_Bool)1] [i_1] [(unsigned short)19] [i_4] [(unsigned short)19]);
                            var_27 = ((/* implicit */_Bool) arr_9 [i_2] [i_2]);
                            var_28 = ((/* implicit */_Bool) arr_16 [i_4] [i_1 - 1] [i_2] [i_4] [i_7] [i_0] [i_1 - 1]);
                        }
                        arr_23 [i_0] = ((/* implicit */unsigned int) arr_8 [i_2]);
                        arr_24 [i_0] [i_4] = ((/* implicit */unsigned int) arr_18 [i_1] [i_1]);
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_29 *= ((/* implicit */short) arr_26 [i_1 - 1]);
                        arr_28 [i_0] [i_1 - 1] [i_2 - 2] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                        arr_29 [i_8] [i_1 - 1] [i_2 - 2] [i_1 - 1] [i_0 - 3] = ((/* implicit */signed char) arr_3 [i_1]);
                    }
                    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */int) arr_11 [i_9 - 1] [i_2 + 1] [i_2 + 1] [i_0 - 2] [i_0 - 2] [i_0]);
                        var_31 = ((/* implicit */signed char) arr_19 [i_9] [i_2] [i_1] [(_Bool)1] [i_1 - 1] [i_0]);
                        var_32 ^= ((/* implicit */long long int) arr_1 [i_1]);
                        var_33 = arr_3 [i_0];
                    }
                    arr_32 [i_1] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0 - 2] [i_1] [i_1] [i_0] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 2; i_10 < 11; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            {
                arr_37 [i_11] [i_11] = ((/* implicit */long long int) arr_5 [i_10] [i_11] [i_10]);
                var_34 = ((/* implicit */unsigned short) arr_31 [i_10] [i_10] [i_10] [i_10] [i_10] [i_11]);
                var_35 ^= ((/* implicit */unsigned short) arr_34 [i_10]);
                var_36 = ((/* implicit */unsigned short) arr_1 [i_11]);
            }
        } 
    } 
}
