/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((-((((((var_17 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_0 [i_0])))) >= (arr_1 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = (!var_11);
                            var_20 = 184;
                            var_21 = -var_5;
                            arr_11 [i_1] [i_2] = (((arr_5 [i_2]) << (((min((arr_5 [i_0]), (arr_5 [i_3]))) - 351508103))));
                            var_22 = (((((((min((arr_7 [i_0] [i_1] [i_2] [i_3]), (arr_7 [i_2] [i_1] [i_2] [i_3])))) >= (arr_0 [i_0])))) * ((max((arr_3 [i_1] [i_2] [i_3]), (arr_3 [i_0] [i_1] [i_2]))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (min((((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_1] [i_1]))), var_16));
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
