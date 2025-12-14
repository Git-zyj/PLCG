/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 |= max(134, 40);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = var_5;
            var_15 = var_10;
        }
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2] = (((((arr_0 [i_2 + 3]) ? (arr_0 [i_2 + 1]) : var_6))) ? 4023074536270382142 : var_2);
        var_16 ^= ((((((((-(arr_1 [i_2])))) ? (((min(var_10, var_2)))) : ((41354 ? 14423669537439169473 : 34))))) ? (max(76, (4023074536270382167 % var_0))) : (((var_4 ? var_1 : ((var_11 ^ (arr_6 [1] [1]))))))));
    }
    var_17 = (!var_0);
    var_18 = (max(var_18, var_7));
    var_19 = (~var_12);
    #pragma endscop
}
