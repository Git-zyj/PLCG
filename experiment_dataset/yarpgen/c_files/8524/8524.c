/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((+(((-127 - 1) ? 1 : (max(var_11, 0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [10] [14] = ((((arr_2 [5] [i_0]) ? var_0 : var_18)));
        var_21 = (!18);
        var_22 = (max(var_22, (((-18 ? (-127 - 1) : -111)))));
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = var_2;
        var_23 = var_4;

        /* vectorizable */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_24 ^= (((arr_7 [i_1 - 1]) - (arr_7 [i_1 - 1])));
                    arr_17 [i_1] [i_3] [i_3] [i_4] &= ((-(((arr_8 [i_1] [i_3]) ? 18 : 38936))));
                    arr_18 [i_1 - 1] [i_2] [6] [i_1] [i_4] [i_4] = (((0 % 255) <= var_16));
                    arr_19 [i_1] [i_1] = (60 ? var_2 : 4294967295);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_25 = var_4;
                        var_26 = (min(var_26, ((((((60 ? -993637695 : 1))) ? ((26 ? (arr_14 [i_2] [1] [i_2 + 3]) : (arr_10 [i_6] [i_3]))) : 43)))));
                    }
                    arr_25 [3] [i_1] = ((var_8 ? (arr_5 [i_1]) : var_10));
                }
                var_27 = ((!(arr_14 [i_2] [i_2 - 3] [i_2])));
                arr_26 [i_1] = (arr_12 [i_1] [i_1]);
            }
            var_28 = (((arr_7 [i_1 - 1]) ? var_12 : (arr_20 [i_1 - 1] [i_2 - 3] [i_2 - 2] [i_1] [i_2 - 2])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_29 [i_1] [i_1] = var_6;
            var_29 = var_7;
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_30 = ((((((max((arr_30 [6] [2] [3] [2]), var_17))) ? (~0) : (arr_16 [i_10] [i_1] [i_1] [i_1]))) ^ (((~((max(189, 0))))))));
                            var_31 &= (max((~var_18), var_1));
                            arr_37 [i_1] = ((0 ? (max((arr_32 [i_1] [i_9] [i_10 + 2] [i_10 - 1] [i_10] [i_10]), (max(var_18, 8155087903052424483)))) : (!255)));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_41 [i_1] [i_1] = (((1 ? ((0 ? 0 : 1)) : 41)));
            arr_42 [i_1] [i_1] = var_3;
            arr_43 [i_1] = (((((((max((arr_1 [i_1]), var_10))) ? (max(var_8, (arr_8 [i_1] [i_1]))) : ((max((arr_16 [4] [i_11] [i_1] [i_11]), 67)))))) ? (((1 && var_16) ? ((var_19 ? 6829676068738928985 : (-127 - 1))) : (((max(6, var_2)))))) : (((((409823033 ? 0 : -30))) ? var_3 : 0))));
            var_32 = (min(var_32, ((max((arr_32 [i_11] [i_11] [i_11] [5] [1] [i_1 - 1]), 0)))));
            var_33 = (min(var_33, (((-(arr_36 [i_1] [i_1] [i_1] [8] [1]))))));
        }
    }
    #pragma endscop
}
