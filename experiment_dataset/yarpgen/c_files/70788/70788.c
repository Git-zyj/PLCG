/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (max(((min(1, (arr_2 [i_0] [i_0] [8])))), (max(var_0, var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 |= (max((min((arr_4 [i_1 + 2] [6]), var_5)), ((min(89, 1)))));
                                var_13 |= (max(((max(var_8, var_6))), (min((arr_6 [i_4] [i_4] [i_3 - 2] [i_3 - 2]), var_8))));
                                var_14 |= min(((max(1, 101))), (max(63, var_0)));
                            }
                        }
                    }
                    var_15 = (min((max((min((arr_4 [i_0] [i_0]), (arr_3 [i_0] [i_1 + 2] [i_2]))), var_8)), (min(((max(var_5, var_7))), (min((arr_8 [i_0] [i_0] [i_1] [i_2]), (arr_4 [2] [i_0])))))));
                }
            }
        }
    }
    var_16 = (max((min((min(var_8, 61767)), ((min(var_3, var_2))))), (min(((min(var_10, var_3))), var_8))));
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
