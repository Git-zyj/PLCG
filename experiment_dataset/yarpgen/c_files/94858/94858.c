/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [20] [i_0] [i_2] [i_0] [i_0] &= (((32767 == var_1) ? 1703600823 : ((~(arr_1 [i_4])))));
                                var_20 = ((((~(arr_6 [i_2] [i_1] [i_4 + 1] [i_3]))) ^ (-2712093158258340132 ^ -2712093158258340135)));
                                var_21 = (((((arr_12 [i_4 - 1] [21] [i_2] [11] [17] [13]) - 0)) - 0));
                                arr_14 [i_3] [i_1] [17] [i_1] [i_0] = ((((((((~(arr_7 [i_0] [i_1])))) ? (arr_12 [12] [7] [i_1] [1] [i_3] [i_4]) : ((var_9 ? 1 : -19))))) ? (var_7 >> var_0) : ((((((arr_10 [i_4] [i_1] [i_1] [i_0]) ? var_7 : var_2))) ? (max(var_5, var_3)) : 2712093158258340112))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_0] [22] [i_1] [7] [i_0] = 2723;
                        arr_19 [i_1] = var_9;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            {
                var_22 = ((((((((48 ? var_10 : (arr_20 [i_6])))) ? 14 : 0))) ? (((((max(1, 1)))) % var_4)) : 14208547427185277024));
                arr_24 [11] = (243 ^ 3014822767647255522);
            }
        }
    }
    var_23 = (max(var_23, -1));
    var_24 = (((!var_8) ? (((!var_2) ? var_1 : var_2)) : -14208547427185277033));
    #pragma endscop
}
