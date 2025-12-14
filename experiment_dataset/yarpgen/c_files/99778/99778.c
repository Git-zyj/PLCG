/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = var_10;
        arr_3 [i_0] = var_9;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] = -var_12;
            var_20 = (-(arr_1 [i_0]));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = (arr_8 [i_2] [i_2]);
        arr_10 [i_2] = ((((var_0 + (arr_9 [i_2]))) * ((var_2 ? 0 : (arr_9 [i_2])))));
        var_22 = (min(var_22, ((((max(var_6, (var_0 >= var_1))) ? (((arr_8 [i_2] [i_2]) | ((~(arr_9 [i_2]))))) : var_18)))));
        arr_11 [i_2] = min(((((max(var_7, (arr_9 [i_2])))) ? (max(var_14, (arr_8 [i_2] [i_2]))) : 0)), ((max(((0 ? (arr_8 [i_2] [i_2]) : var_1)), 19))));
    }
    var_23 = ((var_1 ? (((((var_0 ? var_11 : var_15))) ? ((-19 ? var_6 : var_10)) : ((max(127, var_5))))) : -120));
    var_24 = var_1;
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
