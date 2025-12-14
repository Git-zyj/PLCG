/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-5357496320292467427 ? 127 : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 *= (((((arr_0 [i_1] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [7] [i_0]))) * (((arr_0 [i_0] [i_0]) ? (arr_0 [1] [1]) : (arr_0 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (((0 <= 255) ? (arr_6 [i_2] [i_2] [i_3 + 2]) : (arr_6 [i_4] [i_2] [i_3 - 1])));
                                arr_14 [i_2] = var_1;
                                var_14 = (arr_4 [i_3 + 2] [i_2 - 1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_15 = (max(var_15, (arr_20 [i_0])));
                            arr_21 [i_0] [i_1] [i_5] [i_6 + 4] [i_0] = (arr_18 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
