/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-5721678124530283290 * (((((20 <= var_8) >= var_10))))));
    var_17 = var_2;
    var_18 = (max(var_18, ((((var_10 ? var_14 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = ((-5721678124530283303 ? 15 : ((((min((-127 - 1), 109))) ? (((arr_7 [i_0] [i_0]) ? (arr_10 [i_4] [i_3] [9] [4]) : -2103122507)) : -5721678124530283270))));
                                arr_13 [i_4] [i_4] [i_1] [i_2 + 2] [i_1] [i_1] [i_0] = (134217728 + 58);
                                arr_14 [i_0] [i_1] [i_3] [i_4] &= ((((((121 & var_10) ? (((~(arr_9 [i_3] [i_3] [i_2] [i_1] [i_3] [i_3])))) : (((arr_7 [i_0] [7]) ? 9 : var_10))))) ? (((!((max(127, 19441)))))) : ((min((!4816339193858466530), 83)))));
                                arr_15 [i_0] [1] [i_2] [14] [i_1] = (min(-2103122524, 110));
                            }
                        }
                    }
                    var_20 = (min(var_20, ((((((arr_8 [i_0] [i_0] [i_0]) ^ (arr_3 [i_0] [19] [i_0]))) >= ((121 ? 4816339193858466530 : (-127 - 1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 += ((~(~109)));
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((-(arr_2 [i_1])));
                                arr_22 [i_1] [i_1] [i_1] [i_0] [14] [i_1] [i_5] = (((arr_16 [5] [i_1] [i_2 + 2] [i_2 + 1]) ? (((((min((arr_2 [11]), (arr_11 [i_0] [i_1] [i_2] [i_5] [i_6])))) && (((-125 ? var_4 : 3752277417)))))) : var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_14 >= 127);
    #pragma endscop
}
