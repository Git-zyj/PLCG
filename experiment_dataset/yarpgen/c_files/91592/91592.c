/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = (var_9 || -79);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [2] [i_3] [i_3] [i_4] = (arr_13 [i_0] [i_1] [i_3]);
                                arr_16 [1] [i_3] [i_3 + 2] [i_3] [i_3] = (((min(var_4, (arr_6 [1] [i_1 - 2]))) ? (min(var_0, 1)) : (min((arr_10 [9] [i_3 - 1] [i_3] [i_3 - 2]), 35252))));
                                var_17 = ((~((((0 ? 1 : var_6)) >> (-1 + 11)))));
                                var_18 = (min(var_18, (((arr_1 [i_0]) ? (~var_15) : (arr_9 [i_1 + 1] [i_1 - 2] [i_3 - 3] [i_3 - 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_25 [i_6] [i_6] = 35269;
                arr_26 [i_5] [i_6] [3] = (((((var_11 ? (arr_22 [i_6]) : (arr_22 [i_6])))) ? (~var_14) : (~1)));
                arr_27 [i_6] [i_6] [i_6] = ((((1 ? 35 : var_3))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = ((var_10 && (arr_24 [i_5] [i_7] [i_8])));
                            arr_34 [i_6] = ((((((var_8 ? (min(-468444200, 87)) : -43)) + 2147483647)) >> (((max(1, var_8)) - 526705420))));
                            var_20 = (max(var_20, -700284386));
                        }
                    }
                }
            }
        }
    }
    var_21 = max(var_14, var_9);
    var_22 = (max(var_22, -var_6));
    #pragma endscop
}
