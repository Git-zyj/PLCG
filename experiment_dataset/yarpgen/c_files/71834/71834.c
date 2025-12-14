/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(-16351, var_13);
    var_20 |= ((-16351 ? 6154 : 255));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [1] [i_0] = (arr_0 [i_0] [i_0]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (var_3 / var_5);
                        var_21 = var_9;
                        var_22 &= (((~((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_23 *= (((arr_14 [18] [20] [i_4 + 1] [i_4] [i_4 - 1] [i_1]) | (arr_10 [i_4 + 1] [i_4 - 1] [i_4] [13] [i_4 - 1] [i_0])));
                        var_24 = (-16117 <= var_12);
                    }
                    var_25 = ((((-16331 ? (arr_8 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_1]) : -1665369676)) <= (max(-var_4, 20))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_6] [i_0] [i_5] [i_6] = ((-(14599490837685851287 / 16331)));
                                var_26 -= -24952;
                            }
                        }
                    }
                    var_27 = ((16312 ? 16351 : 16331));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    var_28 -= ((((((max((arr_22 [i_7] [10]), 3847253236023700328)) * (-16332 && 1549413803)))) && var_10));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_29 += var_6;
                                arr_34 [8] [i_10] [i_10] [8] [i_10] [8] [i_10] = (((-1549413830 >= 2818) & (min((arr_28 [i_10 - 1] [i_9 - 1]), (min((arr_33 [i_7] [i_7] [i_7] [i_10 - 3] [i_11] [i_7] [i_9 - 2]), var_0))))));
                                arr_35 [i_7] = (max(-16313, 3847253236023700328));
                            }
                        }
                    }
                    var_30 = var_8;
                    var_31 = var_3;

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_32 = 20502;
                        var_33 ^= (((((var_15 + (max((-9223372036854775807 - 1), -120))))) ? ((((-16351 ? var_6 : (arr_23 [i_12]))))) : (max(var_14, (max(1, var_10))))));
                    }
                }
            }
        }
    }
    var_34 = var_17;
    #pragma endscop
}
