/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 |= ((+(min((arr_3 [i_1 - 2] [i_0 - 1]), 1313362666))));

                for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = var_6;
                                var_15 = (max(var_15, 15199763999885525876));
                            }
                        }
                    }
                    var_16 = (!-5);
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_17 = (arr_1 [i_5 + 2]);
                    var_18 = (1910167705 ? 236 : var_2);
                }
                for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_19 = (32767 ? (!31260) : (((!((max((arr_6 [i_0] [i_0]), 1)))))));
                    arr_20 [0] [i_0] [i_0] [i_0] = (max(((~(arr_16 [i_0]))), (arr_16 [i_0])));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_20 = ((((max((arr_8 [i_1 + 2] [i_0 + 2] [i_1 + 2] [i_8 + 1]), (arr_13 [i_1 + 3] [i_1] [i_8 - 2] [i_7] [i_0 - 1])))) ? ((1544890709 ? 111 : 448)) : (arr_17 [i_0] [i_6] [i_0] [i_0])));
                                var_21 = ((((~(arr_11 [i_6 + 2] [i_0 + 1] [i_8 - 2] [i_1 - 1])))) ? ((max((arr_7 [i_6 + 2] [i_0 - 1] [i_8 + 1] [i_1 + 1]), (arr_7 [i_6 - 1] [i_0 + 1] [i_8 - 2] [i_1 + 3])))) : (((arr_11 [i_6 + 2] [i_0 + 2] [i_8 - 1] [i_1 - 1]) / (arr_7 [i_6 + 2] [i_0 - 1] [i_8 - 2] [i_1 + 3]))));
                                arr_26 [i_0] [i_7] [i_7] [i_7] [i_1] [i_1] [i_0] = ((((0 ? (arr_0 [i_0]) : (arr_5 [i_0] [7] [i_8]))) != (arr_16 [i_0])));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((!((min(((17774 ? -1375670140 : var_8)), (arr_22 [i_0] [i_0 + 2] [i_1 + 2] [i_1] [i_1])))))))));
                arr_27 [i_0] [i_0] = ((!(((0 - ((var_7 ? var_3 : var_1)))))));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
