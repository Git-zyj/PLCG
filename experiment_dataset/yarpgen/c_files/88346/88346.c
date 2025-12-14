/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (!var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((((max((arr_9 [2] [2] [i_3 + 1] [i_4] [i_4] [i_4]), (arr_9 [i_1] [i_3] [i_3 - 3] [i_3] [i_4] [i_4])))) ? (max(var_2, (((!(arr_9 [17] [i_1] [i_2] [9] [i_4] [i_1])))))) : ((((arr_10 [1] [i_3] [i_2] [i_1] [i_0]) || (arr_10 [i_0] [i_1] [1] [i_3] [i_4]))))));
                                var_14 = (min(var_14, (arr_9 [i_4] [i_3] [8] [i_2 + 1] [12] [i_0])));
                                arr_11 [i_0] [i_1] [i_2] [1] [i_4] = 7236274333719756821;
                            }
                        }
                    }
                    var_15 = (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_16 = -0;
    var_17 -= ((0 ? (max(0, -1)) : var_0));
    #pragma endscop
}
