/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = 42;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (max(var_19, (arr_2 [i_0] [i_1])));
            arr_6 [i_0] = 4;
            var_20 = (((arr_4 [i_0]) & var_13));
            arr_7 [i_0] [i_0] = ((var_3 ? 32 : (arr_0 [i_1])));
        }
        arr_8 [i_0] [i_0] = (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = ((var_14 * (arr_4 [i_2])));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_23 [i_2] [i_2] [i_4] [i_5] [6] [i_2] [i_2] = (arr_1 [i_2] [i_3]);
                            var_21 = ((536862720 ? (var_14 | 4177920) : (arr_4 [i_2])));
                            arr_24 [i_2] = (arr_17 [i_2 + 1] [i_3] [i_2] [i_3]);
                            arr_25 [i_2] [4] [i_4] [i_5] [i_2] = ((~(arr_9 [i_2 - 3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_33 [5] [i_3] [i_4] [i_4] [i_7] [i_7] [i_2] = 4177928;
                            var_22 = (((arr_28 [i_2 - 1] [i_2 - 3] [i_4] [7]) ? var_13 : (arr_28 [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 1])));
                        }
                    }
                }
                var_23 = (min(var_23, (((-(arr_22 [i_2] [i_2 - 2]))))));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_24 = (((!122) ? (((52084 ? 31 : 1))) : var_0));
                            arr_42 [i_2] [i_3] [i_2] [i_3] [i_2] = var_4;
                            arr_43 [i_2] [i_2 - 3] [i_2] [i_9] [i_2 - 3] [i_11] = ((~(arr_15 [0] [i_2 - 3] [0] [0])));
                            var_25 = (max(var_25, -12262));
                        }
                    }
                }
                arr_44 [i_2] [i_3] [i_2] &= (--12261);
                var_26 = -123;
                arr_45 [i_2] [i_2 - 3] [i_2] [i_9] = (((arr_27 [i_2] [i_9]) ? (arr_32 [i_2 + 1] [i_2 + 1] [i_9]) : (arr_35 [i_2 - 2] [i_3] [i_9] [i_9])));
            }
            arr_46 [i_2] = ((72057456598974464 ? -110 : -4177920));
            arr_47 [i_2] [i_2] [i_2] = (((arr_12 [i_2] [i_2]) ? (arr_12 [i_2] [i_3]) : 108));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_52 [i_2] [i_12] = (-(arr_41 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 2] [i_12] [i_12]));
            arr_53 [i_2] [i_2] = (arr_49 [i_2 + 1] [i_2 + 1] [3]);
        }
    }
    var_27 = var_2;
    #pragma endscop
}
