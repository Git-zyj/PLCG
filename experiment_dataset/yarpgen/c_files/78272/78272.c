/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(-1, (arr_3 [i_1] [i_1] [i_0])));
                var_17 = (max(var_17, (((min((arr_3 [7] [i_1] [7]), ((var_2 ? var_6 : (arr_3 [i_1] [i_1] [i_0 - 1]))))) < var_14))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((((((min(4294967295, 4294967295))) || 4294967295)))) - (min(10, 1)))))));
                                var_19 = (arr_12 [i_4] [5] [i_2] [i_3]);
                                arr_13 [2] [6] [2] [i_4] [i_2] [i_1] [i_1] = (((((((min((arr_4 [i_4] [i_3]), 4294967295))) ? (arr_4 [i_0] [i_0]) : 1))) ? ((-(arr_7 [i_3] [i_3] [i_3] [i_3]))) : 1));
                                var_20 = ((arr_5 [i_0] [i_0] [i_2]) ? var_11 : (((!(3716945601 % 3088141724)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
