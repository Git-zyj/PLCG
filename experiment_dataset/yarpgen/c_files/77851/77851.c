/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_11 = ((var_1 ? var_9 : var_3));
            arr_7 [i_1] = ((((((max(37, 55871)))) != (max(var_8, var_3)))));
        }
        var_12 += var_0;
        var_13 = 242;
    }
    var_14 = ((((((3304532319 ? 2147483647 : var_2))) ? -15 : -var_10)));
    var_15 = var_7;
    #pragma endscop
}
