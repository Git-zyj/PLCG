/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 += -27479;
        arr_2 [i_0 + 1] = (max(-20041, 65530));
        var_17 = 20041;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_18 = 6675326397522944664;
        var_19 = (max(18204096123122492762, 20041));
        var_20 = (((~20040) ? (min(-1652075828, 113)) : ((((((arr_4 [i_1]) + 1652075828)))))));
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_21 = ((43919 ? -20030 : 23727));
        var_22 = (arr_1 [i_2] [i_2 + 1]);
        var_23 = var_2;
        var_24 = ((((((~20041) != (arr_5 [i_2 + 1])))) & ((32972 ^ (arr_5 [i_2 + 1])))));
    }
    var_25 = (min((((!((min(64, 21521)))))), ((220 ? var_3 : 20030))));
    #pragma endscop
}
