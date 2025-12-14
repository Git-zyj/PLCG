/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6814
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
    var_18 = var_3;
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned int) arr_7 [i_2] [i_3]);
                            /* LoopSeq 3 */
                            for (long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0] [i_0] [(unsigned short)12]))));
                                arr_11 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                var_23 -= arr_10 [i_0] [i_0] [(short)1] [i_2] [(signed char)5] [8] [i_5];
                                var_24 ^= ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_3] [5LL] [i_5] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_5] [i_1] [i_0] [i_1] [i_5] [i_5] [i_5]);
                            }
                            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                            {
                                var_25 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_6]);
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) arr_10 [i_6] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) arr_19 [i_0] [i_7]);
                                var_27 -= ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_7] [i_7] [i_7] [i_7] [i_9]);
                                arr_26 [i_0] [i_1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) arr_23 [i_7] [i_7] [i_7] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
