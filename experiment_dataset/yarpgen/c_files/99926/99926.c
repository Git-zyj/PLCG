/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 &= ((((-(arr_0 [i_0]))) < ((-(var_2 || 17763158442179861741)))));
        var_14 &= ((var_12 ? ((-((1694217496 ? var_1 : 0)))) : ((1 ? (((1 > (-9223372036854775807 - 1)))) : ((var_9 ? -1493235160 : 65526))))));
    }
    var_15 = ((1 ? 467830074 : 1));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [2] &= ((-123 ? (((20954 / var_0) * var_1)) : 1));
        var_16 = (arr_4 [i_1]);
        var_17 = ((!(((~((32767 ? var_1 : var_6)))))));
        var_18 = (arr_5 [i_1]);
    }
    #pragma endscop
}
