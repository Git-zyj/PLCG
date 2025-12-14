/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = (arr_0 [i_0]);
        var_15 = (max((((arr_0 [i_0 - 1]) ? var_11 : (arr_0 [i_0 + 2]))), (((arr_0 [i_0 - 1]) + 42811))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [4] [i_1] = (((563286636 ? ((min(1, var_0))) : ((var_11 ? var_9 : 20712)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_1 - 1] [i_1] [22] = (((arr_5 [i_2] [i_1]) ? -121 : 121));
            arr_10 [i_1] = (((arr_0 [i_1 + 1]) ? (arr_5 [i_1] [i_1 - 2]) : (var_0 + var_12)));
        }
        var_16 = 115;
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_17 = ((-(arr_11 [i_3 + 1] [23])));
        var_18 = ((((max(-var_2, ((max(120, var_7)))))) & ((var_10 % (arr_12 [i_3 - 1] [i_3])))));
    }
    var_19 = 25644;
    var_20 = var_13;
    #pragma endscop
}
