/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = ((min(var_4, 11992721169226356998)));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = (((((((arr_7 [i_0] [i_0]) ? -1885053518807611461 : var_0))) ? (((var_1 <= (arr_4 [i_1])))) : var_9)));
                            arr_12 [i_1] [i_1] = (((arr_2 [i_0] [i_0]) ? ((((((1 ? (arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]) : 1))) || 3))) : (arr_9 [i_0] [7] [i_1 + 1] [i_3] [i_3])));
                        }
                    }
                }
                var_10 = (arr_0 [i_1 + 1] [i_1 + 1]);
                arr_13 [i_1] = ((((max((arr_1 [i_0]), (((~(arr_8 [1] [i_1] [i_1] [i_0] [i_1]))))))) ? (min((((1 != (arr_0 [i_0] [i_1 + 1])))), ((var_3 / (arr_6 [i_0] [i_0] [i_1 - 3]))))) : ((max(((var_8 ? (arr_6 [i_0] [i_0] [i_0]) : var_9)), (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [6]) : var_0)))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_11 = min((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]), ((var_3 >> (((arr_20 [i_1] [22] [22] [i_1 - 1] [i_1 + 1]) + 1907)))))), ((((var_9 / var_2) != (arr_18 [i_6] [i_5] [i_4])))));
                                var_12 = (((((min((arr_20 [20] [i_0] [i_0] [4] [i_0]), var_8)))) ? ((((max((arr_1 [i_0]), (arr_9 [i_0] [i_1 - 3] [15] [15] [i_6])))) ? ((var_7 ? var_8 : (arr_17 [i_1] [i_5] [i_5] [i_4] [i_0] [i_1]))) : ((((4273725784277990049 || (arr_21 [i_5] [i_5] [3] [i_5] [21] [i_1]))))))) : (arr_8 [i_0] [i_1] [i_4] [0] [i_1])));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1] [i_1] = ((arr_22 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1 - 1]) < ((((((!(arr_0 [i_0] [i_1]))))) + (arr_18 [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_13 = (!var_5);
    var_14 = (min(((-228621634064136353 > (((var_5 ? var_8 : var_9))))), (((!var_2) != (var_3 < var_9)))));
    var_15 = (min((((var_4 & var_2) * ((min(var_2, var_8))))), ((((var_6 > 3067921405) ^ (var_0 + var_6))))));

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (((((((arr_5 [i_7]) ? (arr_16 [1] [i_7]) : var_7))) ? var_4 : (((var_3 ? var_2 : var_8))))));
        arr_27 [i_7] = ((((((var_3 ? var_5 : (arr_20 [i_7] [10] [i_7] [i_7] [i_7]))) != 26)) ? var_5 : (((arr_3 [i_7]) - 595678183))));
        arr_28 [i_7] [i_7] = ((var_0 ? (((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (max((arr_15 [16] [i_7]), var_3)) : (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) : (!1)));
    }
    #pragma endscop
}
