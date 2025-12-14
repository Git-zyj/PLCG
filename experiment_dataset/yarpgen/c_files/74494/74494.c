/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = (max(var_10, ((max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (((arr_0 [i_0]) ? (7 & -983716765670010919) : (248 == 13644343823883527426))))))));
        var_11 -= var_2;
    }
    var_12 = var_2;
    #pragma endscop
}
