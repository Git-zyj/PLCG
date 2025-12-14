/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_3, var_13)))) ? (((32762 <= ((255 ? -652526625 : var_8))))) : (((!(((var_8 ? var_16 : var_4))))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_5 | (arr_0 [i_0 + 4])));
        arr_3 [i_0] = ((-((-(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((-(arr_5 [i_1] [i_1 + 3])));
        arr_7 [i_1] [i_1] = (max((~34659), (min((min((arr_5 [i_1] [i_1]), (arr_4 [i_1]))), (((253 ? var_10 : 160)))))));
        arr_8 [i_1] [i_1 - 1] = (max((max((~-5029904268030448801), (-1367869044414929383 % 4294967291))), (((((max(255, 0))) ? var_7 : 248)))));
    }
    #pragma endscop
}
