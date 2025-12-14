/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 += var_0;
        var_16 += (arr_2 [8] [i_0]);
        var_17 = (max(5794320376549107334, 729293228));
        var_18 = -27419;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (226 && (arr_4 [16]));
        arr_7 [i_1] = (arr_1 [10]);
        var_19 = (max(var_19, (((-((~((min(var_1, (arr_3 [6])))))))))));
        arr_8 [i_1] = ((21309 < ((2028043877 ? 11 : (arr_3 [2])))));
    }
    var_20 ^= var_5;
    #pragma endscop
}
