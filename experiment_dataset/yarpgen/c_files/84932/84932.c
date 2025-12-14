/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [21] = var_10;
        var_16 = (max(var_16, ((max(((!(arr_2 [i_0]))), ((7350237249081716701 == ((-29308 ? 7350237249081716701 : var_13)))))))));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = 26353;
        var_17 = (~var_6);
        arr_7 [8] = (9418 / 26330);
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_12 [8] [i_2] &= 3265263023778621110;
        var_18 += (((((33554431 % (arr_4 [i_2 + 4] [8])))) ? (((-(arr_4 [i_2 + 4] [i_2])))) : (min((arr_4 [i_2 + 4] [i_2]), -1702425723812966139))));
        arr_13 [i_2] = ((14148 ? 26365 : (min(-42119464088510516, 1980507455))));
        arr_14 [i_2] [1] &= var_2;
    }
    var_19 = -2831828497952267530;
    #pragma endscop
}
