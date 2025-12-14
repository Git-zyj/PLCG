/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_10 = var_9;
                        arr_11 [i_0 + 3] [i_1 + 2] [i_0] [i_3 - 2] = var_0;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_11 = (max(((min(24333, 1))), (arr_0 [i_0])));
                            var_12 = (-217 / var_6);
                            var_13 += var_2;
                            var_14 = (max(var_14, var_9));
                            arr_14 [i_0] [i_1 + 2] [11] [9] [i_0] = (arr_0 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_17 [i_0] = 6038648291112494117;
                            arr_18 [i_2] [i_2] [i_2] [i_3] [i_5] &= (arr_6 [i_0] [i_0] [i_3]);
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_15 |= var_8;
                            var_16 = (max(var_16, (!var_4)));
                        }
                    }
                }
            }
        }
        var_17 = var_4;
        var_18 += 5379788423932565454;
        arr_22 [i_0] = var_8;
        var_19 = (6038648291112494128 >= 747722922);
    }
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_20 = var_4;
        var_21 = -1329503579;
        var_22 ^= var_1;
    }
    var_23 = min(-124, 2146622918);
    #pragma endscop
}
