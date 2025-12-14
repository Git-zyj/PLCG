/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 = (~var_6);
        var_18 = -var_9;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (max(var_11, ((((max(var_11, var_6))) ? ((var_13 << (((arr_6 [i_1]) - 4569501791727813553)))) : ((var_6 ? var_2 : -84))))));
        arr_8 [1] = (arr_0 [i_1]);
        arr_9 [i_1] = (max((((var_14 ? (arr_1 [i_1]) : var_10))), -84));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_20 = (max((min(6207047684600740842, var_11)), ((max(var_10, (var_12 + var_14))))));
        arr_12 [i_2] = ((-(max((arr_7 [i_2]), var_8))));
        var_21 = (((arr_3 [i_2]) ? (arr_10 [i_2] [i_2]) : (((~65535) ? ((~(arr_6 [i_2]))) : var_13))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_22 = ((~(((!(arr_14 [i_2] [i_3]))))));
            arr_15 [i_2] [i_2] = (((arr_1 [i_2]) ? (arr_1 [i_3]) : var_10));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_19 [i_4] = (((arr_6 [i_2]) < (arr_3 [i_4])));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_23 = var_16;
                var_24 = var_6;
            }
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                var_25 = (arr_14 [i_6 - 1] [i_6]);
                arr_25 [i_2] [3] [i_4] [i_2] = arr_14 [i_6 + 1] [i_6];
            }
        }
    }
    var_26 = var_4;
    #pragma endscop
}
