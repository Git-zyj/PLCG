/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 ^= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_19 = (max(var_19, ((((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [0]))) != (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = arr_0 [i_1] [i_1];
        var_20 = (0 ^ -13);
        var_21 = arr_5 [4];

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_22 = (arr_0 [i_1 + 2] [16]);
            arr_9 [i_1] [i_2] = (((arr_8 [i_1 - 2] [i_2]) > (arr_8 [i_1 + 2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_3] = (((arr_13 [i_1 + 1]) && (arr_13 [i_1 - 2])));
            var_23 = (arr_10 [i_1] [i_1 - 2]);
            var_24 = ((arr_7 [i_1] [i_1 - 1] [i_1 - 1]) && (arr_7 [6] [i_1 + 2] [i_1 + 2]));
        }
    }
    var_25 |= var_10;
    var_26 = (((var_13 - var_12) ^ (var_3 >= var_15)));
    #pragma endscop
}
