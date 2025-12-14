/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [4] [i_0] [i_4 - 1] [11] = var_5;
                                var_11 = (max(var_11, 4218117770162572944));
                                arr_13 [i_0] [i_0] [i_3] [8] [i_3] [2] = ((-(((arr_7 [i_0] [i_4 + 1] [1] [i_2 + 1]) ? (arr_7 [4] [i_4 - 2] [i_2] [i_2 + 1]) : -4218117770162572944))));
                                var_12 = (max((((32767 / (arr_8 [i_4] [i_4 + 1] [i_3] [i_2] [i_0] [i_0])))), -4218117770162572938));
                                arr_14 [2] [8] [i_4] [i_3] |= 51;
                            }
                        }
                    }
                }
                var_13 += ((-724327454 ? 8732732886102869570 : 0));
            }
        }
    }
    var_14 = 3222;
    var_15 += var_2;
    #pragma endscop
}
