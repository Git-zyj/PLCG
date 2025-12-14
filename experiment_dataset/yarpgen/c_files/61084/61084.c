/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((var_10 ^ (-9223372036854775807 - 1)));
                arr_5 [i_0] [i_0] [i_0] = var_5;
                arr_6 [i_0] [i_1] = 9223372036854775807;
                arr_7 [i_1] = ((((((1800356779 ? var_8 : (arr_0 [i_0] [i_1]))))) ? (((arr_1 [i_1] [i_1]) >> (((min(var_3, (arr_3 [i_0] [i_0] [i_1]))) - 7659)))) : (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_16 = (min((min(var_9, (var_9 % var_1))), (-9223372036854775807 - 1)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] &= ((var_10 % ((((arr_12 [i_2] [i_2] [i_2] [i_2]) % var_3)))));
                    arr_16 [i_2] [i_2] [i_4] |= (1 < -4825032142536946597);
                    arr_17 [i_3] [i_3] [i_3] [i_3] = (arr_9 [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_5] [i_5] [i_5] &= (((min((arr_0 [i_8 - 3] [i_8 - 2]), (arr_0 [i_8 - 2] [i_8 - 2]))) | (arr_21 [i_8 + 1])));
                        arr_31 [i_8 + 1] [i_6] [i_6] [i_8 + 1] = 30;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_7] [i_7] [i_5] = (((((!(((-4825032142536946597 ? (arr_25 [i_5] [i_5] [i_6] [i_7]) : (arr_23 [i_9]))))))) >= (((0 >> 1) ? ((min(var_9, -81))) : (arr_27 [i_5] [i_5] [i_7] [i_9])))));
                        arr_36 [i_9] [i_6] [i_6] [i_6] [i_5] = ((-1910856741480247851 ? (((((arr_1 [i_6] [i_9]) != ((((arr_32 [i_5] [i_5] [i_6] [i_7] [i_6]) ? var_8 : var_10))))))) : var_12));
                    }
                    arr_37 [i_6] = 255;
                    arr_38 [i_6] [i_6] = 1;
                }
            }
        }
    }
    #pragma endscop
}
