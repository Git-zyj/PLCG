/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_12 = -var_10;
                            arr_17 [i_1] = (((((arr_5 [i_0]) ? var_10 : var_0)) > (!48)));
                        }
                        var_13 = ((var_9 ? (min((arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_3 - 1]), var_10)) : 48));
                    }
                }
            }
        }
        var_14 = (max(var_14, var_10));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = 48;
        var_15 = ((var_9 ? (arr_18 [i_5]) : (((-2085953133 > (arr_21 [i_5]))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_35 [i_8] [i_7] [i_8] [i_8] [i_8] &= var_10;
                            var_16 ^= ((!(arr_27 [i_7 + 2] [i_6] [i_9 - 3])));
                            var_17 ^= ((4765138313914522947 ? 5929807123064434744 : 305117901));
                            var_18 ^= (max((arr_34 [i_6] [i_7 + 3] [i_8] [23] [i_8]), ((-(arr_34 [17] [i_9] [17] [i_9 - 3] [i_9])))));
                        }
                        var_19 = (arr_24 [i_9] [i_8]);
                    }
                    var_20 &= (arr_25 [i_6] [8] [i_8]);
                    var_21 = (max(var_21, ((((-(arr_32 [i_6] [i_6] [i_8] [i_7 - 1] [i_8])))))));
                }
            }
        }
    }
    #pragma endscop
}
