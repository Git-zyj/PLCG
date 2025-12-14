/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((!4294967295), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = -908084644;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [10] [i_2] [i_0] = -var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((~(arr_4 [i_0] [i_0])));
                                arr_14 [i_0] = (((arr_10 [i_0] [1] [i_0] [i_2] [i_0] [i_4 + 1] [8]) ? (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4 + 1] [i_2]) : -492283122));
                                var_21 = (min(var_21, var_15));
                                var_22 = (((arr_9 [i_3] [i_4 + 1] [i_4] [i_3] [8] [12]) != ((-492283123 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -492283106))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = -37;
                }
                var_23 *= -492283123;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [i_5] [0] [2] [5] = (max(3, (((-116 >= (arr_0 [i_6 - 1] [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_24 = ((((8 && (arr_11 [i_5 - 1] [i_6 - 1]))) ? (((!(arr_9 [i_5 + 1] [i_6 - 1] [i_7] [i_5 + 1] [i_5 + 1] [i_7])))) : (((((arr_11 [17] [i_9]) * 0)) << (((((arr_27 [i_5] [i_6 - 1] [i_6] [i_6 - 1]) ? 492283110 : var_1)) - 14))))));
                                var_25 = ((((((arr_26 [i_6] [i_6] [i_5 - 1] [i_6] [i_9] [i_7]) && (arr_26 [1] [1] [i_5 - 1] [1] [1] [i_9])))) | ((max((arr_2 [i_5] [i_8] [i_5 - 1]), (arr_2 [i_5] [i_6] [i_5 - 1]))))));
                            }
                        }
                    }
                    arr_31 [i_7] [i_5] [i_5] [i_5] = (arr_11 [i_5] [i_5]);

                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        arr_34 [i_5] [i_7] [i_5] = (((min((arr_1 [i_7]), (arr_32 [i_5 - 1] [i_6 - 1])))) ? ((min(1, (arr_32 [i_5 - 1] [i_5])))) : ((0 % (arr_13 [i_10 + 2] [i_7] [i_6] [12] [i_6] [i_5 - 1] [i_5]))));
                        arr_35 [i_7] [i_5] = (min((arr_20 [i_5] [i_6] [i_7] [2]), 0));
                        var_26 += (max((arr_19 [i_5 - 1] [i_6 - 1]), (((arr_19 [i_5 + 1] [i_6 - 1]) + 1))));
                        arr_36 [i_5 + 1] [i_5] = ((arr_29 [i_5] [i_6] [i_7] [i_5] [i_5] [i_7] [i_10]) && 908084644);
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            arr_44 [i_11] [22] [i_12 + 2] &= 3;
            arr_45 [i_11] [i_12] = (min(((max((arr_42 [i_12 - 1] [i_12 + 2]), (arr_42 [i_12 + 3] [i_12 + 3])))), (arr_42 [i_12 + 2] [i_12 + 3])));
        }
        arr_46 [i_11] = ((+(((arr_43 [i_11]) ? (arr_43 [i_11]) : (arr_43 [i_11])))));
    }
    #pragma endscop
}
