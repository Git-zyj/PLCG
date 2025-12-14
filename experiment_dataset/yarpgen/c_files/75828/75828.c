/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = ((((((((var_4 ? 3168382535 : 162))) ? (arr_5 [i_0] [i_1] [15]) : var_1))) ? (-18134 && 64) : (95 % 1)));
                var_11 = var_5;
                var_12 = (max(var_8, (max((var_3 >> var_5), var_9))));
                arr_6 [i_0] = var_0;
                arr_7 [i_0] = 3525477485;
            }
        }
    }
    var_13 = (min((24656 ^ var_9), (((min(120, 738308594))))));
    var_14 = var_1;

    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_2 - 1] [i_2 - 1]);
        var_16 = (max(var_16, (((18446744073709551592 ? var_6 : 1)))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [1] = ((((var_1 / ((var_1 ? var_7 : -7894600056761093089)))) < 16));
        var_17 = ((min(-140504480, 1057354872)));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = (max((min((arr_4 [i_4 + 1] [i_4 - 1]), (arr_4 [i_4 - 1] [i_4 + 1]))), 9716));
        arr_17 [i_4 - 1] = 49643;
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_18 = (max(((-177670641 ? 16652629273974114927 : (arr_0 [i_5 - 2] [i_5 - 2]))), -349));
        var_19 = (max(var_19, (arr_1 [i_5 - 1])));
    }
    #pragma endscop
}
