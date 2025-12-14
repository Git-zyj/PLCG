/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = 0;
                    var_20 = (min(var_20, (arr_0 [i_1] [i_2])));
                    var_21 = (min(var_21, (!var_13)));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = (((((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [3])))) ? 15829314136982473136 : 58)));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_22 = (-2147483634 != 2147483634);
                        var_23 = (min(var_23, (((((arr_3 [i_1] [i_2] [4]) ? (((arr_2 [i_0 + 2] [i_1]) ? 0 : 15)) : (!var_16)))))));
                        arr_10 [i_3] [i_0] = -556354601;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [6] [6] [i_0] [i_2] [i_2] [6] = (min(((min((arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3]), (arr_9 [i_0] [i_0 + 2])))), (((arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3]) ? (arr_9 [i_0] [i_0 + 2]) : (arr_9 [i_0] [i_0 + 2])))));
                        arr_15 [i_4] [i_0] [i_2] [i_0] [4] = (((arr_9 [i_0] [i_2]) ? (arr_8 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4]) : 556354601));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_24 *= ((((max((arr_3 [i_1] [i_0 + 3] [i_0 - 1]), (arr_3 [i_0] [i_0 + 2] [i_0])))) ? ((((((-1869511876 ? var_12 : (arr_11 [i_1] [i_5])))) ? ((~(arr_0 [i_1] [i_1]))) : 1869511875))) : (max((arr_11 [i_1] [i_0 + 2]), 0))));
                        var_25 = (max(525815537, ((((arr_11 [i_1] [i_0 + 1]) ? (arr_12 [8] [i_0 + 3] [4] [i_1]) : (arr_11 [i_1] [i_0 - 1]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                var_26 = (!13646110939825795262);
                arr_25 [i_6] = (arr_23 [13] [i_7] [2]);
            }
        }
    }
    var_27 = (min(var_27, ((max(((!(((4 ? 1353025500 : 4294967295))))), (!var_11))))));
    var_28 = ((~((1 ? 18446744073709551611 : (((-(-127 - 1))))))));
    #pragma endscop
}
