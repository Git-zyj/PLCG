/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89410
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
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (arr_4 [i_0] [i_1] [i_1] [i_2]);
                    var_14 = (min((((arr_2 [i_0]) / (arr_2 [i_0]))), ((-(((arr_6 [i_1]) ? var_0 : (arr_2 [i_0])))))));
                    var_15 = (((((arr_5 [i_2]) | -1024)) & (arr_5 [i_2])));
                    var_16 = (max((((((arr_3 [i_0] [1] [i_2]) ? (arr_1 [i_1]) : var_2)) % (1 || 0))), ((max((arr_6 [i_0]), var_1)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = -var_3;
        arr_9 [i_3] [i_3] = ((((-29768 % ((max((arr_3 [i_3] [4] [10]), -32423))))) > (arr_1 [i_3])));
        var_18 = min((arr_4 [i_3] [i_3] [i_3] [i_3]), ((((-32767 - 1) == 15))));
        var_19 |= ((1 ? -1850 : -17053));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 7;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((((max(((32422 ? -7 : 32420)), (arr_8 [i_4 - 1] [i_4 - 1])))) ? (arr_11 [i_3]) : (76 / -32423)));
                        arr_21 [i_6] [i_3] [i_3] [i_3] = (9 > 0);
                        arr_22 [i_4] [i_3] [i_6] = arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1];
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            var_21 = (min(var_21, (!32764)));
                            var_22 = ((-((max(6, var_10)))));
                        }
                        arr_30 [i_3] [1] = (arr_8 [i_3] [5]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_35 [9] [i_3] = (((arr_33 [1] [i_4]) - 17115));
                            var_23 = (max(var_23, (arr_19 [i_10] [i_5 - 1] [i_4 - 1] [i_3])));
                            var_24 = ((((((arr_26 [i_3] [i_3] [i_3] [5] [i_3] [i_3] [i_3]) * (arr_18 [i_3] [4] [1] [i_10])))) ? (((-32767 - 1) | 32756)) : (arr_26 [i_10] [i_10] [i_5 + 1] [i_5 - 3] [i_4 - 1] [i_4] [i_4 - 1])));
                            var_25 = arr_29 [i_3];
                        }
                        for (int i_11 = 2; i_11 < 8;i_11 += 1)
                        {
                            var_26 = ((0 | (arr_19 [i_4 - 1] [i_5 - 3] [i_5 - 3] [i_11 - 2])));
                            var_27 = (((arr_24 [i_4 - 1] [i_5 + 3] [i_5 - 2] [i_11 - 2]) && (arr_24 [i_4 - 1] [i_5 - 3] [i_5 - 3] [i_11 + 2])));
                            var_28 = (max(var_28, (arr_19 [i_3] [i_4 - 1] [i_5] [i_9])));
                            var_29 = arr_5 [i_3];
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_30 = (max(var_30, var_8));
                            var_31 = (max(var_31, (((arr_20 [i_4] [i_4 - 1] [i_5 - 3] [i_5 - 4]) < var_12))));
                            var_32 = (((((32767 & (arr_4 [i_4 - 1] [i_5] [i_9] [i_12])))) || -32423));
                        }
                        arr_41 [i_3] [i_3] [i_5 + 1] [i_9] = (((arr_25 [i_3]) == (arr_25 [i_3])));
                        arr_42 [i_3] [i_3] [i_3] [4] = (arr_40 [1] [1] [i_9] [1] [1]);
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        var_33 = ((((arr_12 [i_3] [i_3]) ? (arr_19 [i_3] [i_4] [i_5] [i_13]) : -3)));
                        arr_47 [i_3] [i_3] = (((((((max((arr_36 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_39 [i_3] [7] [7] [i_5] [i_13])))) == (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) / var_12));
                    }
                    var_34 = var_1;
                    var_35 = arr_15 [6] [6];
                }
            }
        }
    }
    #pragma endscop
}
