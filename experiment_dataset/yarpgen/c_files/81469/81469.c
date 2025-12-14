/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = -var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [8] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (((((min((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) / (arr_1 [i_0] [0])));
        arr_5 [i_0] = arr_2 [i_0] [12];
        arr_6 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (min(-19648, ((1276832411 ? (arr_2 [i_1] [i_1]) : (arr_8 [i_1])))));
        arr_9 [i_1] [i_1] = -20954;
        var_19 = arr_7 [i_1];
        var_20 = (arr_1 [i_1] [i_1]);
        var_21 -= (((((~60) ? var_0 : (arr_8 [i_1])))) ? (17 / -6858427084383485106) : ((max((min(var_9, (arr_2 [1] [i_1]))), (1921184478 == var_8)))));
    }
    #pragma endscop
}
