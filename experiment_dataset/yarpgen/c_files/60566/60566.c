/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((~((var_6 + (~var_15)))));
    var_17 = var_14;
    var_18 = (min(var_18, (((var_14 << ((((((min(176, var_14))) ? var_15 : var_9)) + 22514)))))));
    var_19 -= ((!((!(((var_10 << (var_2 - 44))))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 *= (max((arr_3 [11]), var_8));
                    arr_8 [8] [1] [i_2 - 1] [i_2 + 1] = ((-(arr_6 [i_0] [i_0] [i_2 - 1] [i_2 + 3])));
                }
            }
        }
        arr_9 [5] [i_0 + 2] = ((var_4 ? var_9 : (min((min((arr_4 [i_0] [i_0]), var_9)), 4294967295))));
        arr_10 [i_0] = (!var_3);
        arr_11 [i_0] [i_0] = ((82 ? (min(var_5, -16)) : ((~(arr_5 [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_21 = (~var_11);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_22 *= ((92 ? var_3 : var_11));
            arr_17 [i_3] [i_3] [i_4] = var_12;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_23 += var_8;
            arr_22 [i_3] [i_5] = (arr_21 [i_3]);
            arr_23 [i_5] [i_3] [i_3] = var_13;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] = 16787359556258380565;
                        var_24 = ((var_15 ? ((163 ? 0 : ((-(arr_6 [i_3] [i_3] [i_3] [9]))))) : var_14));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_31 [i_8] [i_5] [i_6 - 1] [i_5] [i_3] = (~158);
                            var_25 = (min(var_25, ((max((arr_27 [i_3] [i_6 + 1] [i_3 - 2] [0] [i_8]), ((((((35589 ? 1 : -4135137134323508357))) ? var_11 : var_9))))))));
                            var_26 = ((((((92 - (arr_26 [i_3]))) - (((arr_20 [i_6] [i_5] [i_6]) ? 84 : 163)))) + (((var_15 ? var_12 : var_2)))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_27 *= (((var_13 - (arr_25 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1]))));
            var_28 = (max(var_28, (((-((-(arr_33 [i_3 + 1]))))))));
        }
    }
    #pragma endscop
}
