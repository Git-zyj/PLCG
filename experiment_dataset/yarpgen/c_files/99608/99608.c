/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0] [i_1]) >> ((((arr_2 [i_1] [i_0]) != (arr_2 [i_1] [i_1 - 1]))))));
                arr_6 [16] [0] = (((!(arr_3 [i_1 - 1] [i_1 - 1] [i_1]))));
                arr_7 [i_0] [1] [i_0] = ((37 != (arr_0 [3])));
                arr_8 [3] [1] [i_1] = ((42 ? ((((arr_5 [i_1 - 1] [i_1 - 1] [i_1]) != 0))) : 37));
            }
        }
    }
    var_21 = (~-25);
    var_22 &= ((-(((var_11 < var_18) ? var_18 : ((var_6 ? var_2 : var_15))))));
    var_23 = (min(var_23, var_18));
    #pragma endscop
}
