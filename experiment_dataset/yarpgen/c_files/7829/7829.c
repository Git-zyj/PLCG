/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (((((max(((var_2 && (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])))) << (!-8299915548371057034))))));
        var_15 = (max((((var_2 && var_2) ? ((var_8 ? var_2 : var_0)) : (((var_6 ? (arr_0 [i_0] [i_0]) : (arr_1 [14] [i_0])))))), (((~(max(var_7, (arr_1 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = var_9;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 -= (arr_3 [i_2] [2]);
                            arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = ((max((arr_9 [i_4 + 2] [i_4 + 3] [i_4 - 2] [i_3 - 1] [i_0] [i_0]), (arr_9 [i_3 - 2] [i_1] [i_4 + 3] [i_3 - 2] [i_2] [i_1]))));
                            arr_14 [i_2] = (max((((max(-5694765321490674072, -27211)))), (((arr_1 [i_4 + 1] [i_0]) | (arr_1 [i_4 - 2] [i_4 - 1])))));
                        }
                    }
                }
            }
            var_18 = 25;
        }
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((var_6 && var_10) + (max((!var_9), (max((arr_16 [i_5]), var_5))))));
        arr_18 [11] [i_5] = ((var_12 ? ((max(var_10, var_12))) : var_3));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_19 = 1485478168;
                                var_20 = (max(var_20, ((((25 < 117) ? 117 : ((-(arr_2 [i_9 - 1]))))))));
                            }
                        }
                    }
                }
                var_21 = arr_15 [i_6];
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 11;i_12 += 1)
                    {
                        {

                            for (int i_13 = 2; i_13 < 9;i_13 += 1)
                            {
                                var_22 = (+(((arr_19 [i_12]) ? (arr_19 [i_12]) : var_3)));
                                arr_39 [i_6] = ((max(var_10, 1485478168)));
                                var_23 = (max(var_23, (((((-(arr_1 [i_6] [i_11 - 2]))) * var_5)))));
                            }
                            var_24 = (max(var_24, var_3));
                            var_25 = (max(var_25, var_4));
                            arr_40 [i_6] [i_6] [6] = (((var_9 / ((var_3 ? var_8 : var_11)))) | ((max((max(var_4, var_8)), (arr_10 [i_12 + 2] [i_12 - 3] [i_11 - 2] [i_11 - 2])))));
                            arr_41 [i_6 - 2] [1] [i_11] [i_6] = (max((max((arr_1 [i_11] [i_7]), ((var_1 ? var_11 : (arr_23 [i_6]))))), ((max((var_4 / var_7), (var_3 + var_6))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
