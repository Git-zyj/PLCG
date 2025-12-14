/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (((max((((~(arr_1 [i_0 - 1])))), (min((arr_1 [i_0 - 1]), (arr_0 [i_0 - 2]))))) == (var_3 == var_1)));
        arr_4 [i_0 - 2] [2] = ((-((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = min(((((arr_9 [11] [i_2 - 2] [i_2 - 4] [i_2 - 1]) >= (arr_9 [i_2] [i_2 - 2] [i_2 - 4] [i_2 - 1])))), var_18);
                    var_21 = (min((arr_6 [i_1] [i_3]), ((-(!var_3)))));
                    arr_12 [i_1] [9] [15] [i_3] = (125 ? 5767325845529239164 : 10982);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] = (arr_13 [i_5]);
                                var_22 = var_8;
                                var_23 ^= ((!((min((arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 4]), (arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
