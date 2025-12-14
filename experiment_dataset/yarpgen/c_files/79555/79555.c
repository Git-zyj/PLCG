/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 |= (arr_2 [i_0]);
        var_16 = (((max(((var_13 ? (arr_1 [i_0]) : (arr_2 [16]))), var_12)) >> (var_9 + 6509689953270938705)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [10] &= ((~(min(((17083 ? var_8 : var_10)), ((min((arr_3 [7]), (arr_0 [i_1]))))))));
        var_17 = 86;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 = arr_2 [i_2];
        var_19 = (min(var_19, ((((arr_2 [i_2 - 1]) >> (var_5 + 5716793595285306))))));
        var_20 *= ((arr_4 [2]) ? var_3 : (((arr_3 [14]) - var_13)));
        arr_9 [i_2] = (((arr_2 [i_2 - 1]) ? (arr_6 [i_2 - 1]) : var_10));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((((arr_6 [i_3 - 1]) ? (arr_0 [i_3 - 1]) : (arr_6 [i_3 - 1]))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_21 = (min(var_21, ((((16877 >> (125 - 123))) ^ var_12))));

            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                arr_17 [i_3] = (((((8399910276894309288 || -12375) < ((12374 ? 12360 : -12375)))) ? (((!-12366) ? ((min(var_7, var_7))) : var_0)) : ((~((var_9 ? var_7 : (arr_0 [i_3])))))));

                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    var_22 = ((!(var_12 && var_0)));
                    arr_20 [i_3] [i_3] [16] [i_6] [i_3] = ((((max(var_11, (arr_8 [i_3] [i_5 + 2])))) ^ 1));
                    arr_21 [i_3] [i_3] = (arr_13 [20] [i_6]);
                }
            }
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_23 = (max(var_23, ((((!var_6) && var_2)))));
            var_24 = var_13;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_25 = (min(var_25, 0));
                        var_26 = var_1;
                        arr_33 [7] [i_8] [i_3] = (((arr_3 [i_8 + 1]) + var_4));
                        var_27 = ((((((arr_18 [i_3] [i_3] [i_3] [i_3]) ? var_10 : var_9))) ? ((~(arr_14 [i_3] [i_8 + 1] [i_3]))) : (arr_23 [i_3] [i_3])));
                        var_28 = (max(var_28, ((((arr_1 [i_3 - 1]) * (arr_1 [i_3 - 1]))))));
                    }
                }
            }
            arr_34 [i_3] [i_3] = var_9;
            var_29 ^= ((12375 ? 12352 : 12375));
        }
    }
    #pragma endscop
}
