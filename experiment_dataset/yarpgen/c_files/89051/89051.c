/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] = (arr_1 [i_1]);
                arr_6 [i_0] [i_1] = (max(((max((arr_3 [i_0 - 1]), (arr_0 [i_0])))), (max((arr_3 [i_1]), (max((arr_2 [i_1]), (arr_4 [i_1] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 - 1] = (max((max(((max((arr_10 [i_0] [i_0 - 1] [1] [i_0] [i_0 - 1]), (arr_10 [6] [i_0] [6] [i_0] [i_0])))), (max((arr_9 [i_0] [i_0] [2]), (arr_1 [i_0]))))), (arr_10 [17] [17] [i_2 - 1] [i_2] [i_3])));
                            arr_13 [11] [i_1] [i_1] [i_1] = (max(3, -12));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = (max(var_16, var_13));
    var_17 = var_12;
    #pragma endscop
}
