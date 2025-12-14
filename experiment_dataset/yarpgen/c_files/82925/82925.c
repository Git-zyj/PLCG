/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((min((arr_0 [8]), (arr_1 [i_0]))) >> ((((var_9 ? var_7 : (arr_0 [i_0]))) - 4181009686)))) % (((~((-(arr_2 [i_0]))))))));
        arr_4 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 += ((-(((((18608 ? (arr_7 [i_1] [i_1]) : var_11))) ^ (max(3228202687085528482, var_3))))));
        var_21 = 4232953528905638068;
        var_22 = (arr_7 [i_1] [i_1]);
        var_23 = (((((arr_7 [i_1] [i_1]) * (arr_7 [i_1] [i_1]))) + -3228202687085528482));
        var_24 |= ((((((-19 - 10515) ? ((121 ? 9742449203574820407 : 19473)) : (!-121)))) ? (min((arr_5 [i_1]), (min(10510, var_9)))) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 ^= (((((-((var_10 ? -26254 : (arr_5 [i_2])))))) ? (((((max((arr_7 [i_2] [i_2]), (arr_8 [i_2])))) ? (arr_7 [i_2] [i_2]) : (((arr_9 [i_2]) ? var_12 : -95))))) : ((1 ? ((((arr_8 [i_2]) - (arr_8 [i_2])))) : ((-3228202687085528492 / (arr_6 [i_2])))))));
        var_26 = (max(var_26, (arr_6 [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_27 = (arr_1 [i_3]);
                var_28 = ((min(var_15, -3228202687085528482)));
            }
        }
    }
    var_29 = var_15;
    var_30 *= (min(-1, (max(var_12, ((var_3 ? 6368419427816939528 : var_5))))));
    #pragma endscop
}
