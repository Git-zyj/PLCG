/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((-2 + var_10), var_4));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 -= var_10;
        arr_3 [i_0] = (((((((arr_2 [i_0]) ? var_3 : 62))) ? ((((var_7 >= (arr_2 [i_0]))))) : (((arr_1 [i_0 + 1]) % (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 7036;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (arr_5 [8]);
                        var_15 = ((~(max(((var_10 ? (arr_5 [i_1]) : var_9)), ((min(7036, (arr_10 [i_0 + 1] [i_0 - 2] [i_1] [i_2] [i_0] [i_3]))))))));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        arr_13 [i_0] = (min(-35, (arr_4 [i_0])));
                        var_16 = (max(var_16, ((min(((((0 >> (((arr_12 [0] [i_1] [i_4]) - 44469)))))), ((((min((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]), -35))) | ((((arr_4 [i_4]) == var_3))))))))));
                        var_17 = ((189 ? (arr_12 [i_0] [i_0 - 1] [6]) : (((((arr_2 [i_0]) ? (arr_10 [3] [3] [i_2] [i_2] [i_0] [3]) : var_7))))));
                        arr_14 [i_0] [i_2] [i_2] [8] [i_0 + 2] [i_0] = (min(-var_4, (~-125)));
                    }
                }
            }
        }
        var_18 = (min(((-32739 ? var_1 : (~var_2))), (arr_8 [i_0 - 1] [i_0] [8] [i_0 - 1])));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_24 [i_6] [i_5] = (arr_23 [7]);
                    var_19 = (((((((max(var_4, 7644419089191604026)) > (arr_22 [i_5] [i_6] [i_6] [i_7]))))) != (min((max(-1, 18239443851394828816)), (((var_6 ? (arr_23 [5]) : var_4)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    var_20 = ((+(((arr_25 [i_5] [i_5]) ? (arr_25 [i_8 - 1] [i_8 + 1]) : (arr_25 [i_5] [i_8 - 1])))));
                    arr_32 [i_5] [i_8] [12] = (((min((arr_27 [i_8]), (min(var_9, 18239443851394828831)))) - (arr_15 [i_9])));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_5] [i_8] [i_8 + 1] [i_9] [i_9] [i_8 + 1] = ((var_3 % (arr_16 [i_9 + 1])));
                        var_21 = ((+(((arr_17 [i_10] [i_9]) ? 1 : var_7))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_22 = ((-(min((((arr_22 [i_5] [i_5] [i_9] [i_11]) + 1725317319075925104)), var_7))));
                        arr_39 [i_5] [i_9] [i_8] = (min(((min((arr_18 [i_8 - 1] [i_8 + 1]), (-127 - 1)))), (min(var_0, ((-105 ? var_1 : (arr_29 [i_11] [i_9 + 1] [1] [i_5])))))));
                    }
                }
            }
        }
        arr_40 [i_5] [i_5] = ((~((min(1, 43877)))));
    }
    #pragma endscop
}
