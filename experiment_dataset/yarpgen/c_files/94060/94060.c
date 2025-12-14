/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_7 : (((var_4 | (~var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (arr_6 [8] [i_1 - 1] [i_2 + 2] [i_1 - 1]);
                    arr_9 [i_1] [3] [3] [i_0 - 3] = (!var_5);
                    arr_10 [4] [i_2] [i_1 - 1] [4] = (((((arr_7 [i_2] [i_1 + 1] [i_0 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_0 + 1]) : (arr_7 [i_0] [i_0 - 1] [i_0 - 1]))) | (arr_7 [i_0] [i_1 + 1] [i_0 - 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_2 + 2] [i_2] [i_2 - 1] = ((-(((arr_17 [i_0] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1]) + (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                                arr_19 [i_0] [i_3] [i_2 + 1] [i_3] [i_3] |= (max((((((~(arr_5 [i_2 + 2] [i_3])))) ? (var_6 & var_8) : ((234662403 + (arr_0 [i_0 - 3]))))), var_8));
                                arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] = (arr_2 [i_3]);
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] [i_2 - 1] = (((((-((-(arr_12 [i_0 + 1] [i_0] [i_1] [i_2 + 2])))))) + (max((arr_4 [i_1]), var_11))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_32 [i_5] = (arr_31 [i_5] [i_6] [i_5] [i_8]);
                            arr_33 [i_5] [i_5] [i_7] = ((-((65535 ? 65535 : (((((-32767 - 1) + 2147483647)) << (1 - 1)))))));
                        }
                    }
                }
                arr_34 [i_5] [i_5] = var_6;
            }
        }
    }
    #pragma endscop
}
