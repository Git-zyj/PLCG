/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((var_7 - (var_9 - var_11))) * (var_1 == var_2)));
        var_17 ^= var_3;
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(var_18, ((min(-var_2, ((var_11 >> (var_11 - 9044))))))));
        arr_5 [i_1 - 1] [i_1] = (max((var_15 | var_10), (98 | -6027585375277780592)));
        arr_6 [3] = (((var_0 | var_8) ^ var_11));
        var_19 -= ((var_2 * (var_14 / var_4)));
        arr_7 [i_1 - 2] = (~var_2);
    }
    var_20 = (((~var_3) == (var_10 - var_5)));
    var_21 = (min(var_1, var_6));
    var_22 ^= (((~var_4) > var_1));
    #pragma endscop
}
