/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = 15123351856152065000;
                var_16 = (min(var_3, (~152)));
                var_17 = (arr_1 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [9] [9] [i_2] [i_3] [i_4] [i_0] = ((1 ? ((((arr_12 [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_3] [i_3] [i_3]) >> (((arr_12 [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_3]) - 2541001484))))) : (arr_3 [i_4 + 1] [i_4])));
                                arr_14 [i_1] = (max((-2147483647 - 1), (arr_9 [i_0] [i_0] [i_0] [i_4])));
                                var_18 = (((((((var_7 - (arr_5 [i_0] [i_2] [i_3])))) && (arr_4 [i_1] [i_3] [i_2]))) ? (min((arr_12 [i_2] [i_4] [3] [i_4 - 1] [i_4 + 2] [3]), (arr_12 [i_2] [i_2] [i_2] [i_4 - 1] [i_4 + 2] [i_2]))) : (((((((arr_1 [i_4]) ? 1344074786 : (arr_11 [21] [i_3] [i_3] [i_2] [i_1] [i_0]))) < (((~(arr_9 [i_4 + 2] [i_3] [i_2] [i_1]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 2950892517;
    #pragma endscop
}
