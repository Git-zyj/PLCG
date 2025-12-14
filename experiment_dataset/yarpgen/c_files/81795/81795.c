/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (min(var_3, ((var_9 - (arr_9 [i_2 + 3] [i_2 + 2])))));
                    arr_11 [i_0] [i_1] [11] = (!-631203306);
                    arr_12 [i_0] [i_1] [i_2 + 1] [i_2] = var_3;
                }
            }
        }
        arr_13 [i_0] = 60253;
        arr_14 [i_0] [i_0] = (((max((max(14968835366238459851, var_10)), ((((arr_5 [i_0] [1]) * (arr_8 [i_0] [14] [i_0])))))) - (arr_7 [i_0] [i_0] [i_0] [i_0])));
        arr_15 [i_0] [i_0] = -3581427737888191336;
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_27 [i_3] [i_3] [2] [2] [i_3] = (max(((var_9 ? (arr_20 [i_3 - 1] [i_3 + 1] [i_6 + 1]) : (arr_20 [i_3] [i_3 + 2] [i_6 + 3]))), -3581427737888191336));
                        arr_28 [i_6 + 4] [i_3] [i_3] [i_3] [i_3] = var_3;

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_33 [i_7 - 1] [i_4] [i_5] [i_4] [i_3 - 2] = ((!(arr_31 [i_7 - 1] [i_7 - 1] [i_4] [i_4] [i_3])));
                            arr_34 [i_7] [i_6] [i_6] [i_4] [i_4] [i_4] [i_3] = (((var_7 ? (arr_6 [i_7]) : ((-(arr_26 [i_3 - 1] [i_4] [i_5] [i_6] [i_7 + 2]))))) | var_9);
                            arr_35 [i_4] [i_6 + 1] [i_4] [i_3] = ((((8 ? (arr_31 [i_7 - 1] [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_4]) : (arr_31 [i_7 - 1] [i_6 + 2] [i_6] [i_6] [i_6 - 1]))) % (~var_6)));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_39 [i_5] [i_5] &= (((max(-8934040190816494710, ((max(var_8, var_11))))) - ((((arr_6 [i_6 - 2]) - (arr_6 [i_6 - 2]))))));
                            arr_40 [i_3 + 2] [12] [i_5] [i_6] [i_8] = var_1;
                            arr_41 [i_8] [7] [i_5] [i_4] [i_3 - 1] = ((~((((arr_20 [i_3] [i_3 + 2] [i_5]) >= (arr_31 [i_3] [i_5] [i_6 + 2] [i_6 + 4] [i_3 - 1]))))));
                        }
                        arr_42 [i_6] = (((arr_36 [i_3] [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_6 + 2]) ? (~3581427737888191309) : (arr_36 [i_3] [i_3] [i_3] [i_3 + 2] [i_4] [i_4] [i_6 + 3])));
                    }
                }
            }
        }
        arr_43 [i_3] [i_3 + 2] = ((-(arr_36 [i_3] [i_3 + 1] [i_3] [i_3] [6] [i_3] [i_3])));
        arr_44 [0] |= ((~((((arr_5 [i_3 + 2] [i_3 - 1]) >= (var_2 | var_8))))));
    }
    #pragma endscop
}
