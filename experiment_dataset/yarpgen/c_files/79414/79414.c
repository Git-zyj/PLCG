/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 2687634629;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [9] = ((~((max((arr_6 [i_2] [i_1 - 1] [i_0]), (arr_4 [i_0] [i_1 + 2]))))));
                    var_17 = ((11365237290069078433 ? ((((3183866512 ? 5254605778561131849 : var_4)) / (((~(arr_5 [i_0] [i_0] [i_2])))))) : (0 * -15688)));
                    arr_10 [18] [i_1] [2] = ((-(((max(22087, var_3))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_18 *= (max((((((arr_1 [i_4]) + 2147483647)) >> (var_14 - 193))), ((((arr_1 [i_3]) == (arr_1 [i_4]))))));
            arr_16 [i_4] [13] [i_3] |= ((((min((arr_12 [i_3]), (arr_12 [i_4])))) ? (((var_9 ? (arr_13 [i_3] [i_4]) : var_12))) : (arr_12 [i_4])));
            arr_17 [i_3] [i_3] [i_4] = (((-(arr_0 [i_3] [i_4]))));
            arr_18 [i_4] [i_3] [i_3] = var_4;
        }
        var_19 += (!18599);
        arr_19 [i_3] = ((((max(1535013078, 32765))) * (max(3962934522, ((var_10 ? (arr_7 [i_3]) : (arr_8 [15] [16] [19] [15])))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_5] = ((((!(~6049646781944435545))) ? (~255) : (arr_14 [i_5] [i_5] [i_5])));
            var_20 += ((max((arr_11 [i_5] [i_5]), (arr_11 [i_5] [i_6]))));
            arr_26 [i_5] [i_5] [i_6] = ((~((((~(arr_12 [i_5])))))));
        }
        var_21 = (((!1941200630) ? 3500811618 : (min(28, 1097273708))));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_22 -= ((((!(arr_1 [i_7 + 1]))) ? (max(-4107539610068402856, 28)) : (((min(-114, (arr_1 [i_7 - 1])))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_32 [i_8] [i_7 + 2] [i_8] = (arr_8 [11] [i_7] [11] [11]);
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    {
                        var_23 = (arr_30 [i_10 - 1] [i_9 - 1] [13]);
                        var_24 = (min(var_24, -114));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_45 [i_7] [i_13] [i_7] [i_7 - 1] [i_7] = ((-(!20075)));
                            var_25 += ((18446744073709551615 ? (-69 > 9634) : (~204)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 8;i_14 += 1)
    {
        var_26 = 247;
        var_27 = -8113870652235425918;
    }
    #pragma endscop
}
