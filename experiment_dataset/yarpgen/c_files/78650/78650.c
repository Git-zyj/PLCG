/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (~3184319807);
                    var_13 = (max(-1767063046, (arr_1 [i_1])));
                    var_14 = ((-1 % (max(154, 1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_15 = (min(var_15, ((((-(arr_12 [i_4] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_16 *= -7;

                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_17 = ((((((arr_1 [10]) ? -2334172156948436656 : var_9))) && ((!(((101 ? -1767063040 : -1)))))));
                                arr_20 [i_3] [i_4] [i_5] [i_6] [i_3] = (min(4204452973631221400, 147));
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_6 - 2] [i_7] = (((max((arr_5 [i_5 + 1] [i_6 - 1]), (arr_15 [i_5 + 1]))) > (((((arr_11 [i_5 + 1] [i_6 + 3] [i_5 + 1]) || (arr_11 [i_5 + 1] [i_6 + 2] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
