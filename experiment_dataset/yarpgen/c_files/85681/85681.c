/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = arr_2 [i_0];
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_14 = (max(var_14, var_9));
    var_15 = ((((min(8387584, -8387591))) ? 1369941196596326393 : -88));
    #pragma endscop
}
