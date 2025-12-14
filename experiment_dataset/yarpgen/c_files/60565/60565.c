/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((133955584 ? (arr_2 [i_0 - 2] [i_0 + 3]) : (arr_2 [i_0 - 2] [i_0 + 2])))) ? ((2960851898092305336 / (arr_1 [i_0 - 1] [i_0 + 2]))) : 2147483639);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [0] [i_2] [i_3] = 0;
                                var_18 = arr_0 [i_1];
                                arr_14 [14] [2] [i_2] [3] [i_3] = var_8;
                                var_19 = (max((((-(arr_11 [i_3] [i_3])))), (((arr_7 [i_0 + 1] [i_0 - 1] [i_3 - 2] [i_3 - 4]) ? 140737487831040 : (arr_7 [i_0 + 1] [i_0 - 1] [i_3 - 2] [i_3 - 4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((max(((var_5 ? 65520 : var_2)), var_8)) * 0));
    #pragma endscop
}
