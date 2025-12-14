/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? 2698719024 : ((+(((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
                var_14 = var_1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_15 = (arr_5 [i_2]);
        arr_8 [i_2] = var_2;
        var_16 = ((+(((!((((arr_6 [5]) / (arr_1 [i_2])))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 &= (arr_10 [6]);
        arr_11 [i_3] [i_3] = (!1);
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_14 [i_4] = (!((((arr_12 [i_4]) ? (arr_12 [i_4]) : (((arr_13 [1] [i_4 + 2]) ? 1596248277 : 2698719018))))));
        var_18 = ((((max((~var_10), (~43746)))) ? (max(2698719007, (max(12184765629203948162, 1596248277)))) : (((~(arr_13 [i_4 + 1] [i_4 - 1]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_19 |= 1596248255;
        var_20 = (max(var_20, (arr_16 [i_5])));
    }
    #pragma endscop
}
