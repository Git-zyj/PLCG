/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [1] [i_0 - 1] = (((max(1604, var_5))));
        arr_3 [i_0] = ((((((arr_1 [i_0 + 3]) - (arr_1 [i_0 + 2])))) > (((((-2131587949 ? (arr_1 [i_0 + 1]) : var_5))) ? 2002572465 : 9223372036854775807))));
    }
    var_16 = (max(((((var_8 ? var_14 : var_9)) - var_9)), (!var_1)));
    var_17 = var_8;
    #pragma endscop
}
