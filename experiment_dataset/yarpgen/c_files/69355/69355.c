/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = -28870;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 += ((((2949904761718448550 & (arr_1 [i_2 - 1]))) & -852318960));
                            var_16 = ((min((arr_0 [i_0] [i_0]), (((arr_11 [i_1] [i_0] [i_1] [i_2] [i_3]) * var_3)))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = var_1;
                            var_17 = (arr_2 [i_0]);
                            arr_13 [i_2] [i_1] [i_0] = ((852318960 ? 852318971 : 852318954));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_17 [i_4] = ((-((-(arr_14 [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_5] [i_5] = (((((-(arr_20 [1] [i_5])))) ? var_9 : (4782608830309331665 * var_2)));

                    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_5] [i_7] [i_6] [i_7] = ((~(arr_23 [i_7 + 2])));
                        var_18 = 3442648336;
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_6] [i_5] [i_4] = var_11;
                        var_19 = 7759645288182019116;
                        var_20 = var_5;
                    }
                }
            }
        }
    }
    var_21 = 154804279;
    var_22 = ((min(((min(852318931, var_10)), (min(var_5, var_11))))));
    #pragma endscop
}
