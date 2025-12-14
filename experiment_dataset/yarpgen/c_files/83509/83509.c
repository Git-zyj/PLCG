/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (((arr_0 [i_0 + 2]) ^ 4294967292));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = -1397249518387346819;
            var_13 -= var_6;
            var_14 = 4022692922;
        }
        var_15 = (max(var_15, (arr_4 [i_0])));
        var_16 ^= (arr_4 [20]);
        var_17 *= ((17592186044415 % var_1) > (((max((arr_3 [i_0 - 1] [i_0] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0] [i_0 - 2]))))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_18 = (!196);
        arr_8 [i_2] = var_5;
    }
    var_19 ^= var_2;
    #pragma endscop
}
