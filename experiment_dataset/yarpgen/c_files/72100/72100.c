/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((max((((var_7 < (arr_2 [i_0]))), (((arr_0 [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : (arr_3 [i_1] [i_1] [i_1])))))));
                var_17 = ((max((min(-1105272246, var_8)), var_2)));
                arr_7 [8] = -18;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_2] = var_4;

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [0] [0] [i_4] [i_5] &= ((+(max((arr_14 [i_2 + 1] [i_2 + 1] [2] [14]), ((9417839876515396423 ? var_11 : (arr_15 [i_2] [i_4])))))));
                        arr_20 [i_2] [i_3] [i_2] = (((~(arr_15 [i_2 - 1] [i_2 - 2]))));
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_4] [i_5] = (((-111 != (arr_10 [i_3] [i_2]))));
                        arr_22 [i_2] [i_2] [i_4] [i_5] = (99 ? (max(3537655296836935347, 143)) : ((max(-163633550, -58))));
                        arr_23 [i_2] [i_2] [2] [i_5] |= (min((((-((1 ? -1016895606 : 51011))))), (arr_10 [i_2 + 1] [2])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_26 [i_2] [i_4] [i_2] = (~(arr_11 [i_2 + 1] [i_2]));
                        arr_27 [10] [i_2] [i_2] = ((~-99) ? (arr_15 [i_3] [i_3]) : -32755);
                        var_18 &= (~var_6);
                        arr_28 [i_2] [i_3] [i_3] [0] [i_4] [i_2] = (((arr_8 [i_4] [i_4]) < 1));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_19 = (min(var_19, var_16));
                        var_20 = (arr_30 [i_2 - 1] [i_2]);
                        arr_31 [i_2] [i_2 - 1] [4] [i_2 - 1] [i_2] = ((~(arr_15 [i_2] [i_2 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
