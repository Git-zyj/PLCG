/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((8643361947623202077 > 7907014062950422057), var_0)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 = (min(var_19, 65529));
            arr_6 [i_1] = min((min((arr_5 [i_0]), (arr_5 [i_1]))), (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_20 = (min(var_20, (arr_1 [i_3 - 2])));
                arr_12 [12] = var_5;
                var_21 = ((17196 ? (arr_0 [i_3]) : (arr_10 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 1])));
                var_22 = (((arr_9 [i_0] [i_3 - 1] [i_3 - 2] [i_3 - 2]) ? (arr_0 [i_0]) : (arr_1 [i_3 - 1])));
                var_23 = ((var_3 || (arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3])));
            }
            var_24 = (((arr_8 [i_0] [i_2] [i_2]) ? var_2 : var_8));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_4] [i_4] [i_4] [i_0] = ((var_0 ? (((arr_5 [i_5 + 1]) ? (arr_4 [9]) : var_15)) : var_16));
                            arr_20 [i_0] [i_2] [0] [i_0] [i_4] [i_6] = (((arr_15 [i_2] [9]) ? var_3 : 65529));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] = ((min((((arr_15 [i_0] [i_0]) ? var_16 : (arr_11 [i_0] [10] [i_7]))), 48323)));
            var_25 = ((((min((min((arr_2 [i_0]), var_1)), (((arr_1 [1]) ? (arr_2 [i_0]) : (arr_14 [i_0] [2])))))) ? (((min(17189, 65530)))) : ((min((arr_21 [i_0] [i_0] [i_0]), -2403)))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_28 [1] = (min(((min(var_2, var_7))), 7));
            var_26 = ((var_9 ? (((var_4 ? 24470 : 17198))) : ((min(7, (((arr_22 [i_8] [i_8]) ? 27 : var_13)))))));
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_27 += (min((min(1, (arr_15 [i_9] [i_9]))), (arr_15 [5] [5])));
        var_28 = 20;
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_34 [i_10] = ((((((arr_31 [i_10] [i_10]) ? (arr_33 [i_10] [i_10]) : (((min(240, var_13))))))) ? -1 : var_7));
        var_29 = (((((min(1094921891, -25101)) / (((min((arr_32 [3] [3]), var_9)))))) > (((3 ? (arr_33 [i_10] [i_10]) : 19349)))));
    }
    var_30 = var_13;
    var_31 = (min(((((51736 ? 48344 : -18352)))), 4294967270));
    var_32 = var_17;
    #pragma endscop
}
