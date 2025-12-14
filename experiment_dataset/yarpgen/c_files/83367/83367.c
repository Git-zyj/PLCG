/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((var_3 ? (((var_5 >= (!var_5)))) : (arr_3 [i_0 + 2] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] = ((-((~(max((arr_11 [i_2] [i_2] [i_3] [i_4]), (arr_4 [1] [i_4])))))));
                                var_11 ^= (arr_4 [i_0 - 1] [i_0 - 3]);
                                var_12 = (min(var_12, (((((min((arr_3 [i_0 - 1] [i_0 - 3]), (arr_6 [i_2] [i_2] [i_3 + 1])))) + ((-(arr_3 [i_0 + 2] [i_0 - 1]))))))));
                                arr_15 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_4] = (((arr_0 [i_3 - 1] [i_0 - 1]) ? (arr_0 [i_3 + 1] [i_0 - 2]) : (((~(arr_9 [i_0] [i_2] [i_0] [i_0 + 2] [i_3 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, var_3));
    var_14 = (max(var_14, (~var_2)));
    var_15 = (min(((25678 ? 1 : 0)), var_7));
    #pragma endscop
}
