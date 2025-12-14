/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (min((((var_7 ? 1460185038 : var_5))), ((var_6 ? (~576460752303423488) : (min(var_10, var_7))))));
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((4194303 ? -1 : 4294967295))))));
                    arr_6 [5] [i_1] [i_1] = (((min((((!(arr_1 [i_0])))), ((var_6 ^ (arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? (((var_9 ? 24935 : 24935))) : (((var_10 ? 524143555 : (arr_2 [i_1 + 1] [i_1] [i_1])))));
                    arr_7 [i_0] [5] [i_0] = ((((!(((59046 ? (arr_1 [i_0]) : var_5))))) ? (arr_1 [i_2]) : (((((var_2 ? var_8 : var_9))) ? (var_11 + var_2) : 3770823741))));
                    arr_8 [i_0] [8] [i_0] [i_0] = (((((((var_6 ? 35950 : var_8))) ? ((min(var_5, (arr_1 [i_0])))) : var_6))) ? (((-576460752303423492 | var_0) & (~40601))) : (((arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 1]) ? (arr_3 [i_0] [i_0]) : ((-576460752303423477 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))))));
                }
            }
        }
        var_16 = (min(((min((arr_4 [i_0] [i_0] [i_0]), (min(-14608, (arr_4 [i_0] [i_0] [i_0])))))), (2569568659 / 3770823747)));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 = ((((~(arr_11 [i_3])))) ? var_4 : ((min(3770823741, 1574932101))));
        var_18 = (min(var_18, ((min((arr_9 [i_3]), (((((-717151869488008656 ? var_2 : 2854164191))) ? (~var_6) : ((var_8 ? (arr_11 [i_3]) : var_0)))))))));
    }
    #pragma endscop
}
