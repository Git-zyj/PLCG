/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = (arr_1 [i_0]);
                arr_8 [i_1] = ((!((max((arr_2 [i_0] [i_0]), 22051)))));
                arr_9 [9] [i_1] = ((-(max(-929367758112924981, -17020))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_13 [4] [4] [2] [i_0] |= ((221 ? (-1 > 0) : 22052));
                    var_18 = var_4;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [1] [i_1] [i_4 - 1] [i_0] = ((max((arr_16 [i_1 + 2] [i_1 + 2] [i_4 - 2] [5]), 15892603917666643917)) < 120);
                                arr_22 [i_0] [i_1 + 2] [i_3] [i_3] [i_1] = (-(max(var_2, (arr_10 [i_1 + 1] [i_4 - 1]))));
                            }
                        }
                    }
                    arr_23 [i_1] [i_3] = ((((min(-26776, var_6)))));
                    var_19 = (max((var_15 + var_9), var_1));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_1] [i_1] [i_0] = (((arr_2 [i_0] [i_0]) ^ ((max((arr_15 [11] [3] [i_1] [i_6]), (arr_26 [i_0] [3] [i_1] [3]))))));
                    arr_28 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2] = ((((((max(var_13, var_17))) || ((min(var_1, (arr_16 [i_6] [i_1] [i_6] [i_6])))))) ? var_2 : 255));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_35 [5] [1] [i_1] [5] [5] [5] = var_10;
                                arr_36 [i_0] [i_0] [i_1] = -6676;
                                arr_37 [i_0] [i_1] [13] [i_1] = var_1;
                            }
                        }
                    }
                    arr_38 [i_0] [i_1] [i_0] [i_6] = ((-(0 != 49)));
                }
                arr_39 [i_0] [i_1] [i_0] = (max((131 == -37063), (var_4 % var_3)));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
