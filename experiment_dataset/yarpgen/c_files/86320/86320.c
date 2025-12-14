/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [6] = -34;
                                arr_17 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2] |= 0;
                                arr_18 [i_0] [i_1] [7] [i_0] [i_4] [i_4] = var_5;
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = 65535;
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = 0;
                            }
                        }
                    }
                    arr_21 [i_2] &= 425153377;
                    arr_22 [i_1] = 59170;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_26 [i_0] [2] [i_0] [i_0] [i_0] = var_1;
                        arr_27 [i_0] [i_1] [i_1] [3] [i_2] [i_0] = var_5;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_32 [i_7] [i_1] [i_2] = 0;
                            arr_33 [4] [i_7] = var_4;
                            arr_34 [i_7] [i_6] [i_6] [i_7] [2] [i_0] [i_0] = var_9;
                            arr_35 [i_7] [i_6] [i_6] [i_2] [i_6] [i_1] [i_0] = -856810359;
                            arr_36 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = (arr_28 [i_7] [i_2] [i_1] [i_0]);
                        }
                        arr_37 [i_0] = (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]);
                        arr_38 [i_0] [i_0] [i_0] [i_0] [2] = (arr_11 [6] [6] [i_1] [i_0]);
                        arr_39 [9] [9] [i_2] [i_6] [i_6] = (arr_7 [i_2] [i_6]);
                        arr_40 [i_6] [i_2] [i_1] [i_0] |= 0;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_43 [i_0] [i_1] [i_1] [i_0] [i_0] = 8942587354529451278;
                        arr_44 [i_0] [i_0] [7] [i_0] [i_1] [i_1] = 1;
                    }
                    arr_45 [i_0] = -42;
                }
            }
        }
    }
    var_11 = var_2;
    #pragma endscop
}
