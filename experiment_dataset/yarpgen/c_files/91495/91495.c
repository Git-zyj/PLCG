/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~-6165);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_18 |= (arr_1 [i_0] [i_1]);
            var_19 = var_15;
            var_20 += (((!255) ? (arr_1 [i_1] [i_1]) : (((arr_1 [i_0] [i_1]) ? var_11 : (3187793187 != 5428013748137681040)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_0] = (((var_13 ? (arr_4 [i_0]) : (arr_5 [i_0]))));
            var_21 = ((62013 ? 1 : 62013));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_22 = (arr_4 [i_0]);
            var_23 = 62019;
        }
        arr_10 [i_0] [i_0] = (((62013 * (arr_6 [i_0] [i_0] [i_0]))));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        var_24 = ((32767 == 53789) || ((((arr_12 [i_4 - 2] [i_4]) ? (arr_12 [i_4 + 3] [i_4]) : var_13))));
        arr_13 [i_4] = (((((-(0 < -274091274)))) ? -54 : (var_7 - 14)));
        var_25 = (min(((((((arr_11 [i_4]) ? var_9 : var_12))) ? var_14 : 59)), ((~(arr_11 [i_4])))));
    }
    #pragma endscop
}
