/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max(var_12, ((((((((arr_1 [i_0] [i_0]) ? 32768 : (arr_1 [1] [i_0]))))) ? (3636833509126322362 < 3656440543) : ((((max((arr_0 [i_0]), (arr_0 [2]))) < (arr_0 [i_0])))))))));
        var_13 |= (arr_1 [i_0] [12]);
        var_14 = (((((((arr_1 [i_0] [i_0]) < -3636833509126322343)))) % (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_15 = (max(var_15, ((((((((arr_0 [i_0]) ? -3636833509126322362 : (arr_1 [i_0] [i_0]))) < ((var_7 ? var_2 : (arr_1 [i_0] [5]))))) ? ((((arr_0 [i_0]) ? -3636833509126322340 : var_6))) : (arr_1 [i_0] [i_0]))))));
        var_16 = (min(var_16, (((((((min((arr_1 [4] [8]), var_9)) >= 35993612646875136))) & ((((3788634152 << (((arr_1 [i_0] [i_0]) - 11740480553839488672)))))))))));
    }
    var_17 = (max(var_17, ((((371992117227481837 && var_6) < ((((max(-2535680057364524613, var_6))) ? 15 : (((-2147483647 - 1) ^ 63)))))))));
    var_18 = (var_6 != 1291751335);
    #pragma endscop
}
