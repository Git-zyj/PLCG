/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((max((8191 && var_1), (max(54874, var_8)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_13 = (max(((var_1 ? (arr_2 [i_0]) : var_0)), var_11));
                    var_14 ^= ((((((arr_7 [i_0] [i_2] [i_2] [i_0]) * ((var_0 * (arr_0 [i_2])))))) && ((min(-1550343708, var_2)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = ((~(arr_0 [i_1])));
                                var_16 += (max(0, (arr_6 [i_0] [i_1])));
                                var_17 = 2517381918060416369;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 *= var_9;
                                arr_21 [i_0] [i_0] [9] [i_0] [i_6] [3] [i_0] = var_3;
                            }
                        }
                    }
                    var_19 = (max(var_19, 0));
                    arr_22 [i_0] [i_5] [i_5] = (max(((0 ? (arr_3 [i_1]) : var_6)), -var_11));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_20 ^= (((((-127 - 1) ? var_8 : 1)) >> ((((-5665525383458064650 ? -5740 : var_4)) - 4294961556))));
                    arr_26 [i_0] [i_0] [i_8] = ((-(((min(64, (arr_2 [5]))) * var_8))));
                }
                arr_27 [i_0] [i_0] = var_9;
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_32 [12] [12] [12] [i_0] [i_0] [i_0] = ((!(arr_24 [i_0] [i_9 - 1] [i_10])));
                            var_22 = (max(var_9, (arr_17 [2] [13] [i_10])));
                            arr_33 [i_0] [i_0] [14] [i_9] [i_10] = (max((max(var_10, var_5)), var_8));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
