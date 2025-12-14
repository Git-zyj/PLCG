/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = var_8;
        var_15 = var_0;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_16 -= var_9;
        var_17 &= (arr_4 [i_1] [i_1]);
        var_18 = (max(var_18, -var_1));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = (((var_7 ? var_8 : (arr_8 [i_2] [7]))));
            arr_11 [i_2] [i_2] = (arr_8 [i_2] [i_3]);
            var_19 = (((((240 ? 96 : -1989258280))) ? var_5 : (arr_6 [i_2])));
            arr_12 [i_2] [i_2] = (arr_9 [i_2]);
        }
        var_20 -= ((var_3 ? (arr_6 [i_2]) : ((var_2 ? ((var_4 ? var_5 : var_2)) : (arr_8 [i_2] [i_2])))));
        arr_13 [1] |= (((arr_6 [i_2]) ? var_2 : (((367657387 ? 1 : -52)))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_21 ^= ((((((!var_1) ? var_8 : var_5))) ? var_0 : (((arr_18 [18] [2] [i_4 - 1]) ? var_2 : ((var_4 ? var_2 : (arr_9 [i_4])))))));
                    arr_20 [i_2] [i_4] [i_2] [i_2] = ((!(~var_6)));
                    var_22 = (max(var_22, var_5));
                }
            }
        }
    }
    #pragma endscop
}
