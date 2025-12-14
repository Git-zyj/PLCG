/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 -= (((var_6 ? var_5 : (((8400064592031187281 ? var_4 : (arr_0 [4])))))));
        var_16 = (max(var_16, (((((((((arr_1 [i_0 - 1]) + 9223372036854775807)) >> (((arr_1 [i_0 - 1]) + 1532418810895347018))))) ? ((~((1 ? -242431284006835570 : (arr_0 [10]))))) : (max(((max(1482790816, var_2))), var_12)))))));
        arr_2 [i_0] = ((~((2812176462 ^ (1482790816 | 2812176479)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((8172923040409220641 - (max(1482790816, 10273821033300330996)))));
        var_18 = (min(var_18, (((((((arr_3 [i_1] [i_1]) ? 2812176471 : (1482790816 < 10273821033300330975)))) ? (arr_3 [i_1] [i_1]) : ((8172923040409220641 ? 56 : ((-(arr_4 [i_1]))))))))));
    }
    var_19 = var_10;
    #pragma endscop
}
