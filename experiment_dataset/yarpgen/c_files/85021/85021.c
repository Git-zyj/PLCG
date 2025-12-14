/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (arr_0 [i_1]);
                    var_18 = (max(var_18, ((min(((-((min(85, 171))))), (arr_8 [i_0] [i_0] [i_0] [i_0]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] = (arr_11 [i_0] [i_1] [i_2] [i_3]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (max(var_19, (((~(arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4]))))));
                            arr_15 [i_4] = ((!((!((!(arr_10 [i_0] [9] [i_0] [9])))))));
                        }
                        arr_16 [i_1] [i_2] [10] [i_1] [i_1] [4] = ((~((-(arr_13 [i_3] [13] [i_0] [i_1] [i_0] [i_0])))));
                    }
                    var_20 = (max(var_20, (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_14 [1] [16] [i_1] [i_1] [i_1] [i_2] [i_2])))));
                    arr_17 [i_0] = ((-((-(arr_4 [i_1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6] [i_5] = ((~(arr_8 [i_5] [i_6] [8] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min((arr_0 [i_5]), ((max(((max((arr_8 [i_5] [i_5] [i_5] [i_9]), (arr_29 [i_7] [i_6] [12] [i_7] [i_9] [1] [i_5])))), (arr_11 [i_6] [i_7] [i_8] [i_6])))))))));
                                arr_31 [9] [i_5] [i_7] [i_8] [0] = ((~(min((arr_10 [i_5] [i_6] [6] [6]), (arr_2 [13])))));
                                var_22 = (min(var_22, (((~(!84))))));
                                arr_32 [i_5] [i_9] [i_8] [i_7] [i_5] [i_5] = (arr_0 [i_6]);
                                var_23 = (max(var_23, (((!((min((arr_4 [i_7]), ((-(arr_30 [i_7] [i_5] [2] [12] [12] [i_7] [i_9])))))))))));
                            }
                        }
                    }
                    var_24 = (max(var_24, (((~(((!(arr_5 [4] [i_6] [4])))))))));
                }
            }
        }
    }
    #pragma endscop
}
