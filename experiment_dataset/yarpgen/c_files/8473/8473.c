/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~((-(arr_2 [i_0])))));
        var_10 = ((-44 ? (~1) : (max((107 % var_4), (min(var_3, (arr_3 [i_0] [i_0])))))));
    }
    var_11 = min(var_0, ((((((var_5 ? 39 : var_5))) == (max(var_3, 1))))));
    var_12 = ((((min(var_0, 31))) & (((((-51 ? var_9 : var_7)) == ((var_1 ? 43 : var_7)))))));
    #pragma endscop
}
