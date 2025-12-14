/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_14, (var_16 - var_9)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((1 == (((arr_2 [i_0]) ? (arr_2 [i_2 + 1]) : 0))));
                    var_19 = (max(var_19, (((((((max(15841350966189251619, (arr_1 [i_1] [1])))) ? (arr_6 [i_2]) : var_10))) ? (((~((((arr_0 [i_0] [i_2]) || var_17)))))) : (min((arr_4 [i_2] [i_2 + 1] [i_2 - 2]), (arr_4 [i_2] [i_2 + 1] [i_2 + 1])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_0] [i_3] = (-(max((arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [2]), (arr_4 [i_0] [i_4] [i_4 - 1]))));
                    arr_13 [i_3] [i_3] [i_3] &= (1 ? (((arr_8 [i_4 + 1] [i_3]) ? (arr_6 [i_4 + 1]) : (arr_8 [i_4 + 1] [i_3]))) : (((((arr_9 [i_0] [i_3]) + 2147483647)) << (((((arr_9 [i_4] [i_3]) + 1020298530)) - 27)))));
                    arr_14 [i_0] [i_0] [3] [i_0] = min((min(var_0, 0)), (arr_2 [i_3]));
                }
            }
        }
    }
    var_20 = ((!(((var_13 ? (3840 != 55906) : ((var_8 ? var_5 : 25722)))))));
    #pragma endscop
}
