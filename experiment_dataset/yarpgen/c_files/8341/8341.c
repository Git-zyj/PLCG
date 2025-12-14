/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [1] [i_0] = var_1;
        arr_4 [i_0] = ((~(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] [18] = ((((((arr_1 [i_1]) ? (arr_0 [i_0]) : var_11))) ? (((arr_9 [i_0] [i_1]) ? (arr_8 [i_0] [i_0]) : (arr_12 [i_0] [i_2] [i_1] [i_1] [i_0]))) : ((((var_0 == (arr_0 [i_0])))))));
                        arr_14 [i_3] [i_1] [i_2] [i_3] [i_0] = (127 & 6060310532724180558);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_17 = (12386433540985371057 && (arr_16 [9] [i_5]));
                arr_21 [i_4] = (arr_15 [i_4] [i_4]);
                var_18 = (min((((arr_16 [i_4] [i_4 + 1]) ? var_11 : 6060310532724180558)), ((((arr_16 [i_4 + 1] [i_4 - 1]) ? (arr_16 [i_4] [i_4 - 1]) : var_7)))));
                arr_22 [i_5] [i_4] = var_11;
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    var_19 = ((var_16 ? var_14 : ((var_2 ? (arr_8 [i_6] [i_6]) : 6060310532724180559))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_20 = (~var_4);
                                arr_38 [i_6] [i_10] = 6060310532724180554;
                                var_21 = var_11;
                                var_22 = ((!(arr_5 [i_6] [i_8 + 2])));
                            }
                        }
                    }
                }
            }
        }
        arr_39 [i_6] = (!var_15);
        arr_40 [i_6] = 12386433540985371057;
    }
    var_23 = (((var_6 && var_14) ? var_2 : (min((-453850766701983532 + var_15), (max(var_15, 12386433540985371057))))));
    #pragma endscop
}
