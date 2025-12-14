/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = 17592186044415;
                arr_7 [4] [i_1] = (max((46 || 3452104195), var_0));
            }
        }
    }
    var_13 = max(var_3, var_6);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_24 [i_5 + 1] [i_4] [i_5] [2] [i_3 + 1] = (min(((((((var_6 ? 228 : var_4))) && ((((arr_8 [i_2]) ? 2815387267 : 595584134)))))), var_0));
                                arr_25 [i_2] [i_4] [i_4] [i_5] [i_6] = (min(181, 255));
                                var_14 = (((var_2 || 1) != 1));
                            }
                        }
                    }
                }
                var_15 = (((arr_18 [i_3]) ? (arr_12 [i_2] [i_2]) : (min(var_2, (arr_4 [i_3 - 3] [i_3 - 1])))));
                arr_26 [i_2] [i_3 - 3] = ((842863101 ? (arr_16 [i_2] [i_2] [i_2]) : (((arr_15 [i_2] [i_2] [i_3 + 1] [i_2]) ? (((arr_1 [i_2]) + var_5)) : (arr_5 [i_2])))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_29 [i_2] [i_3 - 3] [i_7] = ((((max((var_0 + 26427), 29897))) - 842863101));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_38 [i_2] [i_3] [i_3] [i_9] = (max(((((arr_12 [i_2] [i_3]) / (arr_5 [i_9])))), (((~(((!(arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [1])))))))));
                                arr_39 [i_2] [i_9] [i_2] [i_2] [i_2] = (-((var_6 ? var_8 : (max(1494230246, (arr_11 [i_7]))))));
                            }
                        }
                    }
                    arr_40 [i_2] [i_2] [i_2] [i_2] = (arr_5 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
