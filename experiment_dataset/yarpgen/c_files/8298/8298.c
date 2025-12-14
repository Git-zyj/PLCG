/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (min((-var_5 >= var_3), (1 || 1)));
                var_11 = ((~((var_3 ? var_3 : var_4))));
                var_12 = (((min(((var_9 ? var_8 : var_3)), (var_1 % var_2))) & (46421 / 19114)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_0] [i_1] [i_1] [1] = ((!(((var_6 ? var_4 : var_4)))));
                                var_13 -= (min(var_4, (min(var_8, var_3))));
                                var_14 = (min((min(var_8, var_3)), (min(var_0, ((var_9 ? var_3 : var_0))))));
                                arr_12 [i_0] [2] [i_2] [12] [i_2] |= (((((var_7 ? var_3 : var_7))) ? (var_5 | var_9) : ((var_3 ? var_7 : var_5))));
                                var_15 = (min((min((min(var_8, var_3)), (min(var_5, var_7)))), (!-var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_16 = min(((var_7 ? var_3 : var_3)), var_3);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_17 = (min(var_3, var_1));
                                arr_26 [i_9] = ((min(var_7, var_9)));
                                var_18 += ((-(min(var_1, var_8))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_19 = (((((var_6 ? var_0 : var_7))) ? var_1 : (min(var_2, var_7))));
                                arr_32 [i_5] [i_10] [i_10] [i_7] [i_10] [i_11] = ((-(max(var_7, var_3))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_37 [i_12] [i_6] [i_12] [8] [i_6] = max(19088, 1);
                                arr_38 [i_12] = ((((var_4 ? var_5 : var_5)) ^ (var_0 | var_8)));
                                arr_39 [1] [i_12] [15] [i_12] [i_5] = ((var_6 ? ((min(var_9, var_0))) : (max(var_4, var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= var_7;
    #pragma endscop
}
