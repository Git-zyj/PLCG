/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [2] &= (arr_0 [i_0]);
                var_13 += (arr_2 [i_0] [i_1] [i_1 - 1]);
            }
        }
    }
    var_14 = (min(var_14, (((((((-32741 + 32729) ? (((min(var_6, -32744)))) : (max(var_4, 32764))))) ? (max((3988894970 / 32763), var_9)) : var_10)))));
    var_15 = var_4;
    #pragma endscop
}
