/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((((!(arr_1 [18]))) ? (min((arr_0 [12]), (arr_1 [0]))) : (((arr_0 [16]) ? (arr_0 [18]) : (arr_1 [12]))))))));
        arr_2 [i_0] = max(1493177413, 1);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 |= ((var_14 ? 27634 : ((((((arr_3 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [3] [i_1]))) <= (((max(41, (arr_3 [i_1] [i_1]))))))))));
        var_19 -= ((((((arr_1 [16]) >= ((-(arr_1 [10])))))) | ((((arr_4 [i_1] [i_1]) < var_1)))));
    }
    var_20 = var_2;
    var_21 = (min(var_21, var_12));
    var_22 = ((~(((var_8 == var_6) ? var_14 : (var_14 >= 15625967487613930494)))));
    #pragma endscop
}
