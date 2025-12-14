/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_3 / var_7) % (((var_3 + var_5) + (~var_9)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = ((var_3 - (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_12 = (((((var_5 >> (var_1 - 3111683681188072515)))) | ((var_4 ^ (arr_0 [i_1])))));
        var_13 += (((arr_0 [i_1]) ? (arr_2 [i_1]) : -var_0));
        var_14 += var_8;
        arr_7 [i_1] [i_1] = (12728419627174494978 & 0);
    }
    #pragma endscop
}
