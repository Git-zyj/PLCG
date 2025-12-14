/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [9] = (((max(var_15, var_16)) == (((((57518 >> (240 - 222))) ^ 45)))));
        arr_5 [i_0] [2] = (max(((var_10 ? var_6 : (((var_0 ? var_16 : 45))))), (((var_11 != ((min((arr_1 [i_0]), var_11))))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_11 [1] [1] = ((~(((154 ^ 0) ? ((var_0 ? var_15 : var_9)) : ((((((arr_9 [i_2]) + 2147483647)) >> (var_12 - 1197374228))))))));
            arr_12 [21] [i_2] &= (min(((1752265931 ? 3301489637158565004 : ((max(5582172191348901481, -148767094))))), (((21 ? var_4 : (arr_6 [20]))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_16 [18] = ((arr_7 [1]) ? ((-(arr_8 [i_3] [i_3] [i_1 + 3]))) : (arr_8 [18] [i_1 + 4] [4]));
            arr_17 [i_3] [12] = (min((~21573), (min((!90355865), (min(822275720, 32767))))));
            arr_18 [i_3] [i_3] = (arr_9 [1]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [i_1] [11] [i_4] = (arr_14 [1] [i_1 + 1]);
            arr_22 [10] [i_4] = 45;
        }
        arr_23 [i_1] [i_1] = (max(var_15, (~var_8)));
        arr_24 [9] [i_1] = (min(((((var_11 ? var_11 : 45)))), (max((arr_10 [i_1 - 1]), (arr_10 [i_1 + 1])))));
    }
    var_17 = (max((~var_11), var_4));
    var_18 = var_5;
    var_19 = ((7379238886656121740 ? 2943776323 : 527831692));
    #pragma endscop
}
