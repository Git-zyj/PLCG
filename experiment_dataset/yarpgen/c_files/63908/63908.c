/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = ((((var_13 + (arr_5 [i_0])))) | (max(6136487531448069611, var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 9368705624696908679 : (((arr_16 [i_1] [i_1] [i_2 + 1] [i_2 - 2] [i_2]) | var_2))));
                                var_15 = ((min((~4332996731990928486), (arr_2 [i_4]))) & ((var_9 >> (((arr_14 [i_2 - 1]) - 7233902870139294706)))));
                                arr_18 [i_0] [i_1] [i_2 + 1] [8] [i_1] [i_3] = ((((((~12310256542261482010) * (arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1])))) ? (arr_12 [i_0] [i_0] [11] [i_0] [i_0] [i_0]) : ((-(arr_14 [i_2 + 1])))));
                                var_16 = (min(var_16, ((((min((arr_0 [i_0] [18]), (arr_9 [i_0] [i_0] [i_0]))) ? (arr_4 [i_0] [i_0]) : var_9)))));
                            }
                        }
                    }
                    arr_19 [i_1] = (((((var_5 ? 4332996731990928461 : var_10)))) ? ((min(((((arr_13 [2] [2]) < 10379870883803052754))), (arr_15 [i_2] [i_2] [5] [i_2] [i_2])))) : (((arr_4 [i_1] [i_2 + 1]) | (min(4332996731990928461, (arr_8 [i_0]))))));
                    var_17 = (((arr_9 [i_0] [i_1] [i_2]) < ((((((arr_12 [i_1] [i_1] [i_2] [i_2] [i_1] [16]) * var_3)) != (3068461030809320529 >> 1))))));
                }
                arr_20 [i_0] [i_1] = (arr_9 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 = var_5;
                                var_19 = (~var_1);
                                arr_31 [i_7] = (min(9078038449012642936, ((max((((arr_25 [i_0]) <= var_1)), (!11519455077304563369))))));
                                var_20 ^= ((((((arr_12 [i_0] [i_1] [i_5] [i_0] [i_5] [i_7]) ? (arr_12 [i_1] [18] [i_1] [i_1] [i_1] [i_1]) : var_7))) ? ((6722643214991002595 ? 1 : var_2)) : ((12012089779491780513 / (arr_12 [i_0] [i_0] [i_1] [13] [13] [i_7])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-(var_13 < var_2)));
    var_22 = (((min(var_7, var_8))));
    var_23 = (min(var_23, var_11));
    #pragma endscop
}
