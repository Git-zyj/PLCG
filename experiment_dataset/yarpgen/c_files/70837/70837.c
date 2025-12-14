/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 1]);
        var_19 = (arr_1 [i_0 + 1]);
        var_20 = ((((arr_0 [i_0 + 1]) - (arr_1 [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((-6447344709790117031 ? (((arr_1 [i_1 - 1]) ? (arr_3 [i_1]) : 14233037103150927452)) : (arr_1 [i_1 - 1]))) >= ((((arr_3 [i_1 - 1]) ^ (arr_3 [i_1 + 1]))))));
        var_22 = (((arr_2 [i_1 + 1] [i_1 - 1]) ? ((((arr_2 [i_1 + 1] [i_1]) ? (arr_2 [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1])))) : (((((var_13 ? var_15 : (arr_3 [i_1 + 1])))) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1])))));
        arr_4 [i_1 - 1] = (((((var_10 + var_8) + (arr_0 [i_1 + 1])))) ? (arr_3 [i_1 - 1]) : ((27991 + (arr_1 [i_1 - 1]))));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = (511 ? (arr_3 [i_2]) : (arr_3 [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 = ((4294966785 ? 88 : var_5));
                    var_24 = (min(var_24, ((((arr_2 [i_3 - 1] [i_3 - 2]) * -615587744)))));
                }
            }
        }
    }
    #pragma endscop
}
