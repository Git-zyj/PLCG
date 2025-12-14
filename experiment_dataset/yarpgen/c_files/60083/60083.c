/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_6 ? (min(((4906934652160567701 ? 12 : var_4)), var_12)) : var_3));
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((1 >> ((((((arr_3 [i_0] [i_0]) * 9)) > 2132275684)))));
        arr_4 [5] = var_1;
        var_20 = (((!18446744073709551615) >> (-4096 + 4097)));
        arr_5 [i_0] [i_0] = max(((0 * ((~(arr_1 [i_0]))))), ((min(50126, (2644253608 > 1)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [11] [i_1] = (((((max(var_4, var_0) > 47195)))));
        arr_9 [i_1] [0] = 65520;
        var_21 = (((17 / 170) || (((((min(18446744073709551599, var_13))) ? var_15 : (min(65533, 42155293)))))));
    }
    var_22 *= (var_16 / var_7);
    #pragma endscop
}
