/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = 4102924744;
                arr_4 [i_0] [i_1] = var_16;
                var_21 = (!2683226719);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_22 = 2683226719;
                arr_11 [i_2 + 3] [i_3 - 1] [i_3] = (~(-var_5 == var_14));
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = 1611740576;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_24 &= -1;
                    arr_20 [i_5] [i_5] [i_6] = ((((min((var_8 | 13), (3568852237 / 1611740566)))) - ((((((arr_7 [i_4] [i_4]) | 262143))) ? (min(var_2, var_17)) : (2683226719 > 262143)))));
                    arr_21 [i_5] [i_5] [i_5] = (min((((((var_5 ? 4294705153 : (arr_6 [i_5] [i_5])))) ? var_14 : ((((arr_14 [i_5] [8]) ? var_0 : 58053))))), -7924987412631934263));
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 21;i_7 += 1)
    {
        var_25 = ((-(((!((min(-12698, 12097))))))));
        var_26 += (!262125);
        arr_26 [i_7 - 4] &= var_11;
    }
    var_27 = ((((var_15 ? var_15 : var_17)) * (((((58101 ? var_8 : var_11)) ^ (!var_11))))));
    #pragma endscop
}
