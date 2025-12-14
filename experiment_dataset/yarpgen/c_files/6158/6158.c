/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((!-16128), var_7));
    var_20 = 18187;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 = var_5;
        var_22 -= 80;
        var_23 = ((((((!(arr_1 [i_0 - 2] [i_0 - 2]))))) | -2382244859));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 += ((var_14 ? ((11520264595611601141 - (arr_0 [i_1] [i_1]))) : (((min((arr_3 [i_1]), (arr_3 [i_1])))))));
        var_25 = arr_0 [i_1] [i_1];
        var_26 = 246;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_27 = (((((min((arr_3 [i_2]), var_9))) | (arr_4 [i_2]))));
        var_28 = var_15;
        var_29 = (~var_15);
        var_30 = (arr_5 [i_2]);
    }
    var_31 += var_12;
    #pragma endscop
}
