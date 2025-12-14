/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] &= -7041811066133181166;
                    arr_8 [i_0] [i_1] [i_2 + 1] [i_0] = ((((((!(((var_9 ? var_2 : (arr_0 [i_2])))))))) * 15032385536));
                    var_16 -= (((!152) ^ ((~(arr_3 [i_0 - 1])))));
                    var_17 = (min(((~(((arr_6 [5] [i_1] [5] [i_2]) | var_13)))), 376023027));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_14 [i_4] = (((arr_4 [i_3]) + (((!123) ? (!105) : 1))));

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_18 [i_3] [i_4] [i_4] [5] = var_3;
                    var_18 = (min(((((5 ^ 5149) && ((((arr_11 [i_4]) ? var_10 : var_3)))))), (!1)));
                    arr_19 [i_3] [i_4] [i_3] = ((127 >> (((-1 % var_5) + (min(274877906943, 1))))));
                }
            }
        }
    }
    #pragma endscop
}
