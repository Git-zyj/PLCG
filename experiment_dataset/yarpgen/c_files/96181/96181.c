/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((-105 ? 1 : -4282656503647489497))) ? ((var_1 ? ((var_2 ? var_6 : var_14)) : var_16)) : var_10)))));
    var_20 = var_1;
    var_21 = (max(var_21, var_17));
    var_22 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [3] [i_1] [i_0] = var_11;
            arr_6 [i_0] [i_1] [7] = var_14;
            var_23 = (max(var_23, var_1));
        }
        var_24 = (max(var_24, var_7));
        var_25 ^= var_13;
    }
    #pragma endscop
}
