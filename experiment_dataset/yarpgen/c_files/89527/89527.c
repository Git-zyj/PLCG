/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (!1191369187);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 ^= (((arr_3 [i_1] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [1] [10])));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_8 [i_3 + 2] [i_3 - 1] [i_3 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 3])));
                        var_22 = ((!(arr_0 [i_3 + 1])));
                    }
                }
            }
            arr_10 [i_0] = (2883062583 < var_2);
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_0] = var_2;
            arr_15 [i_0] [i_0] = (((-8 > 5989258788258394495) < -40));
        }
        var_23 ^= ((~(arr_3 [i_0] [i_0])));
        var_24 = (arr_5 [i_0] [i_0]);
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 = ((~((-3990174888144668341 ? (arr_16 [i_5]) : var_11))));
        var_26 = (arr_17 [i_5] [i_5]);
        var_27 = ((~((var_18 ? var_6 : (arr_16 [i_5])))));
        var_28 = ((((((arr_17 [i_5] [i_5]) ? (arr_16 [i_5]) : (arr_16 [i_5]))) <= (arr_16 [i_5]))));
    }
    #pragma endscop
}
