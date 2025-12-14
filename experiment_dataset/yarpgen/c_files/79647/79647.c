/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((-2147483632 <= 5481715203763920813) ? 9 : 65535));
                    arr_9 [i_0] [i_1] [i_1] = ((((min(1, (arr_0 [i_1])))) ? (min(((~(arr_7 [i_0] [i_1] [i_0] [i_2]))), 222)) : ((-(max(503316480, var_6))))));
                    var_13 = (((arr_4 [i_0]) < (((var_11 ? var_5 : (arr_1 [1]))))));
                    arr_10 [i_1] [i_1] = (min(((503316502 ? (min((arr_4 [i_2]), (arr_3 [i_0] [i_0] [i_0]))) : (((arr_6 [i_0] [12] [i_2] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : var_10)))), ((((arr_4 [i_1]) ? (var_5 < var_12) : (((arr_3 [i_2] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : 22)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = var_12;
                }
            }
        }
    }
    var_14 = var_12;
    var_15 = (var_2 != 4294967295);
    #pragma endscop
}
