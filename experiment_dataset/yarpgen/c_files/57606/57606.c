/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((!((min(((-4569954140256340654 ? var_9 : 65529)), ((-(arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = var_11;
                            var_14 = ((!var_7) <= (arr_7 [i_0] [i_0] [i_0]));
                        }
                    }
                }
                arr_9 [i_0] [i_0] = 25601;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_15 = (min(((((arr_15 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : 30))), (min(var_3, 17185160960412976384))));
                var_16 -= ((-((((-(arr_10 [i_4] [i_5]))) / var_0))));
            }
        }
    }
    #pragma endscop
}
