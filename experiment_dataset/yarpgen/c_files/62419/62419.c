/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_12 *= (~var_1);
                    arr_10 [i_1] [i_1] = (((((((arr_2 [i_2]) != (arr_9 [i_0] [5]))))) + 330499566395771353));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 = (((-1 ? 330499566395771363 : 4277702012607576859)));
                                var_14 = (arr_4 [0] [9]);
                                var_15 = (-var_4 ? var_11 : var_8);
                                arr_18 [i_1] [7] [8] [i_1] [i_1] = ((((arr_7 [i_4] [i_3] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [7] [i_0]) : (arr_1 [i_0]))) - ((var_0 | ((((arr_11 [i_0]) != (arr_16 [i_0] [0] [i_3] [i_4] [1])))))));
                            }
                        }
                    }
                    var_16 = ((-((var_8 ? ((38054 ? var_6 : var_5)) : 0))));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_17 = (arr_3 [i_0 + 1] [i_1] [i_6]);
                    arr_23 [i_0] [i_1] [i_6] [i_6] |= ((~((~(((var_6 != (arr_6 [6] [i_6] [i_6] [i_6]))))))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_1] = (max((arr_3 [i_0] [i_1] [i_0]), (~-6569904285980252673)));
                    var_18 = (max(var_18, (arr_11 [i_1])));
                }
                var_19 = (((((arr_19 [7] [4] [i_1]) + (max((arr_22 [i_1] [i_1] [i_1] [i_0]), (arr_7 [i_1] [i_1] [i_1])))))));
                var_20 += ((32764 ? (((min((arr_22 [8] [i_0] [i_0 - 1] [i_0 + 1]), (arr_22 [4] [i_0] [i_0 + 1] [i_0 + 2]))))) : 330499566395771353));
            }
        }
    }
    var_21 = (~-5384491415482748780);
    var_22 = 51663;
    #pragma endscop
}
