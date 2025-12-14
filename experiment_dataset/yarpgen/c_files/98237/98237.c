/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (((((var_8 && (arr_2 [i_0] [i_1] [i_0])))) - (max(((-52 * (arr_2 [i_0] [i_0] [i_0]))), 1))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_20 &= ((((0 ? -52 : 1)) | ((~((29 ? var_18 : var_13))))));
                    var_21 = (((((-((min(30, 1)))))) ? (((-(arr_0 [i_1 - 1])))) : ((-((max((arr_2 [i_0] [1] [i_2]), 1)))))));
                }
            }
        }
    }
    var_22 = (min((+-1), ((max(var_12, var_9)))));
    var_23 = var_18;

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_24 = (min(1, 1));
        var_25 = (((max(1, (arr_8 [i_3])))));
        var_26 = (((max(-1, ((min(1, 1))))) - ((max(1, (1 >= 0))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_27 = (((((((arr_11 [i_4]) * var_9))) ? (arr_12 [i_4]) : (((!(arr_12 [1])))))) < ((min(((max(var_6, var_13))), (arr_10 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_28 = ((-((((((arr_13 [1] [1] [i_6]) || var_10))) * ((max((arr_18 [i_5] [i_6]), 1)))))));
                    var_29 = (max(var_29, (((((min((arr_14 [1] [i_5]), (((arr_14 [i_4] [i_6]) ? (arr_11 [i_4]) : var_14))))) ? (arr_16 [i_4] [i_4] [i_5] [i_6]) : ((-(1 >> 1))))))));
                    var_30 = (min((((((min(64, var_18))) >= (arr_16 [i_4] [i_5] [i_6] [i_6])))), (((((arr_16 [i_4] [i_4] [i_5] [i_6]) * (arr_17 [i_6] [i_5] [i_5] [i_4]))) ^ (((arr_11 [i_6]) + var_13))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_31 = ((max((arr_17 [i_4] [i_4] [i_4] [i_4]), (arr_17 [i_8] [i_7 - 1] [i_7] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_32 = (min(var_32, (min(1, 127))));
                                var_33 = (min((max(((((arr_18 [i_4] [i_7]) == (arr_20 [i_9] [i_10])))), (arr_13 [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (arr_16 [i_4] [i_4] [i_9] [i_4])));
                                var_34 = min(1, 0);
                                var_35 = (min(var_35, var_14));
                            }
                        }
                    }
                }
            }
        }
        var_36 = ((((1 ? 1 : 0))) && (arr_16 [i_4] [i_4] [i_4] [i_4]));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_37 = (max((((min(var_13, (arr_9 [i_11]))) ? ((max((arr_19 [i_11] [i_11]), (arr_32 [1])))) : 1)), ((min(((((arr_17 [1] [i_11] [1] [1]) || 1))), (arr_32 [i_11]))))));
        var_38 = (min((~41), 31));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        var_39 &= (!((((arr_24 [i_12 - 1] [i_12 - 1] [i_12]) ? 0 : 127))));
        var_40 &= (-41 < ((min(1, 1))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_41 = (max((((!(arr_37 [i_12 - 1] [i_13])))), (((arr_31 [i_12] [i_12]) >> 1))));
                    var_42 = -1;
                    arr_41 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] = ((~(arr_10 [i_12 - 1] [i_12 - 1])));
                }
            }
        }
        var_43 = ((~((((max(var_4, (arr_16 [i_12 - 1] [i_12] [i_12] [i_12 - 1])))) - 1))));
    }
    #pragma endscop
}
