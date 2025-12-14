/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 ^= (((((((arr_3 [6] [i_1]) ? var_13 : var_9))) ? 12442785083292393687 : var_10)));
                    var_17 = (max(var_17, var_11));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_18 = (var_4 && var_4);

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_19 = ((2168051339645170028 ? (arr_12 [i_0] [i_1] [9] [i_3 + 1] [0]) : var_12));
                            var_20 = -1;
                            var_21 = (max(var_21, var_13));
                            arr_14 [6] [i_1] [i_2] [i_2] [10] |= var_11;
                        }
                        var_22 = (arr_6 [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_17 [i_1] = ((((var_12 ? var_1 : var_14)) / (0 | var_1)));
                        var_23 = arr_10 [i_5];

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_24 = (var_14 < 12879054497908365914);
                            var_25 = 1555577378295290072;
                            arr_21 [i_0] [4] [i_1] = (var_12 && -1);
                            arr_22 [i_1] [i_1] = var_11;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_26 = (((arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] [i_7]) ? var_10 : (5567689575801185702 * 21585)));
                            arr_26 [i_0] [i_1] [i_1] [i_5] [i_7] = (((arr_25 [i_0] [i_7]) | -32192));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [i_1] = 2034734661;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_32 [i_1] = (var_3 ? (67108863 || -1757878405282248123) : (((arr_16 [i_1] [i_1] [i_2] [i_8]) - (var_11 + 17435))));
                                arr_33 [i_0] [i_1] [i_2] [i_2] [12] [i_1] [i_9] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
