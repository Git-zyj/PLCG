/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = -var_11;
                            var_17 = ((-(((arr_9 [i_0] [i_3] [i_0] [6] [i_0]) / 85))));
                            arr_12 [7] [i_1 - 1] [i_2] [i_0] = 77;
                            arr_13 [11] [i_0] = (arr_10 [i_1]);
                            arr_14 [i_0] [11] [i_0] = (arr_7 [i_0] [i_1] [i_0]);
                        }
                    }
                }
                var_18 = (~var_10);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_19 = (max(((((arr_9 [i_5 - 3] [9] [i_0] [i_5 + 1] [i_5 - 1]) >= ((var_6 ? (arr_15 [i_0]) : 0))))), (arr_7 [i_5 - 3] [i_4 + 1] [i_0])));
                            var_20 = var_14;
                            var_21 = ((-(((!((max(65523, -79))))))));
                        }
                    }
                }
                var_22 = -66;
            }
        }
    }
    #pragma endscop
}
