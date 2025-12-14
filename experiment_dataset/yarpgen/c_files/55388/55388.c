/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 5558;
    var_20 += (((max(var_3, -5538))) ? ((var_9 ? var_6 : var_11)) : ((min(((-16384 ? var_12 : var_5)), -5582))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = ((((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_11))) ? ((((arr_1 [i_0 - 2]) ? var_4 : 10433))) : (((arr_0 [i_0] [i_0]) ? 2245692716 : (arr_0 [i_0] [i_0])))));
        var_22 |= (arr_0 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0] = 5551;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_23 = 10452;

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_24 = (~1306455017);
                            var_25 += (((arr_15 [i_1] [i_1 + 2]) ? var_13 : var_9));
                            var_26 = (min(var_26, (((((max((~var_11), 10445))) ? (((arr_6 [i_2] [i_2]) ? (arr_2 [i_1] [i_2]) : var_2)) : ((((arr_11 [i_5] [i_3 - 1]) == (!6)))))))));
                            var_27 = ((((min((min(var_13, 14317)), 31506))) ? ((14294 ? ((5540 ? var_18 : (arr_6 [i_1] [i_2 - 1]))) : 5558)) : ((max(((1984 ? 16602 : 1306455017)), (min((arr_4 [i_1] [i_1]), -30491)))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_28 = (((arr_5 [i_7]) ? (arr_13 [11] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]) : ((((max((arr_9 [i_1] [i_2]), 10461))) ? ((((arr_20 [i_1] [i_6] [i_7] [i_7]) / (arr_17 [15] [i_7] [i_2] [i_1] [i_2] [i_1])))) : (arr_4 [i_1] [i_1])))));
                            arr_26 [i_8] [i_7] [i_7] [i_7] [i_1 + 2] = (((((((max((arr_17 [i_6] [i_6] [i_6] [i_6] [i_1] [i_1]), (arr_7 [i_8])))) ? 941298298196744313 : -5804))) ? (arr_22 [i_7] [0] [4] [i_7] [i_7] [i_8 + 1]) : (arr_0 [i_8] [i_6])));
                        }
                    }
                }
            }
            arr_27 [i_1 - 2] [i_2] = (arr_25 [i_1] [i_1] [i_1] [i_1 - 2]);
        }
        var_29 += ((var_14 ? -14294 : -18095));
        var_30 = ((((max(((var_0 ? var_6 : -10520)), (2057031124 <= var_12)))) ? (max(var_1, ((~(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))))) : (((arr_13 [i_1] [i_1 - 1] [i_1] [0] [i_1] [i_1 + 1]) - ((min(-10444, -23455)))))));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_31 = ((((max(((10433 ? -1984 : var_11)), 10443))) ? (arr_16 [i_9] [i_9]) : ((((((arr_21 [i_9] [i_9 - 2] [4] [i_9 - 1] [i_9] [4]) ? var_0 : var_5))) ? ((var_2 ? var_9 : var_2)) : 14294))));
        var_32 |= (arr_6 [i_9] [7]);
        var_33 = (((!2431189250) ? (min((arr_29 [i_9]), (-9223372036854775807 - 1))) : var_6));
    }
    #pragma endscop
}
