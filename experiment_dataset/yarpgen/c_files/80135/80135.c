/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = ((var_3 ? (((~2040) ? var_9 : -9653)) : (min(var_3, ((~(arr_1 [i_0] [i_0 - 3])))))));
        var_11 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_12 = (min(var_12, ((max((~var_6), (~35212))))));
            var_13 = (max(var_13, (1 % 1224691847)));
        }
    }
    var_14 = var_10;
    var_15 = (((((4194303 ? var_6 : 37626))) > ((-var_8 ? (((var_1 ? var_5 : var_6))) : ((9503508664810145716 ? 18446744073709551615 : var_9))))));
    var_16 = (max(var_16, (((-(max(((-32760 ? -187783694 : 411480153)), 10962)))))));
    var_17 = var_8;
    #pragma endscop
}
