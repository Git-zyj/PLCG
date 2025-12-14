/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (min(((-((1930666440 ? var_9 : var_5)))), -var_12))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((~((min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 - 1]))))));
        var_14 = (max((((((arr_1 [11]) ? (arr_2 [i_0] [i_0]) : var_10)) >> (((1930666440 + 2364300855) - 4294967271)))), (((arr_0 [i_0 + 2] [i_0 + 2]) % -1809119809))));
        var_15 -= 255;
    }
    var_16 = ((var_6 ? ((-var_0 - ((min(var_4, var_1))))) : (~100131403)));
    #pragma endscop
}
