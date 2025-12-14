/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((!((((((var_5 ? var_12 : 4485360050519265528))) ? (541966549 & 15755) : var_2))))))));
    var_18 = ((!((((var_8 | 13412920090975248656) ^ 28)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_1 [i_0]) % ((((arr_0 [i_0]) | (-42 > 2708901641))))));
        var_19 = ((+((var_13 ? (-32767 - 1) : 12226))));
    }
    var_20 = (((((((max(12226, 2387167437763321754))) ? (0 % 2708901667) : var_3))) + ((var_7 ? (max(var_0, -7729932670369430144)) : var_15))));
    #pragma endscop
}
