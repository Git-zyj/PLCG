/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((((((min(var_5, var_1))) ? (((max(11167, var_1)))) : (min(var_13, var_6))))) ? (((-2147483637 ? 1 : 2147483624))) : ((var_3 ? var_3 : var_9))));
        arr_3 [i_0] [i_0] = ((((((((536868864 ? 3598242214 : 2147483624))) ? var_7 : ((1 ? -2147483640 : 3598242236))))) ? ((min(2147483624, -2147483624))) : ((var_0 ? var_13 : var_11))));
        arr_4 [i_0] = (min(((var_9 ? var_2 : var_11)), ((min(var_2, var_10)))));
    }
    var_14 ^= ((((max(-1700665700, 330347667))) ? ((((max(var_4, var_0))) ? ((var_6 ? var_10 : var_1)) : var_12)) : ((((max(var_9, var_7))) ? ((max(var_5, var_2))) : ((14275 ? -2147483624 : 0))))));
    var_15 = var_8;
    #pragma endscop
}
