/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((4660754063992570391 + var_13) + var_1));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (((var_7 > -13072) > (((((arr_2 [i_0] [i_0]) > (arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = (~4660754063992570391);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 = 0;
        arr_6 [i_1] = (((1 && 4660754063992570391) && ((!(arr_2 [i_1] [i_1])))));
        arr_7 [3] [6] = -1869769418;
        arr_8 [i_1] = arr_2 [i_1] [i_1];
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = var_12;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_20 = (((-1632628890 >= 35) ? 2019672637 : (min((min(231, (arr_15 [i_3] [7]))), (((!(arr_17 [i_2] [i_2] [i_4]))))))));

                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_4] = ((!(arr_12 [i_3] [i_4])));
                        var_21 = (arr_9 [i_2]);

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_4] [i_6] [i_3] = 32767;
                            var_22 = (((((1 ? 177 : 1))) - (arr_20 [i_6] [i_5 - 1])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] [6] [i_2] [i_2] = (arr_25 [i_7]);
                            var_23 = (arr_16 [i_2] [i_7]);
                            var_24 = ((224 >> (3005233602 - 3005233577)));
                        }
                        var_25 = (min((((!(arr_21 [i_2] [i_2] [i_4] [i_5 + 1])))), (max((!31806), (arr_16 [i_5 + 2] [i_5 - 1])))));
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_26 = -1632628890;

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_9] [0] [i_9] [i_8] [i_2] [i_9] = ((((max((arr_9 [i_8 + 1]), (arr_9 [i_8 + 1])))) ? (arr_9 [i_8 + 2]) : (((arr_9 [i_8 - 1]) ? (arr_9 [i_8 - 1]) : (arr_9 [i_8 - 1])))));
                            arr_37 [i_2] [i_2] [i_2] [6] [i_9] = (((!(arr_25 [i_8 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_2] [15] [i_4] [i_2] [i_4] = (((arr_25 [i_4]) - 2019672627));
                            var_27 = (arr_34 [i_10] [i_3] [i_3] [i_3]);
                            var_28 = ((-(arr_27 [i_2] [i_2] [i_3])));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_43 [i_2] [i_3] [i_3] [i_8] [i_11] [i_4] [i_8] = 1391851058502020965;
                            var_29 = (arr_9 [i_8 - 1]);
                            arr_44 [i_11] [i_8 + 2] [i_2] [i_3] [i_11] = (((min(4687239898816181908, var_15))));
                            var_30 = 5956900916364741286;
                        }
                        var_31 = ((((max((arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 2] [i_8 + 2]), (arr_29 [9] [i_8] [4] [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1])))) <= ((((arr_29 [i_8] [i_8] [i_8] [i_8 + 2] [11] [i_8 + 2] [1]) >= (arr_29 [i_8] [i_8 + 2] [i_8 + 1] [6] [i_8] [i_8 + 2] [i_8]))))));
                        var_32 = -17;
                    }
                    var_33 = (max(((max(1, 6863))), (arr_16 [i_2] [i_2])));
                }
            }
        }
    }
    var_34 = var_8;
    #pragma endscop
}
