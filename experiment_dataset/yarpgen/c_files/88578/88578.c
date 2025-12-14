/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_16 = (69 ? var_14 : (((~((3621082565 ? -97 : 673884744))))));
        var_17 = (max(var_9, (((arr_0 [i_0 - 2]) ? var_6 : var_12))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = ((-(max((arr_2 [i_1]), (arr_2 [i_1])))));
        var_19 = (max((arr_1 [i_1]), (max((arr_1 [i_1]), (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_20 ^= ((arr_5 [i_2 + 2]) ? (arr_5 [i_2 + 2]) : -var_4);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_21 &= max(219, 1651857537);
                        arr_10 [i_1] [i_1] [i_2] = (max((((~(~var_15)))), (max((max((arr_2 [i_2]), var_5)), (max(var_1, (arr_0 [i_1])))))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_16 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_6] [i_6] = ((-(((-(arr_4 [i_1] [i_1]))))));
                            var_22 = (var_0 ? (!var_7) : (arr_13 [i_2 + 2] [i_6] [i_3 - 1] [i_5] [i_5]));
                            var_23 = (min(var_23, (((-(arr_13 [5] [5] [5] [i_5] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_24 |= (max((!var_9), (max((arr_5 [i_7]), (arr_6 [i_2 + 2] [i_2 + 2])))));
                            arr_20 [i_1] [i_2] [i_3 + 1] [i_2] [8] [3] = (~116);
                        }
                        var_25 += ((!(arr_17 [9] [i_5] [i_3] [i_3] [i_2] [i_1] [i_1])));
                        var_26 = (max((max((arr_7 [i_5] [i_1]), (arr_8 [i_2 + 1] [i_1]))), (max((arr_7 [i_1] [i_1]), (arr_14 [i_1] [2] [i_1] [i_1] [i_1])))));
                    }
                    arr_21 [i_2] [i_2] = var_5;
                }
            }
        }
        arr_22 [i_1] [i_1] = ((-(((((var_13 ? var_9 : var_15))) ? (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_0 [i_1])))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_27 = (min(var_27, (~3621082565)));

        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            arr_30 [i_8] [i_8] [i_8] = (arr_13 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 + 1]);
            var_28 = (max(var_28, (((max(219, -115))))));
            arr_31 [i_8] = ((max((max((arr_4 [i_8] [i_9 - 1]), (arr_19 [i_9] [i_9] [i_9] [i_8] [i_8]))), 127)));
        }
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        var_29 = (max(var_29, ((max((arr_33 [i_10 + 2]), (((!(arr_33 [i_10 + 3])))))))));
        var_30 = (max(((-((-(arr_33 [i_10]))))), var_3));
        var_31 = ((~(!3621082556)));
    }
    var_32 = var_4;
    #pragma endscop
}
