/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = 14206693683832676595;
                var_11 = (((-23630 ? var_7 : (arr_1 [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_12 += (((!(((var_8 ? var_9 : (arr_3 [i_2] [i_3] [i_3])))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_13 = (~3526460120);
                    var_14 += (((arr_2 [16] [i_3] [i_2 - 1]) ? ((((arr_9 [i_2] [i_3] [i_2]) << (((arr_9 [i_2] [8] [i_2]) - 182))))) : ((1 ? (arr_7 [i_2 + 2]) : (arr_14 [i_2] [i_2])))));
                    arr_15 [i_2] [i_2] [i_2] [1] = (!1);
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_5] [i_2] [i_5] [i_5] = (((arr_17 [i_2] [1] [i_2 - 1]) ? (arr_17 [i_2] [i_2] [i_2 - 2]) : (arr_17 [i_2] [i_2] [i_2 - 2])));
                    arr_19 [i_2] [i_3] [i_3] [i_5] = ((0 | ((65519 ? (arr_6 [i_2]) : (arr_9 [i_5] [i_3] [i_2])))));
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] [i_6] [i_7] = (max(((~(arr_2 [i_2] [i_6 - 1] [1]))), var_0));
                            arr_25 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2] = (min(65518, (arr_0 [i_2] [i_2])));
                        }
                    }
                }
                var_15 = ((((((241 || (arr_3 [i_2] [17] [i_2])))) << (((((arr_14 [i_3] [i_2]) | var_5)) - 17941765862272184313)))));
            }
        }
    }
    #pragma endscop
}
