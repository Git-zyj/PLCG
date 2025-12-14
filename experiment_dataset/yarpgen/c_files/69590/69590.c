/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_0;
    var_17 = (min(var_17, (((((max((!var_11), var_14))) ? (((!(((var_11 ? var_15 : var_8)))))) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((!(((arr_5 [i_0 - 2] [i_0 + 3] [i_0] [i_0 + 2]) == (arr_5 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2])))));
                    arr_6 [i_0] [i_0] [i_1] [5] = 5475386678460097389;
                }
            }
        }
    }
    var_19 = (var_9 ? ((var_13 ? var_11 : var_6)) : (var_15 == var_6));
    #pragma endscop
}
