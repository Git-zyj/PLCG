/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(-var_4, (max(1, (((arr_0 [i_0]) | 52764))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 *= (52764 && 65535);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [2] [i_4] = ((((-217 ? 65535 : (((arr_12 [i_0] [i_1] [i_2] [i_0] [i_4]) ? var_2 : (arr_9 [i_0] [6] [i_2] [i_3]))))) ^ (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                            var_17 = ((~(65535 / 52762)));
                            var_18 = ((var_8 + (((-(var_2 > 2853186614))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_19 -= (((!var_7) <= var_12));
            var_20 = (min((min(-255, (var_3 * var_0))), var_4));
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_21 ^= (-(~var_11));
        var_22 = ((((-(arr_0 [i_6]))) - (arr_0 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_21 [12] [12] = ((65535 | (arr_19 [i_7])));
        var_23 = (-(((arr_20 [i_7] [i_7]) + (arr_20 [i_7] [1]))));

        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            var_24 = ((17 >= ((~(arr_19 [11])))));
            var_25 = (arr_20 [i_7] [i_8 - 3]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        var_26 = (((arr_19 [i_7]) > (arr_28 [i_8] [7] [i_10 + 3])));
                        var_27 &= var_14;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_28 &= 187;
        arr_32 [i_11] [i_11] = (min((min((max(var_12, var_1)), (arr_4 [i_11] [i_11] [i_11]))), ((20 ? (var_6 & var_5) : 802964686))));
        arr_33 [i_11] = ((-(-var_9 == var_2)));
    }
    var_29 = (--16191078469835176456);
    #pragma endscop
}
