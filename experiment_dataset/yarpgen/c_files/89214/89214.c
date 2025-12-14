/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1388141441190407583 ? var_0 : 0);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((arr_0 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0])))) ? ((var_6 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0]))) < var_0));
        arr_3 [i_0] [i_0 - 1] = (arr_1 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] = ((((((((1223935744 ? var_3 : 0))) ? -0 : 285019675043131970))) ? ((((var_4 < (arr_6 [19]))))) : (((~var_11) ? (((-11 ? 2373 : var_7))) : 775177830))));
            arr_8 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2))) ? ((((arr_6 [i_0 - 1]) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1])))) : ((var_7 ? (arr_4 [i_0 - 1] [i_0 - 1]) : 16786878830733891674))));
            arr_9 [i_0] [i_0] [i_0] = var_5;
        }
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_13 = (~(arr_0 [i_2]));
                    var_14 = -2374;
                    var_15 = var_6;
                    var_16 = ((1223935738 ? 18 : (arr_11 [i_2])));
                }
            }
        }
        var_17 = -0;
        arr_17 [i_2] = 2251799813685247;
    }
    #pragma endscop
}
