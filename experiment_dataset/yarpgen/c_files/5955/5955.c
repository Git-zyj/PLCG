/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((13883881756633115523 / (((5544 ? 70368744177663 : 32767))))) >> (((max(10408476299616438026, -173)) - 18446744073709551380))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 ^= (((min(-10408476299616438026, (23 && 25716))) <= (min(((var_9 ? var_0 : 17302372977452005622)), (~5)))));
        var_14 = var_11;
        arr_2 [i_0] [i_0] = (((var_0 ? 7 : 32767)));
    }

    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((-(32751 || var_4)));
        var_15 = 3567309986747978333;
        arr_6 [11] [i_1] = 32767;
    }
    #pragma endscop
}
