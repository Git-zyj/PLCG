/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_8 ? (max(-39, var_9)) : var_1)), -var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((-(((min(16747, 6805395782335311180))))));
                    var_11 = (max((max((arr_4 [i_0] [i_0 + 1] [i_0]), (arr_4 [i_0] [i_0 - 1] [i_0]))), (max((((arr_4 [i_0] [i_0 + 1] [i_0]) ? (arr_4 [i_0] [i_0] [10]) : (arr_6 [11] [7] [i_1] [i_1]))), 84))));
                    var_12 = (max((arr_3 [i_0] [i_1] [i_2]), ((((6805395782335311170 || (arr_4 [i_2] [i_1] [i_0]))) ? (arr_2 [3] [i_1] [i_0 - 1]) : ((((arr_0 [i_1]) || var_0)))))));
                }
            }
        }
    }
    var_13 &= ((!(((~(~var_7))))));
    #pragma endscop
}
