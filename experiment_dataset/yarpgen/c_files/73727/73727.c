/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? 116 : var_7)) + (((-((min(var_3, var_9))))))));
    var_12 = (max(17215, ((var_2 ? ((min(var_2, var_3))) : var_5))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_13 = 5196568829905755991;
        var_14 = ((~(((9232 >= var_4) ? (arr_2 [i_0 - 1] [i_0]) : -1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 += 105;
        arr_6 [i_1] = ((((arr_1 [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_5 [i_1]))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = (arr_7 [i_1] [13] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (41 % var_8)));
                            arr_18 [i_1] [i_2] [i_3] = (((arr_11 [i_1] [i_4 + 3]) != var_8));
                            var_17 = ((var_1 ? (arr_8 [i_1] [i_4 - 1]) : (arr_8 [i_1] [i_4 - 1])));
                            arr_19 [i_1] [i_2] [i_2] [i_1] [i_3] [i_3] [i_3] = 16;
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] [i_4] = (~17215);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [i_7] [i_7] [i_6] [i_6] [8] [i_1] = (arr_11 [i_1] [6]);
                        var_18 = (17215 <= 25489263);
                        var_19 = (max(var_19, var_1));
                    }
                }
            }
        }
        var_20 = ((!(arr_22 [i_1] [i_1] [i_1])));
    }
    #pragma endscop
}
