/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((arr_10 [i_0] [i_0] [1] [i_0] [i_0] [i_0]) ? (((!(!5814797260222823383)))) : (max(var_1, (arr_7 [i_3] [i_2] [i_1] [i_0])))))));
                                var_16 = (max(var_16, ((((((max((arr_9 [i_2] [i_0]), (arr_4 [i_0] [i_1] [i_2] [i_3]))))) / (max(((max(748698589, (arr_9 [i_0] [i_0])))), (((arr_7 [i_0] [i_1] [4] [i_3]) ? (arr_11 [i_0] [i_4] [i_2] [i_3] [i_4]) : (arr_0 [i_1]))))))))));
                                var_17 &= (arr_5 [3] [i_1] [i_1]);
                                var_18 = ((((max((arr_0 [i_4]), ((-(arr_4 [i_0] [i_3] [i_2] [i_0])))))) ? (((arr_3 [i_2]) ? (!24378) : (min((arr_11 [i_0] [i_1] [i_2] [i_0] [4]), (arr_4 [i_4] [i_3] [i_0] [i_0]))))) : ((max((var_11 || -748698612), (arr_3 [i_2]))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((min(((((((arr_4 [i_0] [i_0] [i_1] [i_0]) ? -748698608 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) > (~var_5)))), var_13)))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_1] [i_5] [i_5] [i_1] [i_6] = (min((arr_1 [i_0]), ((max((arr_10 [i_0] [i_0] [i_2] [i_5 - 2] [i_6 + 1] [i_1]), (arr_10 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]))))));
                                var_20 = (+-748698612);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    arr_26 [i_8] [i_8] [i_8] [i_8] = min((((arr_25 [i_9] [i_9 - 1] [i_7 - 3]) ? (arr_25 [i_9 - 1] [i_9 + 1] [i_7 + 1]) : var_3)), (((~(arr_25 [i_7 - 1] [i_9 + 2] [i_7 - 1])))));
                    arr_27 [i_8] [i_8] [i_8] = ((var_7 ? (((arr_23 [i_9 + 1] [i_7 - 3]) & (arr_23 [i_9 - 1] [i_7 - 1]))) : var_12));
                    arr_28 [i_7] [i_7 - 3] [i_7] &= (min(((149 ? (arr_20 [i_9 + 1] [i_7 - 1]) : (arr_20 [i_9 + 2] [i_7 - 1]))), (min((arr_20 [i_9 - 1] [i_7 - 1]), 748698575))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_21 = ((((((!(arr_29 [i_8] [i_9] [i_10]))))) - (~-var_6)));
                                arr_33 [i_7 - 3] [i_8] [i_8] [i_9 + 2] [i_7 - 3] [i_8] [i_7] = -759023537579542600;
                                var_22 = -112;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
