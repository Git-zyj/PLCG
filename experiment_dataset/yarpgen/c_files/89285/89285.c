/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((-((((!(arr_2 [i_0])))))));
        var_10 = (((arr_1 [0]) ? (((((-(arr_0 [i_0] [i_0]))) == -32))) : (arr_1 [i_0])));
        arr_4 [i_0] = ((var_4 % ((((((-(arr_1 [i_0])))) && (arr_2 [i_0]))))));
    }
    var_11 = ((var_5 * ((((var_4 != -29) % (min(var_1, 1907650238)))))));
    var_12 = var_3;
    var_13 = ((((((var_5 >> (var_5 - 3320219422))) + (114 / 548685407))) % ((((var_4 + 255456258) ^ 16585)))));
    #pragma endscop
}
