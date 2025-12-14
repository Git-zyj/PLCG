/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3 + 2] [i_1] [i_2] [i_0] = 4294967295;
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] = (min((min((arr_4 [i_3 + 2]), (arr_4 [i_3 + 2]))), var_13));
                    }
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        var_20 &= (((max(var_11, var_16)) | (((max(8128, 2))))));
                        var_21 = ((((arr_13 [i_4 + 2]) == 8021458489568493276)));
                        var_22 = var_6;
                        var_23 *= var_17;
                    }
                    arr_17 [i_0] [i_0] [i_0] = (min(var_13, ((-(arr_14 [20] [i_0] [i_2] [i_2])))));
                    var_24 = var_2;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] &= (max(var_3, (arr_5 [i_0] [9] [i_5] [i_5])));
                        var_25 = var_0;
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_2] [1] = var_8;
                        arr_25 [i_0] [i_1] [9] [i_2] [i_0] = var_1;
                    }
                    for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [15] [i_0] = -6419751255760031903;
                        var_26 = (min(((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) < var_13))), ((var_9 + (max(1, (arr_28 [i_2] [i_2] [4] [i_2] [i_0])))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_27 = ((18446744073709551606 || (arr_1 [i_2])));
                            var_28 += (arr_33 [i_7 - 3] [i_7 - 1]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, var_17));
                            var_30 = (arr_2 [i_0]);
                            arr_36 [i_0] [i_1] [i_2] [i_7] [i_7] [i_9] [i_9] = ((-(((!(arr_32 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [23]))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, ((((arr_38 [i_0] [12] [i_0] [i_0] [i_2] [22] [i_0]) ? (arr_38 [i_0] [i_1] [i_2] [i_7] [i_2] [i_1] [i_2]) : 51)))));
                            var_32 = ((var_10 ? (max(19, ((var_5 ? var_15 : var_1)))) : (arr_38 [17] [i_7 - 3] [i_0] [6] [i_0] [i_1] [i_0])));
                        }
                        var_33 = (arr_31 [i_0] [i_0]);
                    }
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        var_34 = max((max(var_12, (((arr_33 [i_11 - 1] [i_2]) ? var_8 : var_2)))), ((min((arr_28 [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1]), (arr_28 [i_1] [i_11] [2] [i_11 - 2] [i_11])))));
                        arr_41 [i_0] [i_1] [i_2] [i_11] [i_0] = 18446744073709551606;
                        var_35 = (min((((!(arr_27 [i_11 + 1] [i_1] [i_2] [i_11])))), (var_4 < var_14)));
                    }
                }
            }
        }
    }
    var_36 = (max(var_36, ((max(((min(var_17, var_12))), -10)))));
    #pragma endscop
}
