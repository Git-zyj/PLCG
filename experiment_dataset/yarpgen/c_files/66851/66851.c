/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 5859;
    var_21 = (max((5859 * var_8), (max(var_5, 40))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_22 = 5859;
        var_23 = 268173312;
        arr_3 [i_0] = (arr_0 [i_0]);
        var_24 = (min(var_24, (((~(arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = (arr_9 [i_3] [i_1] [i_1]);
                    var_25 = (min(var_25, (((!(((arr_9 [i_1] [i_3] [i_3 + 1]) < (arr_10 [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_26 &= 687540166;
                                var_27 = -7567;
                                arr_19 [i_2] [i_1] [i_4] = ((~(arr_8 [i_1] [1])));
                            }
                        }
                    }
                    arr_20 [i_1 - 1] [i_1] [1] = (((!(arr_9 [6] [i_1] [7]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_28 = (min(var_28, (285978576338026496 & 7998198069168147067)));

                        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_1] = 65535;
                            var_29 = (~-5052167414058766832);
                            var_30 = -1884171001096774648;
                            var_31 = (~49338);
                        }
                        for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_32 = (0 * 0);
                            var_33 = -0;
                        }
                    }
                }
            }
        }
        arr_35 [i_1] = 1;
    }
    #pragma endscop
}
