/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 4] [i_0 - 4] = (((((((((arr_1 [i_0]) ? var_3 : (arr_1 [24])))) ? ((min(1, (arr_1 [12])))) : ((2786388868886433320 ? 3603691856 : var_12))))) ? (!-1) : (~1)));
        arr_3 [i_0 - 2] = 7594676606989963424;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = ((((!var_1) ? (min(var_12, (arr_7 [i_0] [i_0] [i_2] [i_3]))) : (arr_9 [i_0 - 4] [i_1] [i_0 + 1]))));
                        arr_10 [i_3] |= (arr_8 [i_0 - 2] [i_3] [i_0 - 2] [i_3] [i_0 - 4]);
                    }
                }
            }
        }
    }
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    var_18 |= ((((var_6 ? var_7 : (~0))) % -249));
                    arr_19 [i_6] = (min((((arr_16 [i_5 - 3] [i_5 - 3] [i_6]) ? (arr_16 [i_5 + 1] [i_5 + 1] [i_6]) : (arr_16 [i_5 + 1] [i_5 - 2] [i_6]))), (arr_16 [i_5 - 3] [i_5 - 1] [i_6])));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_19 = ((min((((arr_4 [i_5] [i_6 - 1] [3]) ? var_0 : var_3)), (arr_11 [i_5 - 3]))));
                        var_20 = (!(((((min(1, 58))) ? 127 : ((-1 ? (-127 - 1) : 0))))));
                        var_21 = (arr_14 [i_7] [17] [i_5]);
                        var_22 = (min(var_22, 2716655098935589841));
                    }
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        arr_25 [i_6] [i_6] = ((-2786388868886433321 ? (((max(-27761, 255)))) : -4943743673139632959));
                        var_23 = (arr_4 [i_6] [i_6 + 1] [i_8]);
                    }
                    arr_26 [i_6] = 190;
                }
            }
        }
    }
    #pragma endscop
}
