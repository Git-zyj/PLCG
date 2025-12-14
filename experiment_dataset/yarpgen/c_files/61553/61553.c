/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? -5847 : -8334309693099886675));
    var_19 = (min(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [12] [i_0] [i_0] = (arr_2 [i_0]);
                arr_5 [i_0] = (((((var_11 << (((arr_3 [i_0] [i_0] [i_0]) + 22467))))) ? ((var_6 ? var_10 : (arr_3 [i_0] [i_1] [i_1]))) : (((var_1 ? -5847 : var_9)))));
            }
        }
    }
    #pragma endscop
}
