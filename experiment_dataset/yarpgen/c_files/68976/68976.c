/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_11 *= var_7;
                var_12 = ((!(arr_3 [i_1 + 4] [i_1 + 4])));
                arr_6 [i_1] = (~(var_6 && var_0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_4] &= (~var_3);
                                arr_16 [21] [i_1] [i_1] [i_3] [i_4] = ((var_7 || (arr_0 [i_0] [i_0])));
                                arr_17 [i_4] [i_1] [i_1] [i_0] = ((((min(((!(arr_10 [i_0]))), (!var_8)))) | ((~((max((arr_12 [i_1] [i_2]), (arr_8 [i_4] [i_1] [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_13, (((~(((var_8 + 2147483647) << (19 - 19))))))));
    var_14 = (max(var_14, ((min(((-(65516 || 20))), var_9)))));
    #pragma endscop
}
