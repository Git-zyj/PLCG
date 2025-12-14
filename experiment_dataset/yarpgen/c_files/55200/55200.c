/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -48;
        arr_3 [12] [i_0] = -67;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (var_8 << var_3);
        var_16 = (min(var_16, ((((arr_6 [i_1]) ? (((var_13 ? -67 : (arr_6 [i_1])))) : (~2121345195203907190))))));
        arr_7 [i_1] = (arr_6 [7]);
        arr_8 [i_1] = (((~(var_4 * 56614936))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = var_9;
        var_17 = (arr_9 [i_2]);
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 21;i_3 += 1)
    {
        var_18 = (max(var_18, var_8));
        var_19 = (((var_11 ? 127 : var_5)));
    }
    var_20 = var_11;
    var_21 = 14096444117775949096;
    var_22 = var_3;
    #pragma endscop
}
