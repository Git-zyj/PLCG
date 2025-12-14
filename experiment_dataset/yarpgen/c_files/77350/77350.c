/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (((((var_0 ? ((max(var_2, var_10))) : -105))) ? ((max(((max(var_8, var_10))), var_11))) : var_6));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [8]) ? ((max((max(249, 1)), (arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) % ((min((arr_0 [i_0]), 249)))))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (max(54, -2))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = var_10;
        var_14 = ((~((min((arr_7 [i_1]), var_3)))));
    }
    #pragma endscop
}
