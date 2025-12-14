/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_1] [i_2] [i_3 + 1] [i_4] = (arr_5 [i_2 - 2] [i_3 + 1] [i_4 - 1]);
                                var_14 = (((arr_5 [i_0 + 1] [i_1] [i_2]) >= ((max(((max(var_4, var_11))), (((arr_0 [i_0] [i_0]) % (arr_8 [i_0] [i_4] [i_2] [i_3 + 1]))))))));
                                var_15 = arr_6 [i_3] [i_2 - 1];
                                var_16 = var_4;
                            }
                        }
                    }
                    var_17 = (max(var_4, (max((arr_2 [i_2 + 2]), (arr_7 [i_0 + 1] [i_0 + 2] [i_0] [i_2 - 2] [i_2 - 2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = var_10;
                                arr_19 [i_2] [i_1] [i_1] [i_6] [i_6] = (arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_10;
    var_20 += (max(var_9, (max(var_0, (max(var_5, 192))))));
    #pragma endscop
}
