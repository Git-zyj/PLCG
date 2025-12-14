/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_0));
    var_21 = (((-32755 ? (((min(var_3, 0))) : (max(1, -5674159742387714360))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((((((arr_1 [i_0]) && (arr_1 [i_0])))) & (~-74)))) ? var_11 : var_4)))));
        var_23 ^= arr_0 [i_0];
        var_24 = (max((((7599504460377703643 * (1 >> var_11)))), 7867004864508054894));
        var_25 = ((!((((arr_0 [i_0]) ? 65531 : 0)))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_26 = var_11;
        var_27 = (min((-10579739209201496722 / var_11), (((min(var_2, 4))))));
        var_28 = (max(var_28, (((+((var_17 ? (arr_2 [i_1 - 2]) : (arr_4 [i_1 + 1] [i_1 - 2]))))))));
        var_29 = (max(-7599504460377703644, ((-65 ? (!var_11) : (arr_4 [i_1] [10])))));
    }
    var_30 = var_13;
    #pragma endscop
}
