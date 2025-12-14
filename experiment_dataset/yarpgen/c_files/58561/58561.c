/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = ((-(arr_3 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = ((!((!(((var_5 ? var_1 : var_4)))))));
            var_15 = (min(var_15, var_5));
        }
        arr_7 [i_0] [8] = (((((arr_0 [i_0]) - var_6)) < ((((!((!(arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_16 = ((!(arr_6 [i_2 + 4] [i_2 + 4] [i_2 + 1])));
                    var_17 += ((!(arr_6 [i_0] [i_2] [i_3])));
                    arr_12 [8] [i_0] [1] = var_0;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_18 = (arr_1 [i_4]);
                                var_19 = ((!(!var_0)));
                            }
                        }
                    }
                }
            }
        }
        var_20 &= min(((max((arr_11 [i_0] [i_0] [8] [i_0]), (arr_11 [i_0] [i_0] [0] [i_0])))), (min(var_5, var_9)));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_21 = (((((arr_18 [i_6]) << (var_5 + 417951593261757030))) >= (~243)));
        arr_21 [i_6] [i_6] = (((arr_5 [i_6]) ? (((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_1 : -406471449221824692)) : -var_7));
        var_22 = (((-(min(-406471449221824682, var_3)))) / var_4);
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_22 [i_8])));
                    var_24 = 4309710234785991379;
                    var_25 = 8053773907926305521;
                }
            }
        }
        var_26 = arr_27 [2] [i_7] [i_7 + 1] [2];
    }
    var_27 = (~((1034100028678966432 >> (-4508089588197348835 + 4508089588197348897))));
    #pragma endscop
}
