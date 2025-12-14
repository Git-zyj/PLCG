/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~28999);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_11 = ((max(-2210967559898459246, (arr_6 [18] [i_1] [12]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((~((~(min(-2210967559898459246, var_4))))));
                                arr_15 [i_0] = ((+(max(((max((arr_5 [i_0] [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1])))), (min((arr_6 [13] [13] [18]), (arr_8 [i_4] [16] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((~(min(var_7, (max(var_6, var_4))))));
    #pragma endscop
}
