/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, ((((arr_0 [i_0]) ? 2 : 32451)))));
        var_17 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
        var_18 = (((~(arr_2 [i_0] [4]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 ^= -3;
        var_20 = ((!(arr_3 [i_1])));
        arr_5 [i_1] = (arr_4 [6]);
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 ^= ((arr_6 [i_2] [i_2]) + ((0 ? (arr_7 [i_2]) : 0)));
        arr_8 [i_2] = (((min(-63, (((arr_6 [i_2] [i_2]) + 3060100593558910815))))) ? 1269321780 : -0);
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5] [i_3] [i_3] = (max(((+(max((arr_14 [i_3] [5] [i_5]), 0)))), 6));
                    arr_18 [i_3] [10] [i_5] = ((((((arr_15 [i_4]) - var_9))) ? ((~(max((arr_7 [i_4]), 243)))) : (((32451 ? -32767 : (arr_9 [i_3] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 = ((~(arr_11 [i_3])));
                                var_23 = (min((((((min(90, (arr_9 [i_5] [i_5])))) < 1))), ((-(arr_9 [i_3] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
