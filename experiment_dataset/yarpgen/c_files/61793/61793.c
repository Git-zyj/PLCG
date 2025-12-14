/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = var_9;
        var_14 |= ((-1238611929 & ((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (max(var_15, (((((max(((-21 ? var_8 : 0)), (max((arr_2 [i_1] [i_1]), 36271))))) - 13049539728634079836)))));
        var_16 = (-(((arr_3 [i_1] [12]) ? (arr_2 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_17 = ((((((arr_2 [2] [i_2 - 2]) && 156))) << (-100 - 130)));
        var_18 = (((arr_5 [i_2 - 3] [i_2 - 3]) ? (arr_5 [i_2 - 3] [i_2]) : 5397204345075471780));
        var_19 = ((-(arr_5 [i_2 - 3] [i_2])));
    }
    var_20 = var_3;
    #pragma endscop
}
