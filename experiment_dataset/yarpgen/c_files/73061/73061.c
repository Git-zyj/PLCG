/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((~((var_16 ? var_15 : var_3)))), (min(var_15, (var_1 & var_7)))));
    var_20 = ((!(~var_5)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_5 + (arr_1 [i_0]))) - (arr_1 [i_0]))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_21 = (arr_1 [i_1 - 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        var_22 ^= 0;
                        var_23 += 37;
                    }
                }
            }
            arr_12 [i_0] [8] [10] &= (((var_10 + 2147483647) << (((arr_9 [4] [i_0] [i_1 + 1] [i_1]) - 48569))));
            arr_13 [i_1] = var_14;
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_24 *= (((arr_10 [i_0] [i_4 + 1] [i_0] [i_0] [i_4] [i_0]) ^ (arr_10 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_25 = 1;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_0] [1] = ((-(min(((37 ? var_8 : (arr_3 [0]))), ((min(var_14, 0)))))));
            var_26 = ((+(((arr_9 [6] [i_0] [i_0] [i_5]) ? var_13 : (arr_9 [10] [10] [i_0] [10])))));
            var_27 = arr_6 [i_0] [i_5];
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_28 = (min(var_28, (((18 ^ ((~(arr_4 [i_0]))))))));
            var_29 -= (~1);
        }
        var_30 = var_15;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 *= (arr_22 [i_7]);
        var_32 *= (((~(min(var_6, (arr_21 [i_7]))))));
        arr_23 [i_7] = ((~((~(arr_22 [i_7])))));
        var_33 += (min(var_16, ((37 >> (((arr_21 [i_7]) - 17443761310927849406))))));
    }
    var_34 = var_1;
    #pragma endscop
}
