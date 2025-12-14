/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 &= (((((((1 ? -1718763264474947935 : 2453))) ? -18446744073709551610 : (((2464 ? var_5 : 1))))) != (((((max((arr_2 [i_0] [i_0]), 1521486868))) ? (arr_2 [i_0] [i_0]) : 3256889451)))));
        var_19 = (max(var_19, ((max((~2), ((((arr_0 [i_0]) - 65522))))))));
        var_20 = ((((((arr_0 [i_0]) ^ (max(16979758042222165825, (arr_2 [i_0] [i_0])))))) ? (arr_1 [1] [i_0]) : (~-2479)));
    }
    var_21 = var_13;
    var_22 = var_5;
    var_23 = (((!(((-97 ? var_12 : 11))))));
    #pragma endscop
}
