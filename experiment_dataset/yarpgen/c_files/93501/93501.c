/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_10 = (arr_1 [i_0] [17]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_11 ^= (arr_2 [i_1]);
        var_12 = (arr_5 [i_1]);

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_13 = (max(var_13, (arr_9 [i_1] [i_2] [18])));
            arr_10 [1] |= (arr_1 [i_2] [3]);
            arr_11 [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_1]);
            arr_12 [i_1 - 1] [i_1 + 1] [i_2 - 1] = (arr_0 [0]);
            arr_13 [i_2] = (arr_1 [i_2] [i_2]);
        }
        var_14 += (arr_9 [i_1] [i_1 + 1] [i_1 - 1]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_17 [i_3] = (arr_2 [i_3]);
        arr_18 [i_3] = arr_6 [i_3] [0];
    }
    var_15 = var_8;
    #pragma endscop
}
