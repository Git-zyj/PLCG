/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 >= ((((6807832987442166039 / 1123937499) == -2043448671)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((var_0 & (arr_3 [i_0])));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_1] = (~-1123937501);
            var_11 = (((((arr_0 [i_0]) + 62)) >> (-1123937500 + 1123937504)));
            var_12 ^= (arr_1 [i_1 - 1] [i_1 + 1]);
            var_13 = ((2885390233 ? 1736392059 : var_2));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_13 [i_0] [11] = ((var_9 ? 88 : var_2));
            var_14 = ((27 + (arr_1 [i_0] [i_0])));
            arr_14 [i_0] = (arr_10 [i_0] [i_0]);
            arr_15 [i_0] [i_0] [i_0] = ((-(arr_0 [i_2])));
        }
        var_15 = 14509;
    }
    #pragma endscop
}
