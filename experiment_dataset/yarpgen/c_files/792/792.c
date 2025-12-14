/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 = ((((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [10] [8])))) ? (arr_2 [i_0]) : ((((arr_2 [i_0]) > 101))))) * (arr_1 [5])));
        var_14 = (!30268);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_15 &= var_7;
        var_16 = (((max(var_1, 3943536593882549034)) & ((((arr_2 [i_1 + 1]) ? var_11 : var_5)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 |= var_1;
                var_18 = ((~(((((-11949 & (arr_5 [i_2] [i_2])))) ? 11961 : (arr_1 [i_2])))));

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    arr_14 [i_2] [i_3] [i_3] = var_12;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 += (~var_4);
                        arr_17 [i_5] [i_3] [i_3] [i_2] = (((arr_16 [i_2] [15] [i_2] [i_2]) ? var_10 : (arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 2])));
                        arr_18 [i_2] [i_2] [i_3] [i_5] = (-11949 ? var_2 : var_2);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_20 = (((arr_11 [1] [5] [i_4 - 2]) ? (arr_11 [i_3] [i_4 - 2] [i_4 - 2]) : var_7));
                            arr_27 [i_3] [i_3] = (arr_23 [i_2]);
                            var_21 = (((((!(arr_11 [i_2] [i_3] [9])))) > var_2));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_22 ^= (((arr_26 [i_2] [i_2] [i_4 - 1]) && (arr_26 [i_6] [i_6] [i_4 - 2])));
                            var_23 = -2688;
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_24 = (max(var_24, ((((1 >= var_8) ? 2290676856 : (!var_5))))));
                            arr_34 [i_2] [1] [i_4] [0] [i_2] |= (arr_4 [i_4 + 1]);
                            var_25 |= (((-(arr_26 [3] [16] [i_9]))) & -var_12);
                            var_26 = var_4;
                        }
                        var_27 = var_5;
                        var_28 = (min(var_28, ((((arr_11 [i_4 + 1] [i_6] [i_6]) & 7894719906041945755)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
