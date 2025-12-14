/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_8 ? -var_8 : var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((-61979 < ((var_5 ? 0 : 3566))));
        arr_5 [i_0] = 3551;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (min(var_9, ((~((0 ? var_5 : 11988152379627940043))))));
        arr_9 [i_1] [i_1] = (min(var_2, (~var_4)));
        arr_10 [i_1] [8] &= (~var_2);
        var_13 -= var_2;
    }
    var_14 = ((-1 ? var_2 : var_4));
    #pragma endscop
}
