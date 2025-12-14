/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_16 = ((!(arr_1 [i_0 - 2] [i_0 - 1])));
            var_17 = ((arr_5 [i_0 - 1]) ? ((124 ? var_14 : var_10)) : -0);
            var_18 = var_3;
        }
        var_19 = (((~(arr_5 [i_0 + 1]))));
        arr_6 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [12]) >> ((((var_4 | var_7) <= (!-25146))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = (((((-(arr_7 [i_2])))) < (((!var_10) ? (min((arr_5 [i_2]), 3662266210)) : (arr_4 [i_2] [i_2])))));
        arr_10 [i_2] = (((arr_5 [i_2]) >= (((((arr_2 [i_2]) <= 2536773309681633736))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_13 [10] = (!2536983771957669309);
        arr_14 [i_3] = (arr_4 [20] [23]);
    }
    var_20 = var_12;
    var_21 = ((41750 + (632701085 - var_4)));
    #pragma endscop
}
