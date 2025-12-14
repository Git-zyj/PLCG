/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 158));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_2;
            var_11 -= ((8 ? 1 : (arr_0 [12] [12])));
            arr_6 [8] &= 13298695780231103313;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_12 = (arr_9 [i_0]);

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_13 = 1274025784;

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_14 = 191;
                    arr_16 [i_0] = (((arr_7 [i_0] [i_0] [i_0]) ? var_3 : ((-(arr_15 [i_0] [i_2] [0])))));
                }
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_15 = ((0 ? 5148048293478448287 : 5148048293478448307));
                var_16 = arr_17 [i_0] [i_0];
                var_17 ^= (5148048293478448303 * 246);
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_18 = var_3;
                            var_19 = var_9;
                        }
                    }
                }
                var_20 = ((-30250 ? 99 : -4656));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 23;i_13 += 1)
                            {
                                var_21 = ((((var_2 ? -2686 : (arr_34 [i_9] [i_9] [i_11]))) == -726374652));
                                arr_42 [i_13] [i_12] [i_11] [i_10] [i_9] = ((10 ? -8958 : 0));
                                var_22 += (((((arr_35 [i_10] [i_10] [i_10]) + 2147483647)) << (((~-606831549) - 606831548))));
                            }
                            var_23 |= ((-936 ? (((var_3 ? var_6 : var_2))) : (min(var_1, (arr_27 [i_9])))));
                            arr_43 [i_10] [i_10] [i_10] = ((((((arr_28 [i_9]) ? 1 : (arr_37 [i_9] [i_9] [i_9] [i_9])))) ? (((~(-1 | 1180040168)))) : ((var_7 ? (arr_36 [i_9] [i_9] [i_12]) : (arr_36 [i_12] [i_10] [i_10])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                arr_50 [i_14] [i_15] [4] [i_14] [i_10] [i_9] = (((var_9 ? (arr_49 [i_9] [i_9]) : (arr_48 [i_15] [i_15] [i_14] [i_9] [i_9]))));
                                var_24 = -118;
                            }
                        }
                    }
                }
                arr_51 [i_9] [i_9] = (max((((arr_48 [19] [i_9] [i_9] [i_9] [i_9]) ? var_10 : (arr_37 [i_9] [i_9] [i_10] [i_10]))), (arr_48 [i_10] [i_10] [14] [i_9] [i_9])));
            }
        }
    }
    #pragma endscop
}
