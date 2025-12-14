/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((!(!var_9)))), (1 <= 50956));
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((((-121 ? (arr_5 [i_1] [i_2]) : (arr_11 [i_0] [i_0] [i_0])))) >= (((((arr_8 [i_3] [i_2 + 1] [9] [i_0]) >> (((arr_0 [i_2] [i_3]) - 47832)))) ^ (((min(120, 0))))))));
                                var_16 = (max((((-(arr_2 [i_0] [i_2 + 1] [i_4])))), (((arr_7 [i_2] [i_2 + 1] [i_4] [13] [i_4]) ? 17216300103654776701 : (arr_2 [i_0] [i_2 - 1] [i_2])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 = (max((((~(((!(arr_14 [i_0] [i_0] [i_5 + 1]))))))), (((!-30163) ? (arr_2 [i_0] [i_0] [i_0]) : (min(var_12, 0))))));

                            for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] [i_7] [i_7] = (min(((235 ? ((max(var_9, (arr_12 [i_0] [i_1] [i_6])))) : 0)), (-1319294533 < var_4)));
                                arr_20 [i_7] [i_1] [i_1] [7] [i_1] [i_1] = ((((min((arr_11 [i_7 - 2] [i_1] [i_7]), var_12))) || ((max(((min(var_5, 1))), (1152921504606846975 / 30720))))));
                                var_18 = (~244);
                            }
                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                arr_24 [i_8 + 1] [i_8] [2] [i_0] [i_5 + 1] [i_0] [i_0] = ((var_10 ? -var_7 : var_7));
                                var_19 = (arr_11 [i_0] [i_0] [i_0]);
                            }
                            for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_20 = (!var_1);
                                var_21 = max((min((arr_0 [i_9 - 3] [i_5 + 1]), ((max((arr_23 [i_9] [i_9] [i_5] [i_6] [i_9]), var_10))))), (!23981));
                                var_22 = ((-13171 - ((var_12 - ((max((arr_10 [i_0]), 1069547520)))))));
                                arr_27 [i_0] [1] [i_9] [i_9] [i_9] = (arr_5 [1] [i_1]);
                                var_23 = (min(((((min((arr_8 [i_5 + 1] [i_5] [i_5] [i_5]), (arr_2 [i_0] [5] [i_5])))) ? var_9 : (arr_10 [0]))), (((arr_16 [i_0] [i_1]) >> (((arr_1 [i_9]) - 3638979135))))));
                            }
                        }
                    }
                }
                var_24 = 255;
                arr_28 [i_1] = ((((!(((-(arr_22 [i_0] [4] [i_0] [i_1])))))) ? (arr_0 [i_0] [i_0]) : (((((var_4 ? (arr_13 [i_0]) : var_11))) ? ((((!(arr_13 [3]))))) : -4171714094353720417))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                var_25 = ((((max((arr_30 [i_10]), (arr_31 [i_10])))) ? (((min((!0), (arr_31 [i_11]))))) : 10));
                var_26 = (arr_30 [i_10]);
            }
        }
    }
    var_27 = (max(((18947 * ((-107 ? 0 : var_1)))), (((!(49661 & var_12))))));
    #pragma endscop
}
