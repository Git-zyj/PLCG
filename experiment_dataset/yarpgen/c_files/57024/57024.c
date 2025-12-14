/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 15730;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = -4;
            var_12 = (arr_1 [i_0]);
            arr_6 [i_0] |= var_5;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((var_5 ? (max(var_4, -var_5)) : 13));

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            var_13 = (29 % var_2);
                            var_14 = (max((((-4 ? 22 : 1))), ((1 ? (((max((arr_8 [i_0] [i_2] [i_3]), -24840)))) : (arr_11 [7] [i_1] [i_2] [i_2] [i_4 + 1])))));
                            arr_15 [i_2] [2] [i_2] [i_2] [i_2] [i_4] = 1;
                        }
                    }
                }
            }
        }
        var_15 = (((max(28011, (arr_1 [i_0]))) / var_4));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_16 += 11418;
            var_17 |= -6296842878449793447;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_20 [i_6] [i_6] = 1;
            var_18 = 4;
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_19 = ((0 != (~346099914)));
            var_20 = (((arr_18 [i_0] [i_7] [14]) + (arr_19 [i_7])));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {
                arr_29 [i_9] [i_8] = (var_5 / 1728117054);
                arr_30 [i_9] = ((67108863 ? var_4 : (arr_18 [i_8 - 1] [i_9] [i_8 + 2])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_36 [i_9] = ((3 ? -15718 : 1));
                            arr_37 [i_9] = (((arr_28 [i_9] [i_8] [i_8 + 2]) ? var_5 : var_7));
                            var_21 = (arr_34 [i_0] [12] [6] [i_0] [i_9] [6]);
                            var_22 = (arr_22 [i_0] [11] [i_0]);
                            var_23 = (arr_14 [i_8 + 2] [i_8 - 1] [i_9] [i_8] [14]);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_8] [i_12] [i_12] = (3739930230 ? (arr_24 [i_8 + 2]) : var_1);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_24 = var_0;
                            arr_47 [i_13] [i_13] [i_14] = 14402776226634201092;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_25 = ((~(arr_24 [i_0])));
                arr_50 [10] [i_15] [i_15] [i_0] = (((arr_22 [i_15] [1] [1]) - (arr_40 [i_0] [i_8 - 2] [i_15] [i_15])));
            }
            var_26 = (max(var_26, (((((((arr_42 [i_0] [i_0] [i_0] [i_8 - 1]) ? (arr_42 [7] [i_8] [i_8] [i_8 - 1]) : (arr_42 [i_0] [i_8] [i_0] [i_8 - 1])))) ? 1 : (~-29538))))));
        }
        arr_51 [i_0] [12] = 555037044;

        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            arr_54 [i_16] = (765765476164619315 % -15731);
            arr_55 [10] |= (min((min(-6296842878449793447, -6296842878449793438)), 1));
        }
    }
    for (int i_17 = 3; i_17 < 7;i_17 += 1)
    {
        var_27 = var_5;
        var_28 = 15743;
        var_29 = (min(-29538, var_10));
    }
    var_30 = (max(var_10, var_1));
    #pragma endscop
}
