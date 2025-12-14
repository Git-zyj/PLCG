/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (arr_8 [i_4]);
                                var_12 = var_6;
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] = (((max((arr_5 [i_2] [i_2 + 1] [i_2 + 1] [i_2]), var_0))) ? ((((((arr_12 [i_0]) + 1263387915))) ? var_8 : 0)) : (1 / 1));
                    arr_14 [1] [i_2] = ((var_3 ? (arr_2 [i_1]) : (((arr_7 [0] [i_1] [i_0] [i_0]) ? 255 : (min(-1263387916, (arr_8 [i_2 - 4])))))));
                }
            }
        }
    }
    var_13 = (min((((315177 & 0) ? 14981 : 0)), 1263387915));
    #pragma endscop
}
