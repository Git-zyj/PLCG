/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 32704;
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (!(((((min(111, -1))) ? ((4932 ? var_12 : 165)) : (arr_6 [i_0 - 2] [i_0 + 1] [i_2])))));
                                arr_14 [i_2] [i_3] [i_2] [i_1] [14] [14] = (!(arr_1 [i_0 - 1] [i_0 - 1]));
                            }
                        }
                    }
                }
                arr_15 [i_0] = arr_11 [4] [1] [i_1] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_26 [i_5 + 1] [9] [2] [0] = (arr_2 [i_5] [i_7 + 2]);
                            arr_27 [i_5] [7] [1] [i_5] = var_10;
                            arr_28 [i_5] [i_6] [i_6] [i_7 + 2] [i_8] [i_5] = var_9;
                        }
                    }
                }
                var_20 = ((-(((((arr_6 [i_6] [i_6] [1]) ? (arr_13 [i_5]) : (arr_24 [i_5] [i_6]))) & ((var_5 / (arr_4 [i_5])))))));
            }
        }
    }
    #pragma endscop
}
