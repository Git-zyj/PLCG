/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [8] [i_2] = (max(((var_18 >> (var_9 - 4280712575))), ((max((arr_2 [i_0]), (arr_8 [i_0] [i_0] [i_0 + 1] [i_3]))))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] |= (arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_0 + 1]);
                                arr_15 [i_2] = var_16;
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((-1828862207 << (((((arr_5 [i_3] [i_2] [i_0 - 1] [i_0]) << (((arr_5 [i_1] [i_0] [i_0 + 1] [i_0]) - 230)))) - 526385135))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] = ((((-((~(arr_5 [i_2 + 1] [i_2 + 1] [1] [i_2]))))) | (~var_3)));
                                arr_21 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_5] = var_6;
                                arr_22 [i_2] [i_1] [i_1] [i_1] [i_1] = var_14;
                            }
                        }
                    }
                }
                arr_23 [i_0 + 1] = (((!(arr_1 [i_0 - 1]))));
                arr_24 [i_0] [1] = (~16362080441575858420);
                arr_25 [i_0] [i_0] = (((((16362080441575858428 ? var_12 : 27))) ? ((((2084663632133693196 && (arr_17 [i_0] [i_1] [i_1] [i_1] [i_0]))) ? (((var_4 && (arr_7 [12] [12])))) : -32753)) : (((arr_18 [1]) ? 62047 : (arr_4 [i_0 + 1] [i_0 + 1])))));
            }
        }
    }
    var_19 = 130;
    var_20 = (min((!var_17), -65535));
    #pragma endscop
}
