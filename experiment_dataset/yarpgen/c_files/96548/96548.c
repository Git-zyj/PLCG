/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-1, (((((var_15 ? (-32767 - 1) : 1))) ? var_13 : (124 * 67108863)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (6643 && (((min(54, (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = 18446744073642442745;
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_20 = (max(var_20, 92));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_21 = (min(var_21, ((min(((var_0 ? -93 : 105)), ((min((-127 - 1), 1))))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_14 [i_1] = (min(((min((arr_12 [i_2] [i_3]), var_4))), ((var_15 ? 6643 : (20810 * -1)))));
                        arr_15 [i_1] [i_1] [i_3] [i_1] [i_4] = ((((((var_6 && var_4) ? (var_13 * 1) : 20802))) ? 1 : 127));
                        arr_16 [i_2] [i_1] = (min(((min((1 >= 1), 1))), (min((1 >= var_1), (min(16, var_14))))));
                    }
                }
            }
            var_22 = (max(var_22, (min((!var_10), (min(var_14, 103))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = ((!(67108863 * 16)));
            var_24 += (min((arr_11 [6] [i_1] [i_1 - 2]), (!96)));

            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_24 [1] [i_1] = ((188 ? -1 : (((((min(1, 1))) >= (151 * 1))))));
                var_25 ^= 0;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
                {
                    var_26 += ((-31370 ? 143 : var_6));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_1] [i_5] [i_5] [i_1] [i_5] [i_5] [i_5] = ((!(((14473168769376204169 ? 1 : 1)))));
                        arr_33 [i_1] [5] = var_1;
                    }
                }
                for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_1 - 3] [i_1] [i_1] = (((arr_21 [i_1]) && 163));
                    var_27 -= ((var_13 * (arr_11 [2] [i_1 - 4] [i_1 - 1])));

                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        var_28 = (!-15316);
                        var_29 |= (arr_31 [i_1 + 1] [i_1 - 4] [i_1] [2] [i_1 - 3]);
                    }
                    arr_39 [i_1] = (!(arr_31 [1] [1] [i_5] [i_1] [i_5]));
                }
                for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, 15315));
                    arr_43 [i_1] [i_1] [i_12] [i_7] = -15316;
                }
                var_31 = arr_18 [i_1 - 3] [i_1];
                var_32 = (max(var_32, ((((arr_42 [i_5] [i_1 + 2] [i_1 + 2] [i_1 + 3]) >= var_4)))));
                var_33 = (min(var_33, (arr_35 [i_1] [i_1 - 1] [i_7] [i_1])));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_47 [i_1] [i_1] = ((-((-(arr_38 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2])))));
            var_34 = (min(((var_11 ? var_4 : var_5)), (((min(var_14, 1)) ? (((arr_44 [i_1] [0] [i_13]) ? -1 : -1)) : -1))));
        }
    }
    #pragma endscop
}
