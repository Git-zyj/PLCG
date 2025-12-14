/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(!-1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] = (min((max((~var_8), (((0 ? (arr_0 [i_0] [i_0]) : var_13))))), ((((arr_7 [5] [i_3]) ? (arr_2 [i_3 - 1] [i_2 - 1] [i_2 + 1]) : (arr_1 [i_3 - 1]))))));
                        var_20 -= (182 ? 1023923434 : 9248069451068498580);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (max(var_21, (arr_11 [i_4] [i_3] [3] [13] [i_1] [i_1] [i_0])));
                            var_22 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 = (min(108, 6604));
                            var_24 *= (max(((((((arr_3 [i_3] [i_2 - 2]) ? var_1 : var_5))) ? 14528445056179262130 : var_2)), (((((var_9 ? -24353 : 4300425008847843981))) ? var_5 : (((var_18 * (arr_8 [1] [i_2]))))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = ((!((((((var_6 ? var_4 : (arr_6 [i_0] [i_0] [1])))) ? var_4 : var_15)))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_25 = (((((arr_1 [i_1]) % (arr_1 [i_0]))) / -529170263));
                            var_26 *= (((max((arr_8 [i_2] [i_1]), 9261960920852690654)) << (-8263431367575376175 + 8263431367575376234)));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_27 = (~15758862369366768031);
                            var_28 = ((-(arr_20 [i_0])));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_29 = (min(var_29, (((~(arr_11 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0] [i_0]))))));

                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_28 [i_1] [i_1] [i_9] = (((arr_20 [i_8]) / -529170263));
                    var_30 = (+(((arr_20 [i_0]) ? 9198674622641053031 : var_7)));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_31 = ((182 ? (arr_17 [i_0] [i_1]) : var_0));
                    var_32 = (((arr_1 [i_0]) ? ((0 ? var_6 : var_17)) : var_13));
                }
            }
            var_33 -= min(((((!(arr_1 [i_0]))) ? (((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) : 255)), ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [9] [i_0]) >= -var_18))));
            var_34 = ((-(arr_29 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])));
            var_35 = var_0;
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_36 ^= ((0 ? (arr_25 [i_13] [i_12 + 1] [i_11 - 1] [10]) : (arr_37 [i_0] [i_11 - 1] [i_12] [i_13])));
                        var_37 -= (arr_39 [i_0] [i_11] [i_12] [i_11]);
                        arr_40 [i_0] [i_0] [8] [i_12] [i_0] [i_13] = ((((arr_27 [i_12 - 1] [i_12] [i_12 + 1] [i_11 - 1]) ? (arr_27 [i_12 - 1] [3] [i_12 - 2] [i_11 - 1]) : 19)));
                    }
                }
            }
            arr_41 [7] = ((!(arr_10 [i_0] [i_0] [2] [i_0] [i_11] [i_11])));
            arr_42 [i_11] [i_0] = (((((9261960920852690649 ? 24 : 68))) == var_3));
            arr_43 [2] [i_0] = (min(10794150648335603151, 634375070));
            arr_44 [i_11] [i_11] [i_0] |= (max((arr_14 [i_11 + 1] [0] [1] [i_11 + 1] [i_11 + 1]), ((max((arr_12 [i_0] [2] [i_11] [i_11] [2] [i_11]), (~147))))));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            arr_47 [i_0] = var_3;
            var_38 = (max(var_38, ((min((min((((arr_24 [i_0] [i_0] [i_14] [i_14]) ? (arr_20 [0]) : var_9)), (arr_13 [i_14] [i_14] [i_0] [i_0] [11]))), var_8)))));
        }
        var_39 = (min(var_39, (arr_10 [i_0] [5] [i_0] [6] [i_0] [i_0])));
        var_40 = ((((max(var_15, ((((arr_26 [i_0] [15] [i_0]) < var_6)))))) ? (arr_20 [i_0]) : (max((arr_24 [i_0] [i_0] [i_0] [i_0]), (var_10 / var_10)))));
    }
    #pragma endscop
}
