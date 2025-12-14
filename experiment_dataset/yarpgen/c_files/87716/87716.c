/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 18446744073709551599;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 *= (-(((((var_0 ? 18446744073709551613 : var_2))) ? -12550 : ((var_6 ? var_10 : 127)))));
        arr_2 [i_0] = (((((max(24973, -23)) <= 30656)) ? (((-((var_7 ? var_4 : var_11))))) : (((50243 != var_7) ? -12975087134053220980 : var_11))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = var_2;
            var_15 = ((-(arr_3 [i_1])));
            arr_10 [i_1] [i_2] = ((~(((arr_6 [i_1] [13] [i_2]) ? 36490 : var_3))));
            arr_11 [i_1] [i_2] = var_4;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_16 = (min(var_16, (var_11 & var_9)));
            var_17 = (((((var_5 ? 8176 : var_1))) ? (arr_7 [i_1] [i_3] [i_3]) : 30653));
            var_18 = var_8;
        }
        arr_14 [i_1] = ((var_0 ? 40262 : (arr_8 [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_25 [i_7] = var_6;
                        arr_26 [i_4] [i_4] [i_4] [i_4] = 16;
                    }
                }
            }
            var_19 = (max(var_19, ((((((var_11 ? 52 : var_7))) ? (1 + 16811974164655805921) : 65534)))));
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_31 [i_4] [i_8] = 65509;

            for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_40 [9] [9] [i_8] [9] [i_9 - 1] [i_10] [i_11] = var_10;
                            var_20 |= ((-(-127 - 1)));
                        }
                    }
                }
                arr_41 [i_4] [i_4] [i_4] &= var_5;
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
            {
                var_21 = ((var_8 ? 65535 : var_4));
                var_22 = ((-(var_3 * 0)));
                var_23 |= var_2;
                arr_44 [i_4] [1] [i_8] [4] = ((var_4 ? var_4 : (!32768)));
            }
            for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
            {
                arr_48 [i_4] [i_8] [i_13] [5] = (((arr_42 [i_8 + 4]) ? (arr_42 [i_8 + 1]) : var_6));
                var_24 = ((var_0 || (((-35 ? var_3 : 65534)))));
            }
            arr_49 [i_4] [i_8] = ((!(!6664564666063595600)));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_25 = ((-(!-19255)));
                            var_26 *= 9964;
                            var_27 = (~var_10);
                        }
                    }
                }
            }
        }
        arr_60 [7] [8] = arr_12 [5] [i_4];
        arr_61 [13] = 65509;
    }
    #pragma endscop
}
