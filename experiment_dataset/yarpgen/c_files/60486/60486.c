/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (min(-var_11, var_11));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = (((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((((arr_1 [i_0]) ? var_6 : var_5))) ? 0 : ((4294967295 ? 1 : 1)))) : (arr_1 [i_0]));
        var_23 = (~4294967276);
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 = (((arr_1 [i_1]) > (((var_1 ? 21852 : (arr_2 [i_1] [i_1]))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_1] = (arr_2 [i_1] [i_1]);
            var_25 = (var_4 ? var_1 : 59);
            arr_9 [i_1] = 1854726340;
            arr_10 [i_2] [i_1] [i_1] = ((var_16 ? -20 : var_11));
        }
        arr_11 [i_1] = max(1916, 1750049306122225799);
        var_26 = (min(((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))), (~-3528426993656833921)));
        var_27 -= ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_17))) ? (!var_2) : (((arr_1 [i_1]) * (arr_1 [i_1])))));
    }
    #pragma endscop
}
