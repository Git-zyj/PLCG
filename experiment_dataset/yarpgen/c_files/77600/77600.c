/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 += ((((~((65534 ? 1 : 45)))) | ((~(1639237284 >= 4294901761)))));
        arr_2 [0] = 1767423654;
        arr_3 [i_0 - 2] = (min((!7339667873060683051), 116));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [1] = (min((min((~4294901735), (arr_1 [11] [10]))), (((~4294901735) & (arr_7 [7] [13])))));
        var_17 = (min(var_17, 1767423661));
    }
    var_18 ^= ((var_1 ? var_8 : var_10));
    #pragma endscop
}
