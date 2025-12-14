/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((max(((min(var_7, var_0)), 1617183263)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [8] [i_1] = var_4;
                    var_11 = (arr_1 [i_1 + 2] [i_1]);
                    var_12 = (max(3503, (max(25349, 25349))));
                }
            }
        }
    }
    var_13 = (~var_0);
    var_14 = ((((min(var_3, (((var_0 ? 25349 : var_7)))))) + 4092249655146229117));
    var_15 = (max(var_2, (((var_6 + var_1) ? -66 : var_6))));
    #pragma endscop
}
