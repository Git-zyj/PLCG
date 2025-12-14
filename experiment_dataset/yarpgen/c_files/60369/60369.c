/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = min((min((max(var_12, 2563329869)), ((max((arr_7 [i_1] [i_3] [i_2] [i_2] [i_1]), (arr_5 [i_0])))))), (min((max(var_12, (arr_7 [i_0] [i_3] [i_1] [i_2] [i_0]))), (min((arr_3 [i_0] [i_1]), (arr_6 [i_0] [i_3] [i_3]))))));
                            var_20 = (min(((max((max(2563329877, (arr_7 [i_0] [i_3] [i_0] [10] [i_0]))), ((min(var_15, -1813216350)))))), (min((min(2563329869, var_5)), ((max(1731637419, var_16)))))));
                            var_21 = (min(var_21, (min((max((min((arr_8 [i_1]), var_4)), ((max(var_0, (arr_4 [i_2] [6] [i_2])))))), ((max((max(var_8, 82)), ((min((arr_3 [i_0] [i_3]), (arr_5 [i_0])))))))))));
                        }
                    }
                }
                var_22 = (max(var_22, ((max((min((max(1731637418, var_9)), ((min(104, (arr_3 [i_0] [i_0])))))), ((max((min(var_11, (arr_0 [i_1]))), ((max(var_1, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))));
            }
        }
    }
    var_23 = (max((min(((min(2563329869, var_0))), (min(var_0, var_3)))), ((min(((max(var_10, var_15))), (min(var_0, var_11)))))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_24 += (min((min(((min((arr_1 [i_6]), var_0))), (min((arr_6 [i_5] [14] [14]), 2067799138)))), ((min((max(-2072898286, (arr_0 [i_4]))), ((min((arr_5 [i_5]), var_1))))))));
                    var_25 = (max(((min((max(var_12, -687635952)), (min(var_14, 2563329877))))), (max(((max(var_2, 82))), (max(var_4, var_9))))));
                }
            }
        }
    }
    #pragma endscop
}
