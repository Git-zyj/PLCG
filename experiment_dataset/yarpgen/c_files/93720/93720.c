/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (((((arr_0 [i_0 + 1]) ? (((arr_5 [i_0] [i_1] [i_2] [5]) + var_6)) : (((arr_7 [i_0] [i_2]) ? -3674747319689947009 : var_6)))) >> (((((var_4 ? var_2 : 6977807663764254593)) >= (3674747319689947039 <= 35))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 -= (max(((41306 ? 3674747319689947008 : 41306)), (((((min(var_8, var_8))) & -28011)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_1] = (max(((~(arr_6 [i_3 - 1] [5] [i_2] [i_0 - 1]))), ((((6977807663764254589 | var_5) >= ((var_6 ? 3674747319689947039 : var_6)))))));
                                var_13 = var_4;
                                var_14 = var_7;
                                var_15 = min(-56, 641824255);
                            }
                        }
                    }
                    arr_14 [i_1] = (min(((min((3674747319689947016 < -25837), var_0))), 8639289142095988418));
                }
            }
        }
    }
    #pragma endscop
}
