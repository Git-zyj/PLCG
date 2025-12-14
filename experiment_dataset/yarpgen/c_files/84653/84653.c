/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = var_9;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 -= ((24 ? (arr_1 [i_0] [i_0]) : 65));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_3] [i_3] = ((arr_8 [i_2 - 1] [i_3 + 1] [i_0 + 2]) | var_10);
                        var_19 &= 52;
                        var_20 += arr_10 [i_0] [i_0] [i_0] [i_0];
                    }
                }
            }
            arr_12 [i_0] [i_0] = 79;
            arr_13 [i_0] [i_0] = 15751518001155223097;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_21 ^= ((((arr_15 [i_0] [10]) ? var_15 : var_1)));
            var_22 = 59996;
            arr_16 [i_4] [i_4] = (!var_14);
            var_23 = (min(var_23, (((var_10 ? (((arr_3 [i_0] [i_0]) ^ 652851672140978381)) : -65)))));
        }
        var_24 = 5539;
        arr_17 [i_0] = ((((min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2]), var_14))) ? (arr_7 [i_0] [i_0] [i_0]) : (((var_0 >= (arr_1 [i_0 - 1] [i_0 - 1]))))));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (!77);

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_25 [i_5] [i_5] = (~var_13);

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                arr_30 [i_5] [i_5] [i_5] [i_5] = (341797307 >= (3953169989 > 2695226072554328522));

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_33 [i_5] [i_5] [i_5] [i_5] = (min((((!(arr_18 [i_5] [i_5])))), (arr_20 [i_7])));
                    arr_34 [i_5] [i_5] [i_5] [i_5] = (min(((((arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) ^ (~212)))), (((arr_32 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) ? var_15 : 341797303))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_25 = (min(var_25, -var_3));
                    var_26 -= (arr_19 [i_5] [i_5]);
                    var_27 = ((var_1 * (arr_23 [i_7 + 1])));

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_41 [i_5] [i_5] [i_5] [i_5] = ((arr_29 [i_10 - 1] [i_9] [i_6]) ? (arr_29 [i_10] [i_10] [i_10]) : (arr_29 [i_6] [i_6] [i_9]));
                        var_28 = (!341797297);
                        arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] = 3953169989;
                    }
                    var_29 = (min(var_29, (((3942648741 ? var_7 : (arr_39 [i_5] [i_6] [i_7 + 1] [i_5] [i_7 + 1]))))));
                }
            }
            var_30 -= ((min(var_5, (var_2 > 3953169988))));
        }
    }
    var_31 = var_1;
    #pragma endscop
}
