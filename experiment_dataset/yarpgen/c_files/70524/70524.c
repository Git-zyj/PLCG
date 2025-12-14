/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (max(2147483647, -2147483647));
                arr_5 [i_1] = (2147483647 ? (((arr_3 [i_1]) ? 152 : ((max(var_1, 11563))))) : ((max((18446744073709551610 && 1), var_5))));
                var_13 = ((min(var_9, (arr_0 [i_0] [i_0]))));
            }
        }
    }
    var_14 = ((((((((2032116815 ? 0 : var_1))) ? (var_10 - var_2) : (var_7 - 32767)))) ? (min((max(3641636885294093060, var_6)), var_2)) : (((var_10 ? var_8 : var_8)))));
    #pragma endscop
}
