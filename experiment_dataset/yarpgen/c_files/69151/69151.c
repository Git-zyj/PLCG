/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = -3612069338;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= (~507575130);
                arr_5 [i_0] [i_0] [i_1] = -112;
                var_20 = (-((-((-(arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = 13803970764911705540;
                            var_22 = (~563624869421742479);
                            arr_13 [i_0] = ((!(arr_10 [i_0] [i_1] [i_1] [i_1] [18] [i_3])));
                            var_23 = (arr_1 [i_1]);
                            arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_3 - 1] = arr_0 [9];
                        }
                    }
                }
            }
        }
    }
    var_24 = -3336;
    #pragma endscop
}
