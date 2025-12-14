/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((-543032761 ? (((8387584 | 543032738) ? ((max(var_4, var_6))) : (!-4473))) : (var_18 | var_1)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [13] = -543032761;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 -= ((-((+(max((arr_5 [i_1] [i_2 + 2]), 543032730))))));
                    var_21 = (((((~(arr_2 [14])))) | var_12));
                }
            }
        }
    }
    var_22 = ((!((var_14 || (!var_6)))));
    var_23 = ((((((63488 ? var_9 : var_1)) ? (min(-29733, var_13)) : 1))));
    #pragma endscop
}
