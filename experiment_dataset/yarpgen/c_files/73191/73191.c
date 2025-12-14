/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_7 ? var_7 : var_16));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) | 9174898665369972158));
        arr_3 [i_0] = (((~-1) ? 20 : (var_4 % var_6)));
        var_18 -= ((~(arr_1 [i_0])));
        arr_4 [i_0] = (((((var_11 ? 30 : -31))) ? (~-1) : (~var_3)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            {
                arr_13 [i_1] [i_1] = var_0;
                var_19 = var_12;
            }
        }
    }
    #pragma endscop
}
