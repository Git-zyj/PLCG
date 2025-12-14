/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 1455197026;
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = var_6;
        arr_5 [6] |= ((((min(((var_4 ? (arr_0 [i_0]) : (arr_1 [2]))), (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((1455197021 ? (arr_2 [3]) : (arr_1 [i_0])))));
        var_20 = (min((((((min((arr_2 [i_0]), var_15))) ? (arr_2 [i_0]) : (arr_2 [i_0])))), var_15));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_1] = (arr_6 [i_1] [9]);
            arr_13 [i_1] [i_1] [2] |= (arr_10 [i_1] [i_2 - 1]);
        }
        arr_14 [i_1] [i_1] = var_14;
        arr_15 [i_1] [i_1] = ((((~(arr_8 [i_1]))) <= (!var_8)));
    }
    var_21 = var_1;
    #pragma endscop
}
