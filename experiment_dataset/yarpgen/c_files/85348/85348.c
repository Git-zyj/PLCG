/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] &= (max((((((2098795582170157722 ? var_8 : var_11))) ? var_2 : (((var_1 ? (arr_0 [i_1] [i_0]) : var_4))))), ((max(((8388607 ? (arr_2 [i_0] [i_0] [i_1]) : var_8)), ((var_1 ? (arr_2 [1] [i_1] [i_1 + 2]) : var_8)))))));
                var_12 |= ((((((min((arr_0 [i_0] [i_0]), (arr_1 [i_1] [i_1])))) * ((4294967295 ? 0 : 1)))) * (arr_2 [1] [0] [i_0])));
            }
        }
    }
    var_13 = (0 ? var_0 : var_6);
    #pragma endscop
}
