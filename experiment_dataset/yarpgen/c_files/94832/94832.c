/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? var_14 : var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((((((min(var_9, (arr_2 [i_0] [i_1] [i_0])))) != -var_13)) ? (!32767) : (min(var_5, (((var_1 ? 32767 : var_2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 2] [i_0] [1] [i_0] [i_0] = ((((min(var_11, var_0))) ? (min((min((-32767 - 1), (arr_10 [i_0]))), var_0)) : (-2147483647 - 1)));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = var_9;
                                var_17 ^= (((((((208671335714930116 ? var_11 : var_10))) ? (min((arr_1 [2] [2]), (arr_6 [i_0] [i_3] [i_0] [6]))) : (((2147483647 ? 12877 : var_10)))))) ? (min((min(-32767, var_5)), (~var_10))) : ((min(((81 >> (var_3 - 1484149562))), ((min(var_7, var_13)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4 - 1] = ((-((-(arr_0 [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_8] [i_7] = 1;
                            var_18 &= (((!2147483641) ? ((((min(var_5, (arr_0 [5]))) > 135))) : (min(var_10, var_6))));
                            var_19 = (min(var_19, (((((var_0 ? (min(var_5, (arr_15 [i_5]))) : (((var_1 ? (arr_4 [i_6] [i_6]) : var_0))))) < (!32767))))));
                        }
                    }
                }
                var_20 = (121 / 32767);
                arr_26 [9] [i_5] = ((((min((min(2147483647, var_4)), var_0))) ? (((var_1 * (arr_21 [i_5] [i_5] [i_6])))) : (max(((var_0 ? var_12 : var_0)), 2147483639))));
                arr_27 [6] [i_5] = (~-5084);
            }
        }
    }
    #pragma endscop
}
