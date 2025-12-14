/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 238;
        var_14 ^= -24130;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 *= ((((31 ? ((-(arr_4 [6]))) : ((min(-18260, 50))))) >> (((arr_4 [i_1]) ? ((var_9 ? var_11 : 6269474974621666000)) : (((29 ? 32767 : 64012)))))));
        arr_5 [i_1] [i_1] = -var_7;
        var_16 = -928239932;
        var_17 = ((-(((32767 - -759504623) % -var_10))));
    }
    var_18 = ((64 >> ((((((4095 ? 25031 : 5)) % var_6)) - 41))));
    #pragma endscop
}
