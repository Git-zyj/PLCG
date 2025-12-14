/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (max(9624918066509737668, (((var_2 ? (var_8 - var_0) : 62)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [3] [i_1] [i_1] = ((min((min((arr_2 [i_1]), -60)), (((!(arr_4 [i_0] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = (15 || 0);
                            arr_11 [i_0] [i_3] [4] [3] = -2;
                            arr_12 [i_0 - 2] [i_3] [i_2] = (arr_2 [i_0 + 2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
