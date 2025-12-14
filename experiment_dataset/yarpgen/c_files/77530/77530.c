/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 -= ((((((arr_2 [i_0 + 2] [22]) ? var_5 : var_17))) - ((((min(var_14, var_15)))))));
                    arr_7 [i_0] = (42742 && 1971339539);
                    var_19 = (max(var_19, ((((((((var_17 ? 2752170436 : var_15))) ? var_14 : (7987204731008571390 * var_8))) - (min((var_17 / var_1), (min((-2147483647 - 1), var_13)))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_4] [i_3] = var_3;
                                arr_22 [i_3] [i_4] = (~var_9);
                                var_20 = (max(var_20, (min((((7987204731008571389 * var_12) ? var_6 : var_9)), (arr_16 [i_4 - 1] [i_6 + 2] [i_6] [i_7])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_28 [i_3] [i_4] [i_5] = var_13;
                                arr_29 [i_3] [i_3] [i_3] [i_4] [i_9] = (((((((var_6 ? var_11 : var_4))) ? var_8 : (var_9 / var_6))) > (((((var_8 < var_0) >= (min(var_10, var_1))))))));
                                arr_30 [i_4] [i_9] = ((((var_11 || (arr_17 [i_3] [i_4 + 1] [i_4 - 3]))) ? var_3 : (((((((arr_5 [i_4]) << (var_0 - 69)))) ? var_16 : -1854004701)))));
                                var_21 = ((((min(1, var_10))) ? (~var_0) : var_1));
                                arr_31 [i_4] = max((((!(arr_25 [i_4 - 4] [i_4 - 1] [i_5] [i_8] [i_8])))), ((var_0 ? (arr_11 [i_3] [i_4 - 2] [i_3]) : var_2)));
                            }
                        }
                    }
                    var_22 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
