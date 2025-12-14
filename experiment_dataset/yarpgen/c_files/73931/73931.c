/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((max((var_8 > var_0), (min(6, var_3)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = 441887409940586994;
        var_17 = -var_11;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_18 = (min((max(1, (arr_3 [i_1 + 2]))), 667283090));
        arr_4 [i_1 + 3] [i_1 - 2] = (((1 - -441887409940586994) ^ 441887409940586995));
        var_19 -= (min(((0 ? 1 : -430237738)), (arr_2 [i_1 + 3] [i_1])));
        arr_5 [i_1] = (min(-441887409940587002, 153));
        var_20 = ((((min((arr_3 [i_1 + 2]), ((((arr_3 [i_1]) == (arr_2 [i_1] [i_1]))))))) ? (((max((arr_2 [i_1 + 3] [i_1 - 2]), var_1)))) : ((((max(var_0, -441887409940587003))) ? 441887409940587015 : (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 -= 441887409940586994;
        arr_8 [i_2] [7] = (max((arr_2 [i_2] [i_2]), ((var_9 ? (441887409940587017 && -441887409940587001) : 0))));
        var_22 = ((((((max(-441887409940587019, var_3))) ? (arr_1 [i_2]) : 441887409940587000)) - ((((arr_6 [i_2]) ? (~var_1) : 14750)))));
    }
    var_23 = (min(var_23, var_5));
    var_24 -= (((((var_6 ? (var_5 + var_6) : var_13))) ? 1291200962 : ((var_1 + (1291200966 + -441887409940587008)))));
    var_25 = (var_9 >> 2);
    #pragma endscop
}
