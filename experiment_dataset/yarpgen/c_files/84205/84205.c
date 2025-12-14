/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 3316448756;
    var_14 = 978518558;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_15 += (((arr_0 [i_0]) % (arr_0 [0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 += ((~978518540) ? 0 : (arr_0 [i_1]));
        var_17 = ((~(((!(arr_0 [15]))))));
        arr_5 [i_1] = ((((min((arr_4 [i_1]), (((127 ? 978518540 : 213)))))) ? ((((978518518 ? 3316448777 : (arr_3 [1] [i_1]))) - (arr_3 [i_1] [i_1]))) : 0));
        arr_6 [4] [i_1] |= 2147483647;
    }
    var_18 = var_5;
    #pragma endscop
}
