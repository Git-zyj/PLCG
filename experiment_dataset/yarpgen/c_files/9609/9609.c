/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 &= (((2783 ? (arr_1 [7]) : (arr_0 [i_0]))));
        arr_2 [i_0] = (((((1 ? 1 : -4968))) + (((arr_1 [12]) ? 4294967295 : 5380520090498217243))));
        var_21 = (arr_0 [i_0]);
    }
    var_22 ^= (((4294967295 ? ((1 ? 161 : -2723495776461929173)) : (((min(-20522, 4967)))))));
    var_23 += (~var_11);
    var_24 = ((65535 ? -1585149914612655843 : -2934873170560085301));
    var_25 = var_5;
    #pragma endscop
}
