/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = ((var_13 ? ((50 * ((var_14 ? 15887703464444077067 : var_8)))) : (((((min(0, 8242174943836482971)) < (((32757 ? var_5 : var_2)))))))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (+(max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
        arr_4 [i_0] = ((var_3 ? (arr_1 [17]) : 25361));
    }
    var_21 = ((((var_14 ? (max(-5, var_13)) : (max(var_14, var_15)))) == (~-5)));
    #pragma endscop
}
