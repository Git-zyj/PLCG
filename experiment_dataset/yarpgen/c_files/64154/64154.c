/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_10 ? 1 : 127))) | (min(8398852451120056291, (((1 ? 1675653219 : 125)))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_17 = (9759552483366731992 && 8687191590342819638);
        arr_3 [i_0] = (((((1 ? -32 : 2157916005))) ? ((((min((arr_1 [i_0]), 63))) ? (((min(-68, -114)))) : var_13)) : (((((max((arr_0 [7]), (arr_1 [i_0])))) << ((min((arr_1 [i_0]), (arr_1 [i_0])))))))));
    }
    #pragma endscop
}
