/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_1);
    var_11 = (max((((var_7 < (max(2216615441596416, var_4))))), (var_7 - 23434)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((-((var_2 ? (arr_0 [i_0] [12]) : 2147483647))))) * 18444527458267955199));
        arr_3 [i_0] [i_0] = -1;
        var_12 += ((((min((arr_0 [i_0 + 2] [i_0 + 2]), ((3661328571 ? (arr_0 [i_0] [i_0]) : 2147483646))))) ? ((((((var_3 ? -23135 : (arr_0 [i_0] [i_0]))) > ((var_7 ? (arr_0 [i_0] [8]) : (arr_1 [i_0]))))))) : (((((arr_1 [i_0]) == var_5)) ? -11232 : (min(202361716, var_8))))));
        arr_4 [1] = (((((3603830769 ? -10150 : -70)) ? (arr_1 [i_0 - 1]) : var_1)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_13 = var_5;
        var_14 = var_5;
    }
    #pragma endscop
}
