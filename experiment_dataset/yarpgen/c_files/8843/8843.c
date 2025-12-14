/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_7;
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((var_8 ? (((max(var_11, var_4)))) : (max((arr_0 [3]), var_3))))) ? ((var_0 ? ((-6954670916701218078 ? 6552390687681957141 : var_2)) : ((((arr_1 [8] [i_0]) ? (arr_4 [16] [i_1] [i_1]) : var_9))))) : var_7));
                arr_7 [i_0] [i_1] [i_0] = var_4;
                arr_8 [i_1] = (((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) : ((min(1382496566, (arr_1 [i_1] [1]))))));
            }
        }
    }
    #pragma endscop
}
