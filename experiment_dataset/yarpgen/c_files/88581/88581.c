/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = var_11;
        var_20 = (-(((arr_0 [i_0 + 1] [i_0]) ? 1882650295772678377 : -52)));
        var_21 = (min(var_21, (((+(((arr_0 [i_0 - 1] [i_0 + 1]) ? var_10 : (((arr_0 [i_0] [i_0]) - (arr_1 [i_0] [i_0 + 1]))))))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((-2041737744358529365 > (((max(-52, (arr_2 [i_0] [i_1] [i_1])))))));
            arr_7 [i_0] [i_1] = (max(((max(((var_0 ? 3553053967 : (arr_4 [i_1]))), 516665088))), (~15)));
            var_22 = (min(var_22, (((+((max((arr_3 [i_0 + 1] [2]), (arr_4 [1])))))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_2] [i_0 - 1] [i_0 + 1] = 504403158265495552;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        var_23 = ((((68 ? -1622092235 : 1))));
                        var_24 = ((!((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0] [i_0 + 1]) : -1)))));
                        var_25 = (max((arr_13 [i_2]), (((arr_8 [i_0 + 1]) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1])))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    {
                        var_26 = (max(var_26, 4026531840));
                        var_27 -= (((((arr_2 [i_5] [i_6] [i_6]) || (arr_4 [10]))) ? var_1 : var_8));
                    }
                }
            }
            var_28 = (~7720919965912975349);
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_29 = (min(var_29, (((-4294967295 == (((((var_5 ? (arr_12 [i_0] [i_0 - 1] [i_0]) : var_7))) ? (arr_16 [i_8] [i_8] [i_8]) : (arr_17 [i_8] [i_0 - 1]))))))));

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_30 = -4;
                var_31 = min(9223372036854775807, (arr_25 [i_8] [i_0]));
            }
        }
    }
    #pragma endscop
}
