/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82112
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_19);
                arr_7 [i_0] = var_7;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) var_11);
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_16 [i_4] [i_2] [i_2] [i_2 - 1] = ((/* implicit */int) var_19);
                    arr_17 [i_2] = ((/* implicit */_Bool) var_1);
                    arr_18 [i_2] [4] [i_3] [i_2] = ((/* implicit */long long int) var_3);
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 4; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_25 [i_2] = var_3;
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_19))));
                        var_23 = ((/* implicit */unsigned long long int) var_15);
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 4; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
                        {
                            var_24 += ((/* implicit */signed char) var_14);
                            arr_30 [i_2] = ((/* implicit */_Bool) var_8);
                        }
                        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_7))));
                            arr_33 [i_2] = ((/* implicit */unsigned int) var_5);
                            var_26 = ((/* implicit */unsigned char) var_10);
                            arr_34 [i_2] [i_2] [i_5] [(_Bool)1] [i_9 - 2] = ((/* implicit */int) var_9);
                        }
                        arr_35 [i_2] [i_2] = ((/* implicit */unsigned char) var_12);
                        var_27 = ((/* implicit */int) var_16);
                    }
                    arr_36 [i_2] [i_3] = ((/* implicit */unsigned int) var_16);
                    var_28 = ((/* implicit */int) var_8);
                    arr_37 [i_2] [16] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
            }
        } 
    } 
}
