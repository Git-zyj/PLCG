/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_12 -= (max(((var_4 ? ((var_0 ? var_11 : var_2)) : (((var_10 ? var_6 : var_10))))), ((min(var_2, var_1)))));
                arr_5 [i_1] [i_1] = (max(((var_6 ? var_3 : var_11)), ((max(var_3, var_10)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_13 = (min(var_13, ((((min(var_8, var_0)))))));
                    var_14 = (max(var_14, var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_15 ^= ((((max(((max(var_6, var_5))), var_11))) ? var_0 : ((((var_11 ? var_9 : var_6))))));
                                var_16 ^= var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, var_7));

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_18 = (max(var_18, var_1));
        arr_22 [i_7] = var_10;
    }
    var_19 = -var_9;
    #pragma endscop
}
