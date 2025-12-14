/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
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
                                arr_12 [i_1] = (min(var_7, (arr_4 [i_0] [i_1] [i_4])));
                                arr_13 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] = ((+((((((arr_6 [i_0] [i_1] [i_1] [i_1]) ? 119 : (arr_9 [i_3] [i_1] [i_1] [i_0])))) ? (arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0]) : 3630189220274851139))));
                            }
                        }
                    }
                    var_20 &= (min(((max(0, var_17))), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])));
                    var_21 -= (max((((min(var_11, var_16)))), (((arr_7 [i_0 - 1] [i_0 - 1] [i_0] [12] [i_0 - 1] [i_0]) ? (arr_7 [i_0] [i_0 - 1] [12] [i_0] [i_0 - 1] [i_0]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            }
        }
    }
    var_22 |= var_19;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 -= ((((!(arr_14 [i_7 + 2])))));
                        var_24 = (((((min((arr_6 [i_5] [i_5] [i_8] [i_7 + 1]), (arr_17 [i_6 - 1] [i_6 - 1] [i_6]))))) / ((-(min(var_11, 22))))));

                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            var_25 = ((-(min((((~(arr_3 [i_5] [i_8])))), (min((arr_24 [i_5] [i_6 - 2] [i_8] [i_7] [i_8] [i_9 - 2]), var_2))))));
                            arr_29 [i_5] [i_6] [i_6] [i_7] [i_8] [i_9 - 3] [i_9] = ((22 ? (arr_28 [i_5] [i_8] [i_9 + 1] [i_8] [i_9]) : -var_8));
                            arr_30 [i_8] [i_6] [i_7] [i_8] [i_9] = (((arr_26 [i_8] [i_9 - 3] [i_9 - 3] [i_9 + 1]) << ((((max(var_18, var_8))) - 57059))));
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_5] [i_5] = (arr_20 [i_9 - 1] [i_6 - 2] [i_7 + 3] [3]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_26 = (min(var_26, (((var_14 ? (arr_19 [i_6 + 2]) : (arr_16 [i_6 + 2]))))));
                            var_27 = (~var_11);
                            var_28 &= -22;
                        }
                    }
                    var_29 = (min((((-127 - 1) ? (arr_4 [i_6] [i_6] [12]) : ((((-2146147655 >= (arr_17 [i_5] [i_6] [i_7]))))))), (arr_26 [i_6] [i_5] [i_6] [i_7])));
                    var_30 = ((-(var_12 > var_4)));
                    arr_34 [i_5] [i_6] [i_5] [i_7] = min((arr_21 [i_7] [i_7 + 1] [i_7]), (min(var_9, (arr_23 [9] [i_6]))));
                }
            }
        }
    }
    var_31 = var_7;
    #pragma endscop
}
