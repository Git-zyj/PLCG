/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 *= -var_6;
        var_13 = (!((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0 - 2])))));
    }
    var_14 = ((!((min(((14511126130183316626 ? var_6 : 16)), ((4 >> (var_6 + 387645816))))))));
    var_15 = (((((23895 ^ (min(var_0, 14373881487806742001))))) ? 3387650711 : ((((((var_1 ? 1 : -1296481453))) ? (max(var_0, 239)) : var_1)))));
    #pragma endscop
}
