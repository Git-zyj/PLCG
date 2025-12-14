/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 15;
        var_16 = (max(var_16, var_1));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (min(var_17, ((max(((max((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_1])))), (max(33, 32754)))))));
            arr_6 [2] [1] = ((max(((0 ? var_11 : -6824308829104938417)), 3490034058)) / ((((arr_0 [i_0] [i_0]) ? 127 : (arr_2 [i_0])))));
            arr_7 [i_1] = ((!(((-1709351354564222203 ? 12 : var_2)))));
            var_18 = (((((var_14 ? (arr_4 [i_1]) : 222))) ? var_12 : (((arr_4 [i_0]) ? (arr_4 [i_1]) : (arr_4 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [18] [i_2] [i_2] = -9223372036854775779;
            arr_12 [i_2] = (((((((var_14 ? (arr_2 [i_0]) : var_6))) ? 6824308829104938429 : (arr_9 [i_0] [i_2] [i_2]))) >> ((((((!(arr_8 [i_0] [i_2]))) ? var_0 : -4812741194172863943)) + 4812741194172863990))));
        }
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_25 [4] [i_7] [i_4] [4] [i_7] [i_4] = ((((max((arr_10 [i_4] [i_4 + 2] [i_4 + 2]), (~5)))) ? (arr_22 [i_5 - 1] [i_5] [i_3 + 1]) : (((var_5 * (arr_0 [i_4] [i_4]))))));
                                arr_26 [i_7] [i_4] [i_5] [i_6] = (((max(((7395685935715678170 << (var_11 - 65166))), 72057593769492480)) | (((((arr_23 [i_3] [i_4] [4] [i_7] [i_7]) > var_9))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_33 [i_4] [i_5 + 1] [i_4] = (((((max(-20, var_3))) ? var_2 : (((!(arr_1 [i_3 + 1])))))));
                                arr_34 [8] [8] [8] [i_4] [i_9] = ((max(var_8, 13072)));
                            }
                        }
                    }
                }
            }
        }
        var_19 = 4152727857570817127;
        var_20 = (max(var_20, ((max(229, 10)))));
    }
    var_21 |= var_3;
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    arr_45 [i_10] [i_11] [i_11] = ((((553037284 ? var_14 : (arr_43 [i_11]))) + (((max((arr_35 [i_10 - 2] [i_11]), var_10))))));
                    arr_46 [2] [2] &= ((((var_14 ? (arr_37 [i_10 - 2]) : (arr_37 [i_10 - 2])))) ? ((((max(var_15, -2113823364))) ? (arr_38 [i_10 + 2]) : (arr_35 [i_10] [i_10 + 1]))) : var_10);
                }
            }
        }
    }
    #pragma endscop
}
