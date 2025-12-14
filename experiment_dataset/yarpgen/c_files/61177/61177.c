/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 &= ((61837 & 1518561598) == (((arr_3 [18] [18]) << var_6)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] = (-1518561613 && -1518561590);
                        var_12 = (max(var_12, (((((var_10 / (arr_4 [16] [i_1] [16]))) - ((((1518561601 & 1) & 237))))))));
                        arr_14 [5] [i_0] [i_2] [i_2] [8] = (((-162366317 - var_5) == ((var_10 * (arr_5 [i_0] [i_0])))));
                    }
                    var_13 = (((((((arr_7 [i_0]) + 2147483647)) >> (var_5 - 1638055996))) * ((-12028 % (arr_7 [i_0])))));
                }
            }
        }
        var_14 = (-12028 * 650412106);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_15 = ((1 | (arr_12 [i_4] [i_4] [i_4] [i_4])));
        var_16 ^= ((arr_15 [6]) || (arr_11 [i_4] [i_4]));
        arr_17 [i_4] = (var_9 < var_1);
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_17 = (var_7 + (arr_11 [i_5] [16]));
        var_18 &= (((arr_12 [i_5] [i_5] [i_5] [i_5]) != (arr_12 [i_5] [i_5] [i_5] [i_5])));
        var_19 = ((34 >= ((((arr_20 [i_5]) || (arr_18 [1] [i_5]))))));
        var_20 = (max(var_20, (((44038 * (arr_8 [i_5] [4] [18] [i_5]))))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = (((arr_3 [i_5] [12]) && -1518561580));
            var_22 = (1518561598 > 178);
            var_23 = (var_7 ^ 26622);
        }
    }
    #pragma endscop
}
