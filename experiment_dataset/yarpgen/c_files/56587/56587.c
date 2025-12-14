/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [12] [i_1] = ((var_6 ? (!19) : (!var_1)));
            var_12 -= (max((max(var_8, 685215152)), ((((arr_4 [i_0] [8]) - var_6)))));
            arr_6 [i_0] [i_1] = (max((min(6919782904469105119, var_7)), var_6));
            var_13 = (arr_1 [i_0]);
            arr_7 [i_1] = (min((max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))), var_3));
        }
        var_14 &= ((((arr_3 [i_0] [2]) != (min(var_7, -6919782904469105120)))));
    }
    var_15 = var_2;
    #pragma endscop
}
