/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = 103;
                    var_17 = (min((((!((max((arr_6 [i_0 - 2] [0] [1]), 127)))))), (((arr_5 [i_0 + 2]) ? var_3 : (arr_5 [i_0 + 1])))));
                    var_18 |= -27884;
                }
            }
        }
    }
    var_19 -= (max(((((var_14 >= 0) ? ((var_6 ? var_3 : var_0)) : -10789))), var_1));
    var_20 = (max(var_12, (((var_13 ? 13097 : (553846684 - 553846684))))));
    var_21 = (var_14 <= 1972370641);
    var_22 = var_6;
    #pragma endscop
}
