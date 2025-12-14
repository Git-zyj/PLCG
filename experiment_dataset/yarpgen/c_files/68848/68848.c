/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(-var_1, var_8);
    var_21 &= (min((var_14 != 786432), 32256));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 -= (max((((arr_1 [i_0] [i_0 - 1]) | (arr_2 [i_0 - 1]))), ((((-2147483647 - 1) ? 957260887 : 0)))));
        var_23 = (min(var_23, (((~(~-32257))))));
        var_24 = (((((~(arr_1 [i_0 - 1] [i_0 - 1])))) ? (((arr_2 [6]) ? (arr_2 [i_0 - 1]) : var_18)) : (arr_1 [i_0 - 1] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_25 &= 32754;
            var_26 = (((((50746 ? 3174391984267039325 : (((arr_2 [i_0]) / 1))))) ? ((max((arr_0 [i_0] [9]), 32256))) : ((-125 ? (max((arr_4 [i_0]), 957260887)) : (arr_0 [i_0] [i_1])))));
            var_27 += (min((((~(103 != -3228680630370507381)))), (arr_2 [i_0 - 1])));
            var_28 -= ((!(((52 / (arr_0 [i_0 - 1] [i_0 - 1]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_29 = (arr_2 [i_0 - 1]);

            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_30 = (min(var_30, ((((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3]) ^ (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3]))))));
                    arr_14 [i_0] [i_0 - 1] [i_2] [i_3] [i_4] [i_4] = (arr_1 [i_0 - 1] [i_0]);
                    arr_15 [3] [3] [i_3] [i_3 + 3] [3] = ((0 ? ((~(arr_9 [i_0]))) : (arr_0 [i_0] [i_0])));
                    var_31 += arr_7 [i_0];
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_32 = -32285;
                            var_33 = (((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 3]) > (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 4] [i_3 - 4])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_7] [i_2] [i_0] = (((arr_17 [i_0 - 1] [i_3] [i_3 - 2] [i_7 - 1]) > (arr_17 [i_0 - 1] [i_2] [i_3 - 3] [i_7 + 1])));
                            var_34 = var_8;
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_35 *= (arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_10 - 2] [i_10]);
                        var_36 = (32754 != 1);
                        var_37 *= -32258;
                    }
                }
            }
            var_38 *= (arr_32 [i_0] [i_9] [i_0] [i_9]);
            var_39 -= ((((min(((5829 ? 32256 : (arr_31 [6] [7]))), 1))) ? var_14 : (min(103, (min(-21, 3174391984267039325))))));
        }
    }
    #pragma endscop
}
