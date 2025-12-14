/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((-30964 ? -var_7 : ((var_5 ? var_1 : 22)))), var_9)))));
    var_12 = ((((-30964 && 0) & (min(7160806170145201109, var_6)))));
    var_13 &= 150;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0]) - (-107 - 1)))));
        var_14 = (((((arr_1 [i_0]) + 2147483647)) >> (((!(arr_0 [i_0]))))));
        var_15 = var_10;
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 += -179397505511975798;
        var_17 = (min(var_17, (arr_0 [i_1])));
        var_18 *= max((min((-32767 - 1), -78)), ((min(((-73 >= (arr_5 [i_1]))), (1 && -21425)))));
    }
    var_19 = (max(var_19, var_9));
    #pragma endscop
}
