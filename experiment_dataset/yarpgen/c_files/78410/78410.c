/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((max(var_8, var_0)) != ((var_16 ? -1967788647844769544 : -6024386058168016053))))) ^ var_14)))));
    var_18 = var_5;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 <= ((min((min((arr_0 [9]), 1)), var_7)))));
        arr_3 [i_0] [i_0 + 1] = ((-(arr_0 [i_0 - 1])));
        var_19 = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1967788647844769538;
        var_20 ^= (!-68);
    }
    var_21 *= var_0;
    #pragma endscop
}
