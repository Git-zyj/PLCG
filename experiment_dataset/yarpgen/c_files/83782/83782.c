/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8351733419582317102;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_17 = (max((arr_0 [i_0]), ((var_3 ? (((120 ? 63 : -120))) : (var_13 * 2731073707)))));
        arr_4 [1] = (arr_1 [4] [4]);
    }
    var_18 = var_7;
    var_19 ^= ((var_2 + ((((var_0 ^ 63) + 120)))));
    #pragma endscop
}
