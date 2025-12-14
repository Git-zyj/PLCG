/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((-((max(1, 0)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4] = (((arr_15 [i_4 - 3] [i_4 - 3] [i_4 - 2] [2] [i_2 + 2]) | (arr_15 [3] [i_4 + 3] [i_4 - 1] [i_4] [i_2 + 3])));
                                var_18 = max(268435440, 1);
                            }
                        }
                    }
                }
                arr_17 [i_0] |= (~1074617374);
                var_19 = (min(var_19, ((((0 <= -1074617352) ? (arr_6 [3]) : (max((((arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]) ? (arr_9 [i_0] [i_0]) : 15426986257874092739)), ((((arr_9 [i_0] [i_0]) >> (((arr_8 [i_0] [i_1] [i_0] [0]) - 29552))))))))))));
            }
        }
    }
    var_20 |= (((4294967286 ^ (min(3019757815835458876, var_4)))));
    var_21 = (min(-1, -16551));
    #pragma endscop
}
