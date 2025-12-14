/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_10;
    var_17 = ((((!(((3562143333523219554 ? var_13 : var_14))))) ? -3562143333523219554 : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 *= (arr_0 [i_1]);
                        var_19 = (min(var_19, 3562143333523219554));
                    }
                }
            }
        }
        arr_13 [i_0] = var_2;
    }
    #pragma endscop
}
