/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = (((!34993) | -78903025));
        arr_2 [i_0 - 1] = (((8649174250731450329 - 43057) + var_8));
        var_15 = (0 + 43050);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_16 -= (!(((var_13 ? (!var_2) : var_13))));
        var_17 = (((((!(!1)))) >= (arr_4 [i_1] [i_1])));
        var_18 = (((arr_1 [i_1 - 1]) | var_2));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, (((!(arr_9 [i_3 + 1] [i_3 + 1]))))));
                    var_20 = var_8;
                    arr_16 [i_4] [i_4] [i_2] = var_7;
                }
            }
        }
        var_21 += (((arr_14 [i_2 - 1]) ? (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : 3895066463664002786));
    }
    var_22 = var_2;
    var_23 = (min(((var_2 ? var_4 : ((var_7 ? var_8 : 0)))), ((min(var_4, -var_4)))));
    #pragma endscop
}
