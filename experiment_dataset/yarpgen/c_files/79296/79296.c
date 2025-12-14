/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (min(var_1, 2064640937));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (max(var_6, ((max(215, var_3)))));
        var_12 = (max((arr_0 [i_0 + 1] [i_0 - 3]), (((min((arr_1 [i_0]), var_2)) - ((((arr_0 [i_0] [i_0]) ? var_9 : 100)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max((arr_5 [i_1]), (-2147483647 - 1)));
        var_13 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = var_0;
        var_14 = (((arr_6 [i_2]) || 96));
    }
    var_15 = var_6;
    #pragma endscop
}
