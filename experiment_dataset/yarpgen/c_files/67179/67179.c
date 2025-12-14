/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 2] = ((((1654154182 ? (~var_6) : (var_5 / 1654154156))) / ((8 ? (((2640813113 ? var_6 : var_8))) : ((2640813100 ? 1654154182 : 65533))))));
        arr_4 [i_0] = ((1 && ((((((1654154189 >> (var_2 + 1153826662)))) ? ((1654154195 ? var_10 : var_9)) : -13473)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1 - 2] = ((-((254 ? 9706941281122671188 : 1654154185))));
        arr_9 [i_1 - 2] [i_1] = ((((16106127360 ? 1654154186 : 2640813106)) / ((16042 ? var_12 : 184))));
        arr_10 [i_1] = var_10;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = ((~((-17202 ? var_7 : var_5))));
            arr_13 [i_2] [i_1] = -var_3;
            arr_14 [i_2] [i_2] = 92;
        }
        arr_15 [i_1] = ((1 ? var_12 : 1));
    }
    var_16 = (((~(-32 || var_8))));
    #pragma endscop
}
