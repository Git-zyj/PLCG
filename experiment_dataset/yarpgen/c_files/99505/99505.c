/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 705252289;
    var_21 = (max(var_2, (((var_11 ? (~var_16) : var_0)))));
    var_22 += ((6 ? 0 : -1));
    var_23 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_24 -= ((4294967295 ^ (((-2147483647 - 1) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_1])))));
                var_25 = (max(var_25, var_2));
            }
        }
    }
    #pragma endscop
}
