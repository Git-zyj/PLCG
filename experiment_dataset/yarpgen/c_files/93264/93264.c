/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(((min((min((arr_2 [i_0]), 24645)), (max((arr_1 [i_2]), var_18))))), (arr_1 [i_2])));
                    var_20 = (arr_7 [i_0 + 1] [i_1] [i_0]);
                    var_21 = (max(var_21, (((25782 ? ((((min(var_16, var_16))) ? ((var_18 ? var_9 : 2115687843)) : ((var_1 ? 4294967287 : var_0)))) : (65527 % 1))))));
                }
            }
        }
    }
    var_22 = var_1;
    var_23 = ((((((var_4 ? 210 : var_10)) != 1)) ? (max(var_1, (max(17268, 3221225472)))) : var_15));

    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_24 = (max(var_24, (~2743524828)));
        arr_12 [i_3 - 2] [i_3 - 2] = (min((arr_10 [i_3] [i_3 - 1]), ((-8 ? (((47501 ? -15241 : -32767))) : 18446744073709551592))));
        var_25 = (max(var_25, 754587175));
        var_26 = (min(var_26, (arr_9 [i_3 - 1])));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_27 = (min((((((4 ? (arr_9 [i_4]) : -1390796098))) ? var_11 : -1661992034)), ((min((min(-1865123143, 65535)), (((!(arr_15 [i_4])))))))));
        arr_17 [3] = ((((!(arr_15 [i_4]))) ? (arr_11 [i_4]) : ((((arr_10 [i_4 + 1] [i_4]) > var_0)))));
    }
    var_28 = ((var_5 ? var_14 : (max((((255 ? 1744 : var_1))), (min(var_10, var_14))))));
    #pragma endscop
}
