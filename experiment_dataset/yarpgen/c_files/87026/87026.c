/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-20670 + (((2353315500 < 354914522) % 3940052774))));
    var_13 *= (min(var_7, 5520031866509258456));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 |= var_1;
        var_15 = (min(var_15, var_9));
        var_16 &= max((max((arr_2 [i_0] [i_0]), (max(5520031866509258456, 5464)))), (((((max(47263, 18273))) << (!5396688484082370879)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = var_4;
        arr_6 [i_1] = (((min((max(22209, 11350439639808577809)), (var_11 != var_6))) < (max(var_6, (arr_4 [i_1])))));
    }
    #pragma endscop
}
