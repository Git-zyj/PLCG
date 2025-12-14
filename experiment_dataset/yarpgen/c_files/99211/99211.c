/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(((var_4 <= 0) ? var_1 : -25015))));
    var_17 = ((-(((var_2 + var_1) - -0))));
    var_18 = (max(var_18, (min(var_2, (max(((758490653 ? var_14 : 0)), var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (((min(63488, -30664))));
                arr_4 [i_0] [i_0] = var_1;
                var_20 ^= (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
