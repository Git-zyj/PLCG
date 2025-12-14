/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = ((((((arr_1 [i_0] [i_0]) + var_12))) ? (min((var_13 | var_6), var_15)) : ((max(144115188075855871, (((1 ? 1 : 1))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_22 -= var_17;
                        var_23 |= (((var_1 - (max(1, 5869657094069311143)))));
                        arr_13 [i_1] [i_1] [i_4] [i_1] [6] |= (!(((((var_2 ? 0 : var_12)) << (((max(var_8, var_16)) + 135))))));
                    }
                    var_24 = (arr_9 [i_2] [i_3]);
                }
            }
        }
        arr_14 [1] = ((38 ? var_14 : (arr_5 [i_1] [i_1])));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_6] = ((((max(((min((arr_18 [i_6] [i_6] [i_6]), -20))), var_9))) ? (((((-1 == (arr_24 [i_5] [i_5] [i_6])))) - 1)) : ((max(0, 127)))));
                        arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] = (max((min((min(var_10, 1)), (((var_2 ? (arr_16 [i_7 - 1]) : var_3))))), var_6));
                    }
                }
            }
            var_25 = (((((max(var_7, (arr_12 [i_5] [i_5] [i_6] [i_6]))))) * ((var_1 ? var_14 : (((arr_24 [i_5] [i_5] [i_6]) ? (arr_4 [i_6]) : var_2))))));
            var_26 = 0;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_27 = min(((((((-1 ? 2053032140 : 1))) && (((16239806515368944429 ? var_17 : 549755813872)))))), (((max((arr_2 [i_5] [i_5]), 1)) + -7773042636356314216)));
            var_28 = var_8;
            arr_30 [i_9] = ((var_13 ? (arr_9 [i_9] [i_9]) : (((var_8 ? (arr_9 [i_9] [i_9]) : (arr_9 [i_5] [i_9]))))));
            var_29 = (arr_18 [i_9] [i_9] [i_9]);
            var_30 = ((max(-25960, ((max(1, var_3))))));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_31 = (max((min(var_16, ((max(var_14, (arr_27 [i_10])))))), -772423450));
            arr_34 [i_10] [i_10] [i_10] = (~0);
            var_32 = var_14;
            arr_35 [i_10] [i_10] = 1;
        }
        var_33 |= ((!((83 < (min(1097907150, var_2))))));
        arr_36 [i_5] [i_5] = (arr_24 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_39 [i_11] = ((24 ? -83 : 1));
        var_34 = (((var_11 ? 1 : 161416074)));
        var_35 = var_6;
        var_36 = var_11;
        var_37 -= (arr_11 [i_11] [i_11] [i_11] [i_11]);
    }
    var_38 = (min(var_38, var_4));
    var_39 ^= ((var_13 ? ((var_10 ? (var_2 - var_5) : var_15)) : (~1)));
    #pragma endscop
}
