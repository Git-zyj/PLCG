/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((max((arr_2 [i_0]), (arr_2 [i_0]))) % (((max(-3171, 115))))));
        arr_4 [i_0] [i_0] = ((!(arr_0 [9])));
        arr_5 [i_0] = (((((~((32745 << (268369920 - 268369908)))))) | (max((((-7406918975833778879 ? 36 : -268369921))), (((arr_2 [i_0]) ? 1861007933 : 1))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (((~0) ? (var_5 | -59) : (((arr_7 [i_1] [i_1]) | (arr_7 [i_1] [i_1])))));
        var_16 = 2147483647;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (((arr_9 [8]) ? ((max(var_10, (arr_11 [i_2])))) : (max((max((arr_6 [i_2]), 7476147709134480006)), (arr_6 [i_2])))));
        var_17 = (arr_1 [i_2]);
    }
    var_18 = ((((var_5 >> (((~var_7) - 11477982424839240702)))) | var_3));
    var_19 = (max((~var_15), (((~(~-268369921))))));
    var_20 = -47;
    #pragma endscop
}
