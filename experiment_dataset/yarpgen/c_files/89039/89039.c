/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = ((1 >> (((~-24526) - 24520))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [12] [i_1] [i_2] [i_1] [1] = ((-(arr_3 [i_0 - 1])));
                            arr_16 [i_0] [7] [i_4] [14] [i_4] [11] [i_2] = ((118 ? (!var_8) : (arr_0 [i_0 - 1] [i_4])));
                            arr_17 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0 + 3] = ((~(arr_13 [i_0] [11] [7] [3] [1] [i_2] [3])));
                        }
                    }
                }
            }
            var_20 = 15;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_22 [16] [i_5] [i_0 + 2] = -1865545152172871395;
            arr_23 [i_0] = (arr_21 [i_0 + 2] [i_5] [i_0 - 1]);
            arr_24 [i_0] = ((-26368 ? (arr_2 [i_0 + 2]) : (((!(arr_19 [5] [5]))))));
            var_21 = var_11;
        }

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_22 = ((-(((var_10 + 2147483647) >> (2146959360 - 2146959348)))));
            arr_28 [i_0] = (1 < var_9);
        }
        arr_29 [i_0] [15] = var_10;

        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_32 [i_7] = var_18;
            arr_33 [i_7] = (arr_8 [i_0 + 3] [i_0] [i_0 + 3] [i_0]);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_23 = ((112 ? (arr_7 [i_0] [i_7] [i_7] [i_9]) : -var_8));
                        var_24 = var_0;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_25 = (((((var_5 ? var_7 : -60))) ? (arr_34 [i_0 + 2] [i_0 - 1] [i_0 - 1]) : ((((arr_37 [i_10]) ? (arr_2 [12]) : 19)))));
            var_26 = ((-15511 ? var_2 : (arr_34 [i_0] [i_0 + 1] [i_0 + 1])));
            var_27 = (arr_39 [i_0]);
            var_28 = ((var_16 ? (arr_30 [1] [i_0 + 3]) : var_3));
            var_29 = var_17;
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            arr_44 [1] [i_11] [10] = var_17;
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    {
                        var_30 *= -var_8;
                        arr_49 [i_0 + 3] [i_11] [i_12 - 2] [8] = (arr_38 [i_0 + 1] [i_11] [i_12] [i_13 + 2]);
                        var_31 *= ((var_4 ? (!-26370) : 27667));
                    }
                }
            }
            arr_50 [i_0] [i_11] [14] = (((arr_14 [i_0 - 1]) != var_14));
            var_32 = (((((var_12 ? var_18 : 156))) && var_10));
        }
    }
    var_33 = ((((max(((min(30720, 3304))), (var_17 - var_2)))) > var_9));
    var_34 = (var_12 || var_15);
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_35 = var_8;
                arr_57 [i_14] [15] = (((((var_3 ? var_14 : 84))) == (min(((var_1 ? var_11 : 235)), var_5))));
            }
        }
    }
    var_36 = (!var_9);
    #pragma endscop
}
