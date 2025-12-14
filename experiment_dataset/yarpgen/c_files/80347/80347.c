/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 28;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((((2147483647 ? 5370421341794941130 : -2147483647)) * (arr_0 [i_0 - 3] [i_0])))) ? (((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 - 2]) : var_0)) : ((max((min((arr_0 [i_0] [i_0 - 2]), (arr_0 [11] [11]))), 487503277632151510)))));
        var_14 = (max(487503277632151510, ((+(max((arr_0 [i_0] [i_0]), 53))))));
        arr_3 [1] &= (max(var_0, ((9848 / (arr_1 [i_0] [i_0 - 1])))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_15 = (min((arr_5 [14] [i_1]), ((~((-17 ? var_3 : 9848))))));
        var_16 = (max((max(-4, (arr_4 [i_1 - 2]))), (min((arr_4 [i_1 - 2]), (arr_4 [i_1 + 1])))));
        var_17 = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_1 - 2] [i_2] [i_2] = ((((!(~var_11)))));
            arr_9 [i_1 - 1] [i_2] = (min(((~((1240279669 ? var_5 : (-32767 - 1))))), (((((var_2 + (arr_7 [i_2] [i_2])))) ? (~-23) : (arr_7 [14] [14])))));
            var_18 = (((var_2 - -2335297329005778817) + ((((-32767 - 1) - ((-23 ? 23 : (arr_5 [i_1] [i_1]))))))));
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_19 ^= ((~(arr_10 [i_3 - 2])));
        var_20 = (((((((-52 ? 48 : var_9))) ? (max(2713095733, 21180)) : (((((arr_10 [i_3]) <= (arr_10 [i_3]))))))) + (((~((3077041456740137922 ? var_3 : (arr_10 [i_3 - 2]))))))));
        var_21 ^= ((-((max(var_2, (arr_11 [i_3 - 2]))))));
        var_22 = ((((max(((~(arr_12 [i_3 + 1] [i_3]))), (arr_10 [i_3])))) ? var_1 : (min(5370421341794941124, 3))));
    }
    var_23 = (max(var_23, var_12));
    var_24 = ((((((((1 ? var_12 : var_8))) ? -8924 : ((min(17, 70)))))) + ((var_2 ? ((1 ? 60 : var_9)) : -1))));
    #pragma endscop
}
