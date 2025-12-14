/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8333
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(var_12))))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (-(arr_3 [i_0] [i_1] [i_1])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_21 = ((/* implicit */_Bool) (signed char)-106);
                    var_22 ^= ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]);
                }
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_23 = arr_12 [i_0] [i_0];
                        var_24 = arr_0 [i_3];
                    }
                    for (int i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        arr_16 [i_3] [i_1] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                        arr_17 [i_0] [i_0] [i_0] [i_1] [i_3] [i_5 + 2] = ((/* implicit */int) arr_1 [i_5 - 1]);
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
                        var_25 = ((/* implicit */unsigned int) 4413065547457293398LL);
                    }
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        var_26 -= ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3]);
                        var_27 = ((/* implicit */int) (signed char)0);
                        var_28 = ((/* implicit */long long int) (unsigned short)58067);
                        var_29 = ((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_6 - 1]);
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 24; i_7 += 2) 
                        {
                            var_30 |= var_16;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-(arr_23 [i_6 + 1] [i_6] [i_0] [i_6] [i_6 - 1])))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            arr_27 [i_6 + 1] [i_6] [i_6] [i_0] [i_6 + 1] = ((/* implicit */unsigned int) (~((~(arr_9 [i_0] [i_6 + 1] [i_0])))));
                            var_31 = ((/* implicit */signed char) var_17);
                            var_32 = arr_23 [i_1] [i_1] [i_3] [i_1] [i_1];
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_3] [i_6] [i_6 - 1] [i_9]))));
                            arr_30 [i_0] [i_1] [i_3] [i_6 - 1] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_3]))));
                            var_34 ^= ((/* implicit */long long int) arr_6 [i_9] [i_1]);
                            arr_31 [i_0] [i_0] [i_3] [i_6 - 1] [i_9] = ((/* implicit */long long int) (signed char)86);
                        }
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_35 = ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */short) 4216781126U);
                        var_38 = ((/* implicit */unsigned char) arr_29 [i_1] [i_3]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_0] [i_12] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_12]);
                        var_39 *= ((/* implicit */unsigned short) var_0);
                    }
                }
            }
        } 
    } 
}
