/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_6, var_13));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [12] [i_3] [i_4] = 1073217536;
                                arr_12 [i_0] [16] [i_2] [i_2] [i_0] = (((arr_4 [i_2 + 2] [i_2]) * (((((arr_4 [i_2 + 3] [i_2 + 3]) == (arr_4 [i_2 - 1] [i_2 - 1])))))));
                                arr_13 [i_0] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [11] = ((var_3 == ((max(127, 89)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] = (max((((16 ? 16 : 16))), (max((((arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_1]) ? var_12 : var_11)), var_7))));
                    arr_15 [16] [16] [16] [i_1] = -8;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_2] [1] [i_1] = ((+(((arr_7 [i_1] [i_1] [i_1] [i_2 - 1] [i_6]) ? (arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_2 - 1] [i_5 - 1])))));
                                arr_21 [i_1] [10] [5] = (arr_9 [13] [i_2] [13] [i_6]);
                                arr_22 [14] [i_1] [14] [i_1] [i_1] [i_1] [i_1] = (((((((var_0 ^ (arr_5 [i_0] [i_1] [i_0] [i_0 - 2])))) ? 15 : (var_8 & 1678198977))) != (((((((arr_18 [i_0] [i_0] [i_0]) ? var_15 : 5)) == 16))))));
                            }
                        }
                    }
                    arr_23 [i_2] = var_7;
                }
            }
        }
    }
    var_18 = 1332982300;
    #pragma endscop
}
