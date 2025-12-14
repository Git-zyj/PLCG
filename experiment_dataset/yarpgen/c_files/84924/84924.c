/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(((var_3 ? var_13 : var_3)), (((9892 ? var_11 : var_15))))) - -2739100140));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = arr_2 [i_0];
                var_19 = 2739100140;
            }
        }
    }
    #pragma endscop
}
