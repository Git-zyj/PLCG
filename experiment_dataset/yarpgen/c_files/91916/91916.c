/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((var_14 / ((~(((arr_2 [i_0]) | var_4))))));
        var_21 = ((-((((arr_1 [i_0]) < var_1)))));
        arr_3 [i_0] [i_0] = -0;
        var_22 = (min(var_22, ((max(32767, (((!-7484450363738498468) + -1)))))));
        var_23 = ((max((arr_0 [i_0]), (var_4 != var_2))));
    }
    var_24 = (-var_6 >> (((((var_15 + var_1) * var_9)) - 14432147586617853964)));
    var_25 |= max(((min((7484450363738498468 || 32767), (var_15 != var_5)))), var_13);
    #pragma endscop
}
