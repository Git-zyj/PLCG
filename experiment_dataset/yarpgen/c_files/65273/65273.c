/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (var_6 * var_3);
    var_17 = (var_3 ? (max(19965, (191 * 191))) : ((((min(var_4, var_11))) | ((min(252, 13872))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = (16 < 93);
        var_20 = (min(var_20, (((((max(32767, 5524214621994327840))) || ((((!(arr_1 [i_0]))))))))));
        arr_2 [i_0] = (max((((arr_1 [i_0]) || (arr_0 [i_0]))), (var_6 || var_15)));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [1] = var_10;
        var_21 = ((((max((((arr_3 [i_1 - 1] [4]) << (((arr_4 [i_1 - 2]) - 18217122716455896263)))), (arr_6 [i_1 - 2] [i_1 - 1])))) ? (min((min(18446744073709551591, (arr_6 [i_1] [i_1]))), ((min(var_12, var_11))))) : -32764));
        var_22 -= min((min((((1099511627775 ? 32512 : var_9))), -443044275080468045)), ((((((arr_6 [i_1 + 1] [i_1]) ? var_13 : 131)) != 32767))));
        arr_8 [0] = (((1 ? (arr_3 [i_1 - 2] [i_1]) : var_13)));
    }
    var_23 &= 12911;
    #pragma endscop
}
