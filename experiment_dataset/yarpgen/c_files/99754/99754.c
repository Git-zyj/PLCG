/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((((5769313344940913712 ? ((((arr_3 [i_1]) <= (arr_3 [i_0])))) : (arr_4 [11] [11] [11]))) != (((!(arr_3 [1]))))));
                var_21 = ((((~(arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]))) <= ((var_9 ? (arr_2 [i_1 + 1] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [12])))));
                arr_5 [i_0] [i_1] = var_6;
                var_22 = (((arr_2 [i_0] [i_0] [i_0]) ? ((+(((arr_0 [0]) ? var_14 : (arr_1 [i_0]))))) : var_14));
            }
        }
    }
    var_23 = ((-117 < ((-((var_11 ? var_1 : var_19))))));
    #pragma endscop
}
