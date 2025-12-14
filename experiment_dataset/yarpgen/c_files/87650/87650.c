/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((min((0 != var_9), var_7))), (max((min(var_4, 10931787901596330493)), (var_0 | var_4))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 2] = min((max((max((arr_3 [1]), 0)), ((((arr_1 [i_0]) << (18446744073709551605 - 18446744073709551598)))))), (arr_2 [i_0 - 3] [i_0 - 2]));
        var_11 = ((18446744073709551607 >> (10162 - 10150)));
        var_12 = ((var_0 << (17179869183 - 17179869153)));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_3;
        arr_8 [i_1] = min(((107 - (max(10931787901596330493, 90)))), ((1920 - (max(var_6, 22)))));
        arr_9 [i_1] = (((15863335997564860844 >> (18446744073709551615 - 18446744073709551579))) % ((var_6 ? (arr_5 [i_1 - 2] [12]) : var_6)));
    }
    #pragma endscop
}
