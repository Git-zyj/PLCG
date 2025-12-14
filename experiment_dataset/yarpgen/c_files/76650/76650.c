/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_18 / ((var_5 ? var_8 : var_9))))) ? 9223372036854775785 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [6] [i_2] [6] = ((~(max(((var_14 ? (arr_6 [i_0] [8] [i_2] [i_2]) : (arr_3 [i_0]))), (max((arr_7 [i_0] [i_1 - 1] [14]), 5))))));
                    arr_9 [8] [i_1] [i_2] [i_2] = ((-(var_8 / -69)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [8] [i_2] [i_2] [i_1] [i_4] = (min(((((-1209143201563716072 ? 1209143201563716072 : var_17)) / (min((arr_2 [i_4] [i_1 - 2]), var_0)))), (72 / -11085)));
                                arr_16 [i_2] [i_1] [i_4] [i_3 - 1] [13] [i_3] = (!9936682845909557067);
                                arr_17 [i_4] [i_1] = (((-1209143201563716071 ^ (max(var_13, var_0)))));
                            }
                        }
                    }
                    var_20 = var_6;
                    var_21 += (((127 ? 9936682845909557065 : 40041)));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_22 = ((!((14464824459734205676 || (arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 - 2])))));
                    var_23 = (arr_5 [i_1]);
                }
                arr_20 [i_0] [7] = -1209143201563716072;
                var_24 = 9936682845909557070;
            }
        }
    }
    var_25 = (max(var_25, (((((2100403755 ? var_8 : 9936682845909557082)) << (((((8510061227799994548 - (-127 - 1)))) ? (8510061227799994539 > var_14) : (min(var_13, 394636702451808709)))))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_26 += (((((arr_24 [14] [i_7] [i_6 + 2]) || (arr_24 [i_6] [i_7] [i_6 + 1]))) && (((arr_24 [i_6] [i_7] [i_6 + 4]) || var_10))));
                var_27 = (((arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? ((((arr_23 [i_6 + 2] [i_6 + 2] [i_6]) && var_12))) : ((((arr_23 [i_6 + 1] [i_7] [i_7]) && var_12)))));
                arr_25 [i_6] [i_7] [i_7] = ((~(((4621123174835281297 && 255) ? (9936682845909557068 < 1209143201563716051) : 73))));
                arr_26 [i_6] [i_6 + 2] [i_6] = 2960927263977559397;
            }
        }
    }
    #pragma endscop
}
