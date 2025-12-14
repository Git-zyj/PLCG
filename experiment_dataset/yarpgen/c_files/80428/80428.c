/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_19 = -163323408;
        arr_3 [i_0] = (((((max(20374, -163323405)) ? (max(-163323397, (arr_0 [i_0] [i_0]))) : -163323410))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_10 [i_1] [18] [1] &= (((130 <= 13) ? 163323390 : (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1])));
                arr_11 [i_3] = var_1;
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_15 [0] [19] [0] [19] = (((arr_5 [i_2 - 2]) ? ((var_1 ? var_13 : (arr_12 [i_1] [i_1] [i_2] [i_1]))) : ((-(arr_14 [i_4] [i_2] [i_1])))));
                arr_16 [i_1] [i_1] [i_4] = var_5;
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_23 [i_1] [i_1] [i_5] [i_6] = (((((var_5 ? var_16 : var_4))) ? (!70) : ((-163323408 ? var_12 : var_10))));
                        arr_24 [8] [8] [i_5] [i_2] [i_1] = (arr_19 [i_2 - 3] [i_2 - 2] [i_2 - 1]);
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((((-163323413 ? var_8 : 227)) == var_11));
                    }
                }
            }
        }
        var_20 = (((((var_1 ? (arr_19 [i_1] [i_1] [i_1]) : 163323413))) ? (max((arr_18 [0] [i_1] [14]), (arr_19 [i_1] [i_1] [i_1]))) : (((max((arr_17 [i_1] [i_1] [i_1]), (arr_18 [i_1] [18] [i_1])))))));
        var_21 *= ((!((((((23596 << (((arr_8 [i_1]) - 6271172145270153423))))) ? -163323413 : ((1 ? 1 : 12278255311321745004)))))));
    }
    var_22 *= var_11;
    #pragma endscop
}
