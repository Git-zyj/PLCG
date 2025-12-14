/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1;
    var_15 = (((max(var_8, 1)) ? 2116944044 : ((((var_11 == (~69)))))));
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_9;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = ((((((arr_6 [i_1 - 1] [i_1 - 1] [i_1]) ? 78 : 7922))) ? (((7 ^ (~-20516)))) : ((-(0 + -1)))));
            arr_9 [1] [i_1] [i_1] = (((((!32378) ? ((var_12 ? 0 : var_4)) : ((0 ? (arr_0 [i_0] [i_0]) : 7909)))) == -32339));
        }
        var_17 = ((4294967284 ? (max(var_4, (~1))) : (((((var_12 + 2147483647) > (~47531)))))));
        arr_10 [i_0] = (((max(((min(var_9, 244))), (max((arr_5 [i_0] [i_0] [i_0]), 6886270910044813643)))) * ((((max(3601379682, var_5))) ? 1 : (((min(18008, var_0))))))));
    }
    #pragma endscop
}
