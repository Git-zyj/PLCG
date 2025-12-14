/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [11] [7] = (max((arr_2 [i_0 - 1]), (max(var_2, (arr_2 [i_0 - 1])))));
        arr_4 [i_0] = ((((!(arr_1 [i_0 - 1])))) >> ((((~((max(1, (arr_0 [16] [i_0])))))) + 22592)));
    }
    var_17 = ((((var_2 ? (var_14 >= var_12) : ((max(var_16, var_13))))) << (((min(var_1, (max(var_5, var_9)))) - 11339479449235324256))));
    var_18 = var_5;
    #pragma endscop
}
