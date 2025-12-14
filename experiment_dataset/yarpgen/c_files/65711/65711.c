/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-1 ? -23 : -22));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(36 ^ 2087244735)))) ? var_10 : 17525));
        var_18 = (max(((var_0 ? (!var_4) : -var_14)), (((var_11 + (!var_8))))));
        var_19 ^= var_8;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_20 &= ((~((-(max(-1752600504, 38592731))))));
        var_21 = (max(var_21, (((min(-var_11, 1884965212))))));
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_22 = ((((max((7 - 32762), ((-2966 - (-2147483647 - 1)))))) ? (((-var_6 - ((var_11 ? var_2 : var_8))))) : -var_14));
        var_23 = (min(var_14, ((var_6 ? (var_12 <= var_6) : (max(var_14, var_13))))));
        arr_9 [i_2] = ((max(var_8, (var_6 / var_2))));
    }
    for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
    {
        arr_12 [4] = ((((min(var_15, ((var_13 ? var_11 : var_11))))) ? (var_13 == var_11) : (!var_12)));
        var_24 = (!7);
        var_25 = ((var_7 ? -2147483647 : (min(1, -6877997033185260051))));
    }
    var_26 += var_8;
    #pragma endscop
}
