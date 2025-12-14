/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (~var_12);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((~(((arr_1 [i_0]) ? 2097338958 : 2097338958))));
        arr_3 [4] = 12686710696235776941;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_18 &= ((((max((arr_4 [i_1 + 2]), (max(4294967295, (arr_5 [i_1] [i_1 + 2])))))) ? ((-(arr_0 [i_1]))) : (((((!(arr_0 [i_1]))) && (arr_1 [i_1]))))));
        var_19 *= (max(0, (min((arr_4 [i_1 + 1]), (arr_0 [i_1 + 2])))));
        arr_6 [i_1] [i_1] = (!1197806922);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_20 = (max(((min((arr_7 [i_2]), (arr_7 [i_2])))), (((((arr_7 [i_2]) + 2147483647)) << (((((arr_7 [i_2]) + 5686)) - 9))))));
        var_21 = ((!(arr_8 [i_2] [i_2])));
    }
    var_22 = (min(var_22, var_1));
    #pragma endscop
}
