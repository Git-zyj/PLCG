/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((127 ? (9 ^ 0) : 1))) ? 1 : var_4));
    var_21 = (max((-127 - 1), (var_9 | 255)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(7, 247))) ? (min(-1, 110)) : 1));
        arr_4 [i_0] [i_0] = ((-(max((2774670921605472131 % 1), (((arr_2 [i_0]) + var_17))))));
        arr_5 [i_0] = (min(1073741808, (((!-616795031) + (~var_1)))));
        var_22 = ((max(var_1, -1)));
    }
    var_23 = (max((((((var_16 >= (-127 - 1)))) >> ((((2033198286 >> (((-127 - 1) + 153)))) - 39)))), (((max(89, -17))))));
    #pragma endscop
}
