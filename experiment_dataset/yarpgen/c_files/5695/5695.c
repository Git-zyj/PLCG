/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 -= ((!(~9223370937343148032)));
        var_13 += (max((((arr_1 [i_0]) ? (9223370937343148032 - -161813367) : (min(1370812332647545539, (arr_0 [1] [i_0]))))), var_10));
        var_14 = (max(var_14, 17075931741062006079));
        var_15 ^= var_0;
    }
    var_16 = (min(var_16, -4240989959020247426));
    var_17 = (max(var_17, ((min((min(var_6, 4240989959020247426)), var_0)))));
    #pragma endscop
}
