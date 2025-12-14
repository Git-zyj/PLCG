/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_6, ((var_3 ? (~var_3) : (var_2 >= var_5)))));
    var_11 *= var_8;
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = min(var_6, ((max(1, 779))));
                var_14 = (((((~(!779)))) ? ((max(((6 ? var_3 : var_2)), (arr_2 [i_1] [i_0])))) : (min(((min(767, 28))), 0))));
            }
        }
    }
    #pragma endscop
}
