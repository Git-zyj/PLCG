/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [4] [i_0] [i_1] [4] |= 27750;
                    arr_9 [i_0] [i_0] [i_2] &= (arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = (((((3240956301 ? ((min((arr_13 [i_0] [i_0] [6] [i_0] [7] [5] [i_0]), 2947))) : ((min(0, (arr_4 [8] [8] [i_3]))))))) ? ((((-(arr_13 [1] [i_1] [i_1] [5] [1] [1] [i_4 - 1]))) - (arr_2 [i_1] [i_3 - 3] [i_3 + 1]))) : 1054011003));
                                var_10 = ((-(arr_3 [i_1] [i_1])));
                                var_11 = min((((arr_13 [i_2] [i_2] [i_3 - 3] [i_3] [i_4] [i_4 + 3] [7]) ? -1086466079161900199 : (arr_13 [i_2] [2] [i_3 - 3] [i_3] [7] [i_4 + 3] [i_4]))), 39311);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = 5544448576252362306;
    #pragma endscop
}
