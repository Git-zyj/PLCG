/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((((var_1 ? (var_4 / var_7) : 3855881449)) != -14996));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0])));
        var_14 = (arr_2 [i_0] [i_0 + 1]);
        arr_3 [i_0] = 16273511057728988639;
        arr_4 [17] = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (3855881449 | 7177215298497876352);
        arr_9 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? var_5 : (((arr_5 [i_1] [i_1]) & 6467610084820294919))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] = (min((arr_0 [i_2]), ((max((arr_7 [i_2 - 3]), (arr_12 [i_2 + 3]))))));
        var_15 = (arr_2 [i_2 + 1] [i_2]);
    }
    #pragma endscop
}
