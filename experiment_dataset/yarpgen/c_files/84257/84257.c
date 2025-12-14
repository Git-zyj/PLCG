/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((var_3 < (5865409 && var_7)))), (min(var_5, ((var_13 ? var_4 : var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (((((arr_2 [i_0] [i_1 - 1] [i_1]) ? (((arr_1 [i_1]) ? 1097994365 : var_7)) : (((2 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) >> (((((((arr_0 [i_0]) > (arr_4 [i_1] [i_0] [i_0]))) ? ((83 ? -83 : var_6)) : -83)) - 18446744073709551525))));
                var_22 = (((((18054203674760479252 & (arr_0 [i_1 + 2])))) ? (arr_1 [i_1 + 1]) : (arr_3 [i_1 - 1])));
            }
        }
    }
    var_23 = -72;
    #pragma endscop
}
