/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((var_11 >> var_9) + (max(-var_14, ((max(var_1, 1)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((arr_3 [i_0]) < (arr_3 [i_0]));
        arr_5 [i_0] = ((~(((1 < (((arr_0 [i_0] [i_0]) ? var_18 : var_9)))))));
        arr_6 [i_0] [i_0] = arr_2 [i_0];
        var_21 &= ((arr_1 [1]) <= (arr_2 [0]));
        var_22 &= (((((arr_2 [1]) ? (arr_2 [1]) : 1)) >> (((arr_2 [1]) >> (arr_2 [1])))));
    }
    var_23 = (min((((((max(var_19, var_11))) <= ((max(var_16, var_7)))))), (((var_16 % var_10) * (var_6 == var_12)))));
    #pragma endscop
}
