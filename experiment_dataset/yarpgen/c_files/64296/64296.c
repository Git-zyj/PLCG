/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] = (max((arr_1 [i_0] [i_0]), var_6));
        var_10 |= var_9;
        arr_4 [i_0] [i_0] = var_2;
        var_11 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 = (((((((max((arr_5 [i_1]), 15872))) ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1])))) + ((-9927 - (arr_5 [i_1])))));
        var_13 = (((arr_6 [i_1]) * (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_14 = (arr_10 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [i_2] = (arr_8 [i_2] [i_4]);
                    arr_17 [i_2] = (((arr_15 [i_2] [i_2]) ? (arr_15 [i_2] [i_3]) : (arr_14 [i_2] [i_2] [i_3] [i_4])));
                }
            }
        }
        var_15 = (((arr_11 [i_2] [i_2]) ? (arr_14 [i_2] [i_2] [i_2] [i_2]) : (arr_14 [i_2] [i_2] [i_2] [i_2])));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_16 -= ((23324 ? 244 : (arr_8 [i_5] [i_2])));
            var_17 = (arr_13 [i_5] [i_2]);
            arr_21 [i_2] |= (((arr_8 [i_2] [i_5]) ? (arr_8 [i_2] [i_5]) : (arr_8 [i_5] [i_5])));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_18 = (~5658392216153862165);
                        var_19 = (arr_20 [i_2] [i_7] [i_7 - 1]);
                    }
                }
            }
            arr_31 [i_2] [10] [i_2] = (((arr_23 [i_2]) >= (arr_23 [i_6])));
            var_20 = (min(var_20, (~var_3)));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_21 = ((-(arr_27 [i_9] [i_2] [i_2])));
            arr_35 [11] [i_9] [i_9] = (((arr_23 [i_9]) ? 260046848 : var_9));
            var_22 = -var_7;
        }
        var_23 = (((arr_34 [i_2] [i_2] [i_2]) <= ((var_5 ? (arr_18 [i_2]) : (arr_32 [i_2])))));
    }
    var_24 = ((var_3 ? (((~((var_9 ? var_5 : var_2))))) : var_1));
    #pragma endscop
}
