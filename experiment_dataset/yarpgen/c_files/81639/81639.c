/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((max(2097151, 10))) ? (max((arr_3 [i_0]), (arr_2 [i_0] [i_0]))) : var_4)) - ((((!(arr_2 [i_0] [i_0])))))));
        arr_5 [i_0] = (max((-2147483647 - 1), -66));
        var_21 = (max(var_21, ((((((arr_0 [0]) | (arr_1 [10]))) / ((-(arr_1 [4]))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 += 6967065555423702048;
        arr_10 [i_1] [5] = var_5;
        var_23 = (min(var_23, 1));
    }
    #pragma endscop
}
