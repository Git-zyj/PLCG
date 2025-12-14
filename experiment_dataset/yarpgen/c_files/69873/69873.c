/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((var_4 ? ((((!(arr_1 [i_1 - 2]))))) : (min(var_3, var_6))))));
                var_14 = (max(var_14, var_1));
                arr_6 [i_0] [16] = (1017400344 * 1017400344);
                arr_7 [i_0] = (((var_0 <= (arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 1]))));
                arr_8 [i_1 - 1] [i_0] = ((((((!((min(var_8, 5973375960864429294))))))) * (min((!var_11), (var_2 + 1017400344)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_5] [i_4] [i_3] [i_2] = (min(536346624, ((((arr_14 [i_3] [i_3] [1] [i_3]) < (arr_9 [i_3] [i_6]))))));
                                var_15 = (min(var_15, ((max((arr_10 [i_2]), ((min((arr_18 [i_4 + 1] [i_4 + 1]), (arr_13 [i_4 - 2] [i_5 - 3])))))))));
                                var_16 = (var_11 <= var_12);
                                arr_21 [i_2] = (((((-(var_9 / var_6)))) && var_1));
                                arr_22 [8] [i_3] = ((1017400338 ? var_5 : (((((var_5 ? (arr_0 [i_5]) : var_2))) ? (var_1 - var_5) : (arr_1 [i_3])))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (((~(min((((1017400351 ? (arr_14 [i_2] [i_3] [i_3] [i_3]) : (arr_16 [i_3] [i_3] [i_3] [i_2] [i_2])))), (arr_19 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
