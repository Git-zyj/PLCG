/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((arr_2 [i_0 + 2]) + 2147483647)) << (((((arr_2 [i_0 + 2]) + 2608)) - 5))))) ? ((-121 / (arr_1 [i_0 - 1] [i_0 + 2]))) : ((var_5 ? 2 : ((var_2 ? (arr_1 [i_0 + 1] [i_0]) : var_0))))));
        arr_4 [i_0] [i_0 - 1] = (min(121, -121));
        var_10 = ((((((120 ? -122 : -1)) + 9223372036854775807)) >> (-25670 + 25701)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_11 = (((102 == 0) && ((((arr_8 [i_1] [i_1]) / var_2)))));
        arr_9 [i_1] = ((((((((var_3 / (arr_6 [i_1])))) ? ((min((arr_6 [i_1]), (arr_6 [i_1])))) : 1))) ? ((max(var_4, (arr_6 [i_1])))) : (max((((-98 ? var_6 : var_0))), (40 / 6075745361119698981)))));
    }

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_12 = (((16 / 1252654810) - ((((arr_0 [i_2] [i_2 + 1]) == var_3)))));
        var_13 = (((((-1978389091 ? 11 : -123))) ^ (-8790 + var_7)));
        var_14 = ((((3881691409 ? var_4 : 1)) << ((((122 ? var_4 : var_8)) - 2796605098))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_15 = (min(var_15, (-122 >= 1029766964)));
        var_16 = (((arr_14 [i_3] [i_3]) || (arr_14 [i_3] [i_3])));
        arr_17 [i_3] = (16131 >= var_4);
        arr_18 [i_3] [i_3] = (var_3 >> 1);
    }
    var_17 |= (8771 % -121);
    var_18 = ((-6 ? 17899708074584487383 : 25670));
    #pragma endscop
}
