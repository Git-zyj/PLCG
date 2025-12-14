/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 |= ((12029 ? (arr_0 [2] [5]) : (~-1129069600)));
        var_14 = ((!((min(-var_10, (min(53506, 590100516691929014)))))));
    }
    var_15 = var_10;
    var_16 = var_0;
    var_17 = var_7;
    #pragma endscop
}
