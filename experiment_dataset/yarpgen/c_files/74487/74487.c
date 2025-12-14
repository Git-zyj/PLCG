/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((532676608 + (arr_5 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = ((~(((arr_10 [i_0] [i_0] [i_0] [i_0]) & (((arr_4 [i_1] [i_2] [i_1]) ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : 17114772264847134931))))));

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                var_19 = ((((-532676612 ? (arr_13 [i_3 + 3] [i_3 + 3] [i_1] [i_4 - 2]) : (arr_14 [i_3 + 2] [i_3 + 3] [i_4 + 1] [i_4 - 2] [i_1] [i_4 - 3]))) & (arr_9 [i_3 - 3] [i_3 - 1] [i_4 - 2] [i_4 - 3])));
                                var_20 = ((~(((0 < (((var_10 ? 879908746 : (arr_13 [i_0] [i_0] [i_1] [i_0])))))))));
                                var_21 = 557426713;
                                arr_15 [i_2] [i_1] = (min((((arr_6 [i_0] [i_0] [i_0]) + (arr_6 [i_0] [i_0] [i_0]))), ((((arr_10 [i_0] [i_2] [i_3] [i_3]) <= var_13)))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4 - 3] = (arr_12 [i_0] [i_2] [i_1] [i_0]);
                            }
                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_22 = ((~(((((var_14 ? (arr_0 [i_0] [i_0]) : 127))) ^ (~2515610659)))));
                                var_23 = (!var_0);
                                arr_19 [i_0] [i_0] [i_1] [i_1] [i_0] = (arr_6 [i_0] [i_0] [i_0]);
                            }
                            var_24 = (max(var_24, (((!((min((((!(arr_12 [i_0] [i_1] [i_2] [i_3])))), ((var_3 / (arr_2 [i_0])))))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((var_2 ? (var_1 / var_12) : (~0)))) && (((var_6 ? (min(0, var_7)) : (!var_10))))));
    #pragma endscop
}
