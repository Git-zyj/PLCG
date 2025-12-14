/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-(min(var_1, var_4)))) ^ var_5));
    var_16 = (var_14 || var_3);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((((var_14 ^ (arr_0 [i_0]))) / ((-1709 ? 1 : (arr_1 [i_0])))))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((min((var_1 % var_13), (660499383 && var_7))) + var_8));
        arr_6 [i_1] [i_1] = ((((var_5 & var_10) >> (var_9 - 3621))));
        arr_7 [i_1] [i_1] &= (((((min(var_4, 0)))) ? (((((1 >> (var_9 - 3615)))))) : ((((var_1 >> (142 - 123))) << (((var_11 ^ var_10) - 16472))))));
        var_18 = ((((min(var_7, (arr_5 [i_1])) - 11350))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_19 = ((((((min(var_5, var_12)) & (arr_9 [i_2] [i_2])))) ? (~var_8) : (arr_9 [i_2 + 1] [i_2])));
        var_20 &= (max(228, 1));
        arr_10 [i_2 + 1] [i_2] = ((((var_1 - (arr_9 [i_2] [i_2]))) - ((-18561 ? 13733412290882663383 : -11350))));
    }
    var_21 = ((((((var_7 - var_0) - var_4))) ? (((min(-11359, var_6)))) : (var_4 <= var_4)));
    var_22 *= var_6;
    #pragma endscop
}
