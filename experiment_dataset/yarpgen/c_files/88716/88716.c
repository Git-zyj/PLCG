/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 *= (max((12497324936988043382 == 12497324936988043382), var_3));
        var_12 = (arr_0 [i_0]);
        var_13 = (((12497324936988043396 < 12497324936988043382) >> (((arr_0 [i_0]) - 163))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] = (arr_3 [i_1]);
        var_14 = ((((((0 ? 4095 : -7245212900230657752))) ? (arr_0 [i_1]) : 1)));
        var_15 |= (((((arr_0 [i_1]) << (((arr_0 [i_1]) - 189)))) > 5949419136721508234));
        var_16 |= (((((-26 ? (arr_2 [i_1]) : ((min(-51, (arr_2 [1]))))))) <= var_10));
    }
    var_17 = var_6;
    var_18 = var_0;
    #pragma endscop
}
