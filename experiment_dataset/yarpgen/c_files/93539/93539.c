/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [10] [i_1] [i_2] [8] [i_1] [2] = (4419441774480623497 % 4419441774480623497);
                                arr_16 [i_4] [i_3] [i_4] [i_1] [i_0] |= 1;
                                var_18 ^= ((!((!(((arr_4 [i_0]) && (arr_7 [i_4] [i_4] [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [1] [i_5] [i_1] [i_1] [i_1] [i_0] = ((min((((arr_19 [i_6 - 1] [i_5] [i_1] [i_1] [i_1] [2]) / (arr_18 [i_0] [12] [12] [i_0] [i_1] [i_0]))), (arr_7 [i_1] [i_1] [i_5]))));
                                var_19 = (arr_17 [i_0] [i_0] [1] [i_6 - 1] [i_1] [i_6]);
                                var_20 = (((14027302299228928118 != 3452643813) ? (arr_20 [i_1] [9]) : (24 || -26359)));
                                var_21 = (min(var_21, ((min(((3100291713 ? (arr_6 [i_0] [8] [i_0]) : 3100291692)), (((127 ? (((!(arr_20 [i_0] [i_0])))) : ((((arr_10 [i_2] [i_5] [i_2] [i_2]) >= (arr_4 [i_2]))))))))))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] = (!var_13);
                }
            }
        }
    }
    #pragma endscop
}
