/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1164283067, 0));
    var_18 = 3689827268;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_2] [8] |= ((((min(32767, 4278286819))) ? ((((var_3 && var_4) / var_8))) : (((min(var_9, (arr_4 [i_0] [i_0] [i_2]))) ^ (~var_9)))));
                            arr_13 [i_1] [i_1] [i_1] = ((-((-(max(-1116646274, var_15))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                arr_22 [i_5] [i_1] [i_1] [i_5] [i_6] [i_0] [i_0] = (((arr_2 [i_0]) && var_10));
                                var_19 = (min(var_19, (((~(arr_15 [i_0 - 1] [i_5 + 2]))))));
                            }
                            arr_23 [i_0] [i_0] [i_4] [i_1] = (((arr_8 [i_0 + 3] [i_4 - 3] [i_5 + 1]) ? (arr_21 [i_0] [i_0 + 2] [17] [i_0] [i_4 + 2]) : -var_1));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [i_1] [i_7] = (((((18245667735931116710 << (-1116646302 + 1116646347)))) ? (arr_26 [i_1] [i_0 + 1] [i_0 - 3] [i_1]) : (arr_18 [14] [14] [i_0 - 2] [i_0 + 2])));
                    arr_28 [i_7] [i_1] [i_0 - 1] = (((((((min(var_1, (arr_7 [i_0] [i_1] [i_1] [i_0])))) / var_7))) ? (max(var_8, (arr_2 [i_0 - 1]))) : (~var_6)));
                    var_20 = (min(var_20, ((((max(((max(var_2, 0))), (max((arr_16 [10]), var_2)))) >> var_1)))));
                }
                var_21 = ((((((0 ? var_12 : 3582770490))) ? (arr_19 [i_0 - 3] [i_0] [i_0] [i_0] [2] [i_1]) : var_16)));
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_39 [i_1] [15] [i_1] [13] [i_0] [15] = ((7 ? 769674617 : 0));
                                arr_40 [i_1] [10] [i_1] [i_1] = ((~(arr_35 [i_1] [i_0 + 1] [i_8 + 1] [i_10 + 1] [i_10] [12])));
                                arr_41 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1] = max(-28818, (((((max(var_7, (arr_20 [i_0] [i_1] [i_1] [i_8] [i_9] [5] [i_10])))) >= var_16))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
