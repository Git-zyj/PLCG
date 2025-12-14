/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((791218841 & (~var_4)))) ? (+-2147483632) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [8] [i_0 - 1] [8] &= (max((((var_4 ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 - 1])))), ((var_12 ? (arr_2 [i_0 - 1]) : var_3))));
                var_14 = (arr_3 [i_1]);
                var_15 = ((((((arr_0 [i_0] [i_0 - 1]) ? var_9 : (arr_5 [i_0 - 1] [4] [i_0])))) ? var_4 : (((arr_2 [i_0 - 1]) / var_3))));
                arr_8 [i_0] [i_0] = (((((-(min(-2147483632, 1651663472))))) % (((-2147483643 & var_5) ? (arr_2 [i_1]) : (-2147483610 - -595617384)))));
            }
        }
    }
    #pragma endscop
}
