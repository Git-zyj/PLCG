/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] [i_4] = (arr_9 [i_0] [i_1] [11] [i_0] [i_3] [i_4]);
                                var_10 = (arr_0 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [3] [i_2] [i_2] [i_2] [i_2] = (max((((!(arr_17 [i_0] [i_1 + 4] [i_2] [i_6 - 1] [i_6 - 1])))), ((var_4 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                                var_11 += 96;
                            }
                        }
                    }
                    var_12 = (arr_2 [i_0] [i_1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_6 != (arr_10 [i_0] [i_1 + 2] [1] [i_7 + 1] [i_0] [i_0] [i_8 + 2]))) || ((((var_4 ? -121 : var_1)) >= 7188))));
                                arr_28 [i_0] [i_0] [i_2] [i_0] = 2051573504;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_40 [i_9] [i_10] [i_11] = ((arr_32 [i_9]) != (max(-3471073860, (arr_29 [i_9] [i_10]))));
                            var_13 = var_2;
                            arr_41 [i_9] [i_10] [i_11] [i_11] [i_9] [10] = 3888693479;
                            arr_42 [i_9] [i_10] [0] [i_9] [i_12 - 2] = (arr_39 [17] [i_9] [i_11]);
                        }
                    }
                }
                var_14 = var_6;
                arr_43 [i_9] [i_9] = max((min((arr_34 [i_9] [i_9] [i_9]), (max(180, 11782494617504133926)))), ((max((max(var_4, 6743)), (arr_31 [i_9])))));
                var_15 |= (arr_32 [10]);
            }
        }
    }
    #pragma endscop
}
