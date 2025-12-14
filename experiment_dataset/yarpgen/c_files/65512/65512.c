/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = max((max(1, 809035655)), var_4);
        var_10 -= ((var_4 ? (((-((var_0 ? var_5 : var_5))))) : var_6));
        var_11 = ((((max(var_8, ((var_0 ? var_9 : -1))))) ? 18446744073709551597 : (((((((-2147483647 - 1) ? var_0 : var_9))) ? (min(114629549, 2147483647)) : -114629556)))));
    }
    var_12 = ((-659614045625268709 ? (-2147483647 - 1) : var_0));
    var_13 -= ((var_7 ? var_3 : var_9));
    var_14 = (max(var_14, (!2147483638)));

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 -= (!-114629572);
        var_16 -= (max(((var_6 ? var_7 : ((var_0 ? 268435440 : var_8)))), (((var_8 ? (((max(var_7, var_1)))) : 3548883804)))));
        var_17 = (max((((-127 - 1) ? 4294967285 : 2645132466)), (((-var_3 ? (min(var_3, var_1)) : ((var_4 ? var_9 : 0)))))));
    }
    #pragma endscop
}
