/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (((var_1 || 6551) ? ((((-4202021049130516778 - 4202021049130516765) ? 4202021049130516765 : var_7))) : ((((max(var_2, var_3))) ? 47760 : var_3))));
        var_12 = (((((var_7 ? 41846 : ((18131 ? 19471141521720648 : var_7))))) ? ((var_10 | (min(-4202021049130516786, var_10)))) : 47760));
        var_13 -= (((var_10 < var_7) ? (((((max(var_9, var_1))) ? (var_6 != 47751) : ((var_8 ? var_4 : var_1))))) : (((var_0 ? var_7 : var_2)))));
    }
    var_14 -= (max((((((2580699965 ? var_8 : var_6))) ? var_9 : 21783)), var_4));
    var_15 = var_3;
    #pragma endscop
}
