/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((~var_5) & var_9))) ? ((((var_8 % var_0) != var_3))) : -var_5);

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 -= var_11;
        var_14 = var_5;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((((!(arr_5 [2] [i_1]))))) == ((~(max(4108, (arr_3 [i_1])))))));
        var_15 = (max((max(var_9, -7539)), ((((-127 - 1) && (arr_0 [i_1 - 1] [i_1]))))));
        var_16 -= (((arr_3 [i_1 - 1]) ? ((0 ? ((((arr_4 [i_1 + 2] [i_1 + 2]) < var_0))) : (~113))) : ((max((arr_4 [i_1 + 2] [i_1 + 2]), (arr_1 [i_1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 -= var_5;
                    arr_15 [6] [i_3 - 2] = (max((max((var_11 % var_2), 115)), (((max(-2, var_9))))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (((((arr_16 [i_4 - 1]) / (arr_16 [i_4 + 1]))) + var_6));
        var_18 = (min(var_18, (((-(((arr_16 [i_4 + 1]) ? var_3 : 1152850093)))))));
        var_19 = var_0;
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = max(var_4, (61417 & var_2));
        var_20 = (max(var_20, var_9));
        arr_22 [i_5] [i_5] = (max(((~(arr_16 [i_5 - 1]))), ((max((arr_17 [i_5 + 1]), 0)))));
        var_21 = (((~var_2) || (arr_17 [i_5 - 1])));
    }
    var_22 = (min(var_22, (((var_10 ? (((max(var_7, 16216936557201575149)) | (var_1 <= var_9))) : ((max(var_4, var_7))))))));
    var_23 = var_7;
    #pragma endscop
}
