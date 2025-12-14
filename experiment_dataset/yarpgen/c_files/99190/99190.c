/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(max((((var_2 ? var_7 : -2063717781))), var_3)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (((((~(arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) : (arr_1 [i_0])));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((((arr_3 [i_1 + 1]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1])))) ? var_2 : (~-8828984709835909250)));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_17 = (max(var_17, (((-25155 ? ((((arr_3 [i_1 + 1]) || -25162))) : (!14270331032599082184))))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_16 [i_3] [i_4 + 1] [i_4] = ((((arr_13 [i_3 + 2] [i_4 + 2] [i_4 + 1] [i_4]) ? (arr_13 [i_3 + 2] [i_4 - 3] [i_4] [i_4]) : 1056563821)));
                            arr_17 [i_5] [i_4] [i_3 + 1] [i_4] [i_1 - 4] = (((0 ? (arr_15 [13] [i_5] [i_5] [i_3] [i_3 + 2]) : (arr_15 [15] [i_4 - 2] [i_4] [i_4 - 3] [i_3 + 2]))));
                            var_18 = ((!((min((arr_11 [i_3] [i_3] [i_3 + 2]), (!var_2))))));
                            var_19 = (arr_3 [i_4]);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_20 = (((arr_30 [i_6 + 1] [i_9 - 1] [i_9 - 2] [i_9] [i_9 - 2] [i_9]) ? (arr_30 [i_6 + 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 2] [9]) : (arr_30 [i_6 + 1] [i_9 - 1] [i_9] [i_9] [i_9 - 2] [i_6 + 1])));
                                arr_31 [i_7] = (!var_9);
                                var_21 = ((-(~var_3)));
                            }
                        }
                    }
                    var_22 = (arr_19 [i_6] [i_6]);
                    var_23 = (((arr_30 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 4] [i_6 - 4] [11]) ? (arr_30 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 3] [i_6]) : (arr_30 [i_6] [i_6] [i_6] [i_6 - 4] [i_6 - 3] [i_6])));
                    var_24 = ((100 & (((arr_27 [i_7] [i_7]) ? (arr_10 [i_7]) : (arr_20 [i_7])))));
                }
            }
        }
        var_25 = (~49970);
        var_26 = (max(var_26, (255 > 1633174325)));
        var_27 -= (arr_12 [i_6] [i_6] [i_6] [i_6] [4]);
    }
    for (int i_11 = 4; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {
                    var_28 = (max(var_28, (max(-25155, (max((arr_7 [i_11 - 1]), ((((arr_20 [i_13]) ? (arr_4 [i_11]) : (arr_8 [i_13] [i_13] [i_13] [i_13]))))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_29 = (max(var_29, ((max(((((14270331032599082184 ? (arr_18 [i_11 - 2]) : (arr_20 [i_13]))) <= (min(14955337720322897187, (arr_42 [i_11]))))), ((!((max((arr_39 [i_14] [i_13] [i_12] [i_11]), (arr_12 [i_11] [i_12] [10] [i_14 - 2] [i_12])))))))))));
                                var_30 = 2233984712;
                            }
                        }
                    }
                    var_31 -= ((!((max((arr_19 [i_11] [i_11]), (max(2, (arr_37 [12] [i_12] [i_12]))))))));
                }
            }
        }
        arr_44 [i_11] = (min(((-(~-62))), ((~(arr_22 [i_11 + 1] [i_11])))));
    }
    #pragma endscop
}
