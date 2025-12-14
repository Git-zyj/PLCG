/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (arr_0 [i_0]);
        var_21 = (arr_1 [i_0]);
        var_22 &= (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        var_23 = (arr_0 [i_1]);
        arr_6 [i_1] = (arr_3 [i_1] [i_1]);
        var_24 = (arr_3 [i_1] [i_1]);
        arr_7 [i_1] = (arr_3 [i_1 + 1] [i_1]);
    }
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {
        arr_10 [i_2] [4] = (arr_4 [i_2]);

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_22 [i_2] [i_2] [i_3] [i_2] [i_2] &= (arr_8 [i_4 + 1] [i_4 + 1]);
                        var_25 = (arr_3 [i_2] [i_5]);
                        var_26 = (arr_8 [i_3 - 3] [i_4]);
                    }
                }
            }
            var_27 -= (arr_2 [i_3]);
            var_28 = (arr_0 [i_2]);
        }
        arr_23 [i_2 + 2] [i_2] = (arr_8 [7] [i_2]);
        var_29 = (arr_15 [i_2]);
        var_30 = (arr_16 [i_2] [i_2 - 4] [i_2 + 2] [i_2]);
    }
    var_31 = var_7;
    #pragma endscop
}
