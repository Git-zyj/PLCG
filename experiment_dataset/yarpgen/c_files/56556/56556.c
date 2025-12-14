/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] = (min(((min((min(0, var_4)), (arr_10 [i_1] [16] [i_0] [i_1])))), 13725));
                            arr_13 [i_0] [16] [14] [i_1 + 1] [i_0] |= (51811 < (max((max(var_5, (arr_0 [i_0]))), ((((arr_6 [i_0] [i_0]) <= (arr_4 [i_0] [i_0] [i_0])))))));
                            arr_14 [6] [14] [i_2] [i_2] [11] [i_1] = (min((((arr_6 [i_1] [i_1]) ? var_6 : (arr_6 [i_0] [i_1]))), var_9));
                        }
                    }
                }
                var_12 = (max(var_12, (((-(arr_8 [i_0] [4]))))));
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
