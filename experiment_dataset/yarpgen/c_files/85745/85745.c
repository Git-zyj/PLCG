/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((~(((((var_12 ? 961861184063276750 : 1))) ? var_12 : ((10296 ? var_7 : var_3))))));
    var_14 = 159;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [4] [4] [16] &= ((~(arr_2 [12])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = (min((((((var_6 ? (arr_1 [i_3]) : 10296))) | (((arr_5 [i_0] [i_1]) ? (arr_3 [i_0] [4] [23]) : 961861184063276750)))), ((((arr_11 [i_2] [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2]) ? (arr_11 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 2]) : (arr_10 [i_2] [9] [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2]))))));
                                var_15 = ((-(((((17484882889646274865 ? (arr_11 [i_0] [9] [i_0] [i_3] [1]) : (arr_7 [i_1] [i_1])))) ? (arr_3 [i_2 + 2] [i_2 + 2] [i_2]) : ((-31249 ? -6165808447896664126 : (arr_6 [i_4] [i_1] [i_1] [i_0])))))));
                                var_16 *= (max(((54751 ? 63 : 14006)), (((!(arr_2 [i_4]))))));
                                var_17 = (((arr_12 [3] [i_2 + 1] [i_2] [3] [i_2 - 3]) ? ((~(arr_12 [17] [i_2 - 2] [5] [i_2] [i_2 + 1]))) : ((var_9 ? (arr_12 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 3]) : (arr_12 [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2 - 2])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = (((~(arr_9 [i_2 + 2] [i_1] [i_2 + 1] [i_2] [i_2 - 3] [i_2 - 2]))));
                        arr_17 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((-(((((1 ? (arr_10 [i_5] [i_5] [19] [i_2 - 2] [i_1] [i_0]) : (arr_7 [i_1] [4])))) ? (!3681837607) : (~54751)))));
                    }
                }
            }
        }
    }
    var_19 = ((-(min(((var_0 ? var_6 : var_9)), var_7))));
    #pragma endscop
}
