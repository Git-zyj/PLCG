/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [1] [1] = ((((min(var_9, 7051851562948117154))) ? 34359738368 : ((min(var_12, var_4)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (arr_10 [i_3] [i_2]);
                                var_18 += (((((~(((arr_0 [i_2]) ? var_12 : (arr_2 [i_1])))))) ? (~-34359738384) : (((((var_9 ? var_10 : -1310909030)))))));
                                var_19 += 34359738368;
                                arr_13 [i_3] [i_3] [i_1] [i_1] [i_0 - 1] [i_3] = var_8;
                                var_20 = 1;
                            }
                        }
                    }
                }
                var_21 = (max(((max(4, 252))), (((arr_5 [i_0 + 1] [i_0 - 1] [12] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0] [i_0 + 1]) : 1065353216))));
                arr_14 [i_1] [i_1] [i_0] = (~((~(arr_2 [1]))));
                arr_15 [i_0 - 1] = (((((arr_1 [10]) ? (max(var_16, (arr_10 [i_0] [5]))) : (arr_0 [i_0 - 1])))) ? ((min((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) : (var_7 <= var_15));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_6] = (((((arr_3 [i_6 + 2] [i_6 + 3] [i_6 - 2]) ? var_2 : (arr_3 [i_6 + 2] [i_6 - 2] [i_6 + 2])))) ? (arr_3 [i_6 + 1] [i_6 + 3] [i_6 + 3]) : ((((arr_3 [i_6 - 2] [i_6 + 1] [i_6 + 3]) <= (arr_3 [i_6 - 2] [i_6 + 3] [i_6 - 2])))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    arr_26 [i_6] = (arr_6 [i_5] [i_5] [i_5]);
                    var_22 = (min(var_22, var_3));
                    arr_27 [i_6] [i_6] [i_7] = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_5));
                                var_24 = var_0;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_25 = -49;
                    arr_34 [i_5] [i_5] [i_6] [i_10] = (min(var_14, (((var_13 ? var_0 : 3)))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = (max(var_26, ((((((((var_0 >= (arr_3 [1] [i_6] [4])))) + (arr_8 [1])))) || (arr_8 [12])))));
                    var_27 = (((((var_3 && var_3) ? (var_13 | var_6) : (((arr_11 [i_6]) ? var_4 : var_9)))) <= 1));
                }
            }
        }
    }
    #pragma endscop
}
