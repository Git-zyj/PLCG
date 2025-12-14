/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2 + 2] [i_1] = (--1);
                                arr_14 [9] [i_1] [i_1] = ((~(arr_9 [i_1 - 2] [i_1 + 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(((((min(var_13, var_6)) == var_10))), (((-51 - -713065061) >> (((arr_9 [i_0 - 1] [2]) - 10392805504787386279)))))))));
                                var_16 = (arr_11 [i_6] [i_6 + 1] [i_5] [i_5] [i_2 + 1] [i_1 - 1] [i_0]);
                                var_17 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((var_14 ? var_0 : var_10))) && var_10)));
    var_19 = var_6;
    var_20 = (((((var_7 ? (var_9 && var_2) : 14795140373807899322))) <= var_8));
    var_21 = -51;
    #pragma endscop
}
