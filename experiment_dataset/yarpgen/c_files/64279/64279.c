/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_5));
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_2 [i_0]) / (arr_2 [i_0])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_18 ^= (((arr_3 [2] [i_2]) ? (var_15 - var_2) : (arr_1 [i_1])));
                arr_8 [i_0 - 1] [i_0 - 1] [i_0] = (((((arr_1 [i_0 - 1]) + 2147483647)) << (((((arr_1 [i_0 + 2]) + 141)) - 19))));
                var_19 = (var_2 % 40459);
            }
            arr_9 [i_0] [i_0 + 2] [i_0 - 1] = (-(arr_1 [i_1]));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 = var_3;
            arr_12 [i_0] [i_0] = (var_7 ? (arr_5 [i_0 - 1] [i_0 - 3] [i_0 + 1]) : var_14);
            arr_13 [i_0] [i_0] = (((arr_10 [i_0 - 3]) ? (arr_10 [i_0 - 4]) : 23141));
            arr_14 [i_0] [i_0 - 3] [i_3] = 23141;
            arr_15 [i_3] = (42396 > -6021208905015011446);
        }
        arr_16 [i_0] [i_0 - 3] = 37;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = ((arr_3 [i_4] [i_4]) & ((max(42396, (arr_3 [i_4] [i_4])))));
        arr_19 [i_4] [i_4] |= ((23141 ? 31 : 10260343583023423445));
        arr_20 [i_4] = ((67092480 ? ((23140 >> (((arr_3 [i_4] [i_4]) + 20450)))) : (1 >> 1)));
    }
    #pragma endscop
}
