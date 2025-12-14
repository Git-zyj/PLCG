/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_1;
    var_14 &= var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_1 [i_0])));
        var_16 = (max(var_16, (arr_0 [i_0])));
        arr_2 [i_0] = (((4806346427455490371 ^ 1154442907) ? (!4499824350407401633) : 16));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = ((var_9 ? (arr_1 [i_1]) : ((16808688919341656432 ? (arr_3 [i_1]) : (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_3] = ((arr_13 [i_3] [i_4]) ? (arr_8 [i_1] [i_4] [i_3]) : var_10);
                        arr_16 [2] [i_2] [i_3] [2] [i_4] = (3378 | 31930);
                        arr_17 [i_2] [i_2] [i_3] [i_3] = ((arr_14 [i_1] [i_2] [i_2] [i_3] [i_3]) ? (arr_1 [19]) : (arr_9 [i_1] [i_2] [i_1] [i_4]));
                        var_18 = (max(var_18, 11110342019055578432));
                    }
                    arr_18 [i_3] [i_2] = ((139 ? -var_5 : 3758096384));
                }
            }
        }
    }
    #pragma endscop
}
