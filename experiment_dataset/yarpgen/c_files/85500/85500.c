/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (min(0, 7));
                arr_5 [1] [1] [1] |= 114;
            }
        }
    }
    var_11 = var_3;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_12 = (arr_6 [i_2]);
            var_13 = ((!(!0)));
            var_14 += (((~var_7) >= -var_2));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_15 = (!1207569281605259521);

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_16 -= (var_9 | var_8);
                arr_16 [i_2] |= ((var_2 ? var_0 : var_5));
                arr_17 [i_5] [i_5] [i_4] [20] = ((!(arr_15 [i_2] [i_2])));
                arr_18 [i_2] [i_2] = ((var_4 & (arr_8 [i_2] [i_4] [i_5])));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_17 = 0;
                var_18 = ((((((arr_9 [i_4] [11]) ? 96 : (arr_9 [i_2] [i_4])))) - -4774171469698248796));
                var_19 = (((-21 && 4774171469698248793) ? (~-20) : 0));
            }
            arr_21 [11] [i_4] [11] = ((var_6 ? 1 : 1));
            arr_22 [i_4] [7] = ((-(arr_7 [i_2])));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_20 ^= var_8;
            arr_27 [i_7] [i_7] [i_7] = (9223372036854775807 & var_1);

            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_21 |= var_4;
                    arr_34 [i_9] [i_7] [i_7] [i_2] = 1;
                    var_22 ^= (((arr_9 [i_2] [i_7]) ? -4774171469698248814 : (((~(arr_31 [i_8] [i_7] [i_2]))))));
                    arr_35 [i_2] [1] [i_7] [i_7] [i_9] [i_7] = (arr_30 [8] [i_2]);
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_39 [i_7] [i_7] [i_7] [i_10] = (((arr_33 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_8]) ? var_7 : (((var_3 ? (arr_8 [i_2] [i_7] [17]) : -36)))));
                    arr_40 [i_7] [i_7] [1] = var_7;
                }
                var_23 -= (((arr_8 [2] [10] [i_8 - 2]) ? (!var_9) : var_3));
                var_24 = var_3;
                arr_41 [6] [i_7] [1] = (((arr_8 [i_8 - 2] [i_8 - 2] [i_8 - 2]) ? (arr_8 [i_8 - 2] [i_8 - 2] [i_8 - 2]) : var_8));
                var_25 = (574208952489738240 * 9733887036509068081);
            }
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_45 [i_2] = (((((1 ? 2422 : 4774171469698248793))) ? (((var_5 ? (arr_24 [i_2]) : var_1))) : var_7));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_26 |= var_6;
                            var_27 -= ((((((var_8 + 2147483647) << (var_4 - 148)))) ? var_9 : var_8));
                        }
                    }
                }
            }
            var_28 = ((((var_3 ? var_9 : var_4)) * var_9));
            var_29 = ((-(~1)));
        }
        arr_55 [21] [13] = (arr_46 [i_2] [i_2]);
        var_30 = var_1;
    }
    #pragma endscop
}
