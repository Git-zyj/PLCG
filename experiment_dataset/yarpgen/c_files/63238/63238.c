/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = (arr_5 [i_1] [17] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [1] = (((var_1 | var_8) == ((min(12589, 1)))));

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] [i_3 + 1] = ((arr_14 [i_3 + 1] [i_4 - 1] [24] [i_4 - 1] [i_4] [i_4]) - (min((arr_0 [i_1] [i_4 - 1]), (arr_11 [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_4]))));
                                var_11 = (min((((!(arr_14 [13] [13] [i_2] [13] [i_4 - 1] [i_3 + 1])))), ((var_0 - (arr_5 [i_1] [i_1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_9;
    var_13 = var_6;
    #pragma endscop
}
