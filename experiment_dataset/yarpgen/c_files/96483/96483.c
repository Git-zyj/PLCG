/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (var_9 / var_13)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [5] = (((-70460443 ^ 9561722002548027300) + (arr_0 [i_0])));
        arr_5 [i_0] = (((arr_3 [i_0] [i_0]) != ((var_4 ? (min(var_8, var_5)) : (((arr_3 [i_0] [i_0]) ? var_7 : (arr_3 [i_0] [i_0])))))));
        arr_6 [i_0] [i_0] |= ((((1 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - 22206));
    }
    var_18 = 8885022071161524315;
    var_19 = (max(var_19, (((((var_12 <= (((min(var_1, var_8)))))) ? ((min((min(38165, var_0)), -3319311133888501148))) : ((var_15 ? (min(1, var_7)) : var_10)))))));
    #pragma endscop
}
