/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = -7484184900153727863;
        arr_5 [i_0] = ((~((((arr_2 [i_0]) >= (arr_2 [i_0]))))));
    }
    var_15 = (((~var_9) > var_4));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 -= (arr_0 [i_1] [i_1]);
        var_17 = (max(((((arr_0 [i_1] [i_1]) <= -32752))), ((((arr_0 [i_1] [i_1]) ? 1 : -75)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (max(var_18, (((((!(!35726))) || 945549982636527677)))));
        arr_10 [i_2] = (59944 / 7484184900153727878);
        arr_11 [i_2] = (((arr_1 [i_2] [15]) * ((235 ? -42 : (arr_3 [i_2])))));
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_19 = (min(17, (((-8203 < (arr_14 [i_3]))))));
        var_20 = (max(var_20, ((((arr_13 [i_3]) * (35236 / 2147483647))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] = ((1251485924 ? 14302 : (arr_17 [i_4 + 1] [i_4 + 1])));
        var_21 = (arr_16 [i_4]);
        arr_19 [i_4] [i_4] = 30;
        var_22 -= var_10;
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_23 [6] = (((max((arr_13 [i_5 - 2]), (arr_13 [i_5 + 1]))) > (max(var_5, (arr_13 [i_5 - 2])))));
        var_23 = (((~2147483647) | ((~((-2147483647 ? 0 : var_5))))));
        var_24 = (((max(var_11, (arr_21 [i_5 + 1] [i_5 - 2]))) << (254 + 28)));
        var_25 = (arr_13 [i_5]);
    }
    #pragma endscop
}
