/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 = (~var_11);
                        var_13 = (min(((((min(var_11, (arr_7 [i_0])))) ? (max(var_2, (arr_0 [i_0]))) : (arr_11 [14] [i_1] [i_2 - 1] [i_0] [3]))), ((((max(var_6, var_1))) ? (arr_6 [i_0] [i_0] [i_0]) : (~var_8)))));
                    }
                }
            }
        }
        arr_13 [i_0] = var_10;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    {
                        var_14 = (max(var_14, (((min((arr_12 [i_6] [i_5] [i_6 - 3] [i_6 + 2]), var_9))))));
                        var_15 ^= (max(((var_3 ? (((arr_14 [i_5] [7]) ? (arr_23 [i_6] [i_6] [i_6] [i_5]) : var_0)) : ((var_1 ? 3296341620 : (arr_11 [i_0] [i_4] [i_5] [i_5] [i_6 + 1]))))), ((((((-(arr_2 [7] [1] [i_5])))) ? ((var_0 ? var_3 : var_6)) : (min(12, var_4)))))));
                        arr_24 [i_0] [i_0] [i_5] [i_6] = (~var_2);
                    }
                }
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
