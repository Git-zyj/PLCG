/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((9223372036854775807 ? var_6 : (min(var_17, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1 - 1] [i_1 - 1] [i_1] = (((((-32746 ? (arr_2 [11] [i_1]) : (max(-9223372036854775807, (arr_7 [i_0] [i_1] [3])))))) ? (((((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) == (arr_3 [i_1 + 1]))))) : (((((var_7 ? (arr_4 [i_2 + 1] [i_1] [i_0]) : (arr_2 [11] [i_1 - 1])))) ^ (min((-9223372036854775807 - 1), 32746))))));
                    arr_11 [i_0] [i_0] [i_0] = (max((max(((((arr_5 [i_0] [7] [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_3 [i_0])))), 4294967275)), (((((1 ? 0 : (arr_4 [i_0] [i_0] [i_0])))) & var_15))));
                }
            }
        }
    }
    #pragma endscop
}
