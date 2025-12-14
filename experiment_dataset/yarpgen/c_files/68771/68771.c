/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~0);
    var_13 &= (max(((var_8 ? 15609996 : (!4279357299))), var_0));
    var_14 += (((max(var_4, var_7))));
    var_15 = ((var_4 ? 226 : var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, ((((~var_9) | (((arr_2 [i_0]) ? (arr_1 [i_0]) : 532388371)))))));
        var_17 ^= ((~(((((-(arr_1 [i_0])))) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    #pragma endscop
}
