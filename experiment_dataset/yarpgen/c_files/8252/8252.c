/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (((!215) ? ((var_5 ? var_1 : -6105703294151124573)) : var_3)) : var_1));
    var_11 |= -var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] &= var_1;
                var_12 = ((((min(((-(arr_4 [i_0 - 1] [i_1] [i_1]))), (var_1 && 236)))) ? (var_3 - var_6) : var_5));
                var_13 = ((((((var_5 ? (arr_1 [i_0]) : 15)))) ? 2036 : (((!(arr_2 [i_0 - 1]))))));
                var_14 = 1129398591650174233;
            }
        }
    }
    #pragma endscop
}
