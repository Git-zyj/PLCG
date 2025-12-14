/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1 + 1] [i_0] [i_0] = ((var_5 % (var_4 - 3)));
            arr_6 [2] [i_0] [i_0] = var_11;
            arr_7 [i_0] [i_0] [i_1] = -1;
        }
        var_13 = ((-((1 ? ((((!(arr_1 [i_0]))))) : (((arr_0 [i_0]) - -1))))));
        var_14 = (arr_4 [i_0] [i_0] [i_0]);
        var_15 = (1 != 1);
        arr_8 [i_0] [i_0] = -var_6;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((-(~var_7)));
        var_17 = (-((-(arr_11 [i_2] [i_2]))));
        var_18 = (var_1 < (arr_9 [i_2] [i_2]));
        var_19 = ((min((arr_11 [i_2] [i_2]), 0)));
    }
    var_20 = ((-(max(var_6, ((var_3 ? var_5 : var_10))))));
    var_21 = ((0 || ((((!var_7) - (!2147483647))))));
    #pragma endscop
}
