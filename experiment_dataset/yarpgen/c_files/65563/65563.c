/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_11));
    var_16 = (max(var_16, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (min(((max((!var_4), (arr_2 [i_0] [i_0])))), ((var_9 / (var_14 >= var_5)))));
                            var_18 = 31;
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (~((var_8 ? (max(var_13, 15711218827762329246)) : (arr_1 [i_0]))));
                arr_12 [i_0] [i_0] = ((+(((arr_10 [i_1] [i_1] [8] [i_1]) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_7 [8] [i_0])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [4] [i_0] [i_4] [i_4] [i_5] [i_6 + 1] [i_6] = var_7;
                                var_19 = (min(var_19, (arr_9 [i_4] [i_4] [i_4] [i_1] [i_1] [0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_5;
    var_21 ^= (var_0 / var_6);
    #pragma endscop
}
