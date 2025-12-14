/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((1 * var_13) ? var_10 : (~var_5)));
    var_17 = ((((((max(var_7, 3681781547081141495)) << (var_3 == var_8)))) ? ((((max(var_12, var_1))) ? var_2 : var_9)) : var_7));
    var_18 = (min(((((((var_11 ? var_11 : 0))) > (var_0 | -157869485376792485)))), ((var_7 ? ((var_4 ? var_13 : var_14)) : ((var_4 ? var_8 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-(((!(max((arr_3 [i_0]), (arr_3 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (var_5 || 1);
                            arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = (((0 * var_13) ? (var_10 || 0) : ((-(arr_9 [i_0 - 3] [i_0 - 3])))));
                        }
                        var_20 ^= ((arr_7 [i_0 - 2] [i_1 + 1] [i_1 + 1]) ? var_15 : var_10);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_0 - 3] [i_1 + 1] [i_2] [i_5] = (arr_9 [i_2] [i_1]);
                        var_21 = (min(var_21, (arr_1 [i_0 + 1])));
                    }
                    var_22 = (((((arr_15 [1] [i_1]) || (arr_12 [i_0] [i_0] [i_2] [i_0]))) ? var_3 : var_4));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_23 &= (arr_16 [i_6]);
                    var_24 = (min(var_24, ((max((min((((-(arr_11 [i_0 - 1] [i_1] [i_6 + 1] [i_6 + 1] [i_0] [12] [i_0 + 1])))), (arr_16 [i_1]))), (~0))))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_25 = (max(var_25, ((min(((var_12 ? ((min(var_10, (arr_22 [1] [i_7] [1] [1])))) : (arr_24 [i_0 - 2] [i_0 + 1]))), (0 || var_9))))));
                    arr_25 [0] [i_1] [i_7] = var_15;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_26 = (20260 == var_1);
                            var_27 = ((!((min(var_14, var_1)))));
                            var_28 = var_5;
                        }
                    }
                }
                arr_34 [i_0] [i_0] [i_1 + 1] = (((max((min(var_4, var_0)), (min(var_4, var_10))))) ? var_13 : ((var_0 ? ((var_4 | (arr_6 [i_0] [i_0]))) : var_0)));
                var_29 = var_7;
            }
        }
    }
    #pragma endscop
}
