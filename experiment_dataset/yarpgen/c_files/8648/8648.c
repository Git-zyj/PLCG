/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_11 = var_9;
        var_12 = ((((arr_0 [i_0 - 2]) == 82)));
        var_13 |= ((-(((-99 + 2147483647) >> (82 - 53)))));
        arr_2 [i_0 + 2] [i_0 + 2] = (((((min(var_4, var_6))) ? var_10 : ((min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (min((arr_5 [i_1]), (arr_3 [i_1] [i_1])));
        var_15 = (((((((~(arr_5 [1])))) ^ (((arr_3 [12] [12]) ? var_7 : -82)))) > (!var_4)));
    }
    var_16 &= (((82 ? 7 : 110)));
    var_17 = var_0;
    var_18 = (((!var_1) / var_9));
    #pragma endscop
}
