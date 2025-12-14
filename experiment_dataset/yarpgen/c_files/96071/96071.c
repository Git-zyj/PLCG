/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = ((var_9 >= ((~(((-27 + 2147483647) >> (var_6 - 3142289799405223797)))))));
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_3 [i_0]);
        var_21 = (-5314509516440066058 == -115);
    }
    var_22 = ((~var_14) ? (((27 ^ 10) | var_1)) : (~var_5));
    #pragma endscop
}
