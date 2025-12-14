/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = -15185;
    var_18 = 2649566055;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 51854;
        var_19 = 230;
        var_20 = ((((((arr_1 [i_0]) * 1))) ? ((1 ? 1 : 61023)) : 51854));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_1] [0] = ((-20344 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])));
            arr_9 [i_0] [i_1] = ((-8329442426116158326 ? 51882 : (arr_1 [i_0])));
            var_21 = ((1 - ((var_10 ? var_6 : var_6))));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_2] = ((((((arr_7 [i_0] [i_0] [i_0]) ? (arr_1 [16]) : (arr_2 [i_0] [i_2 + 1])))) ? 0 : var_2));
            var_22 = var_9;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_23 &= (((var_13 >= 45143) + ((1 ? 1946372186 : 1))));
                var_24 = ((var_1 ? var_0 : var_12));
                arr_16 [i_3] [i_3] [i_3] [i_2] = 182;
                arr_17 [i_2] = (((arr_6 [i_0]) * ((((arr_4 [i_0]) == (arr_15 [i_2] [i_0]))))));
                arr_18 [i_0] [i_2] [19] = (((arr_4 [i_2 - 3]) <= (arr_7 [i_2 - 1] [i_2 + 1] [i_2])));
            }
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_25 = (((arr_13 [i_0] [i_4 + 1] [i_4 + 1] [19]) - var_0));
            arr_22 [i_0] &= 8992053085734898453;
            var_26 = (((82 + 46365) ? (((87 - (arr_11 [i_0] [i_0] [10])))) : (var_4 + -5)));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_27 = (((-(arr_14 [19] [7] [i_0] [i_0]))));
            arr_25 [i_0] [i_5] = (((arr_24 [i_0]) ? 1 : var_11));
            arr_26 [i_5] [i_5] = ((((10630 ? 8501351225475154147 : (arr_23 [i_0] [i_5] [1]))) / (394345316758500667 | 62634)));
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_31 [i_6] = (arr_27 [i_6] [12]);
        arr_32 [i_6] [i_6] = (-((~(arr_15 [2] [i_6]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 &= (((~(arr_30 [i_7]))));
        arr_37 [1] = ((var_1 ? ((var_12 ? -10631 : var_14)) : -var_8));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_29 = (95 ? (arr_39 [i_8] [i_8]) : (arr_39 [4] [i_8]));

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_42 [i_8] = 16;
            var_30 = (((((39951 - (arr_39 [15] [i_9])))) ? var_9 : (((494184227 || (arr_41 [i_8] [i_9]))))));
            arr_43 [i_9] [i_9] [9] = ((2008524997 ? -1853127904723084016 : -67));
        }
        arr_44 [i_8] = (arr_40 [i_8]);
    }
    #pragma endscop
}
