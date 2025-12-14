/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) || ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 = ((-1289798346 + (arr_2 [i_0])));
        var_19 = (var_4 ? (arr_1 [i_0]) : 1);
        var_20 = ((arr_2 [i_0]) ? (((arr_2 [i_0]) ? (((arr_0 [i_0]) | -252304388)) : (arr_0 [i_0]))) : (arr_2 [i_0]));
        var_21 &= (-(((967212022 >= (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = (~((-(arr_5 [i_1 + 2]))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_23 = ((((-(arr_14 [i_1] [i_5] [i_3] [i_1 + 2] [i_5] [i_3]))) > (arr_10 [i_3] [i_2] [i_5])));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] [i_2] [i_2] = (-2147483647 - 1);
                            var_24 = ((arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_5 [i_1 + 1]) : (max(((var_5 ? var_14 : var_12)), (arr_16 [i_5] [i_5] [i_5] [i_5] [i_3] [i_1 - 1]))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_2] = arr_12 [i_1] [i_3] [i_4] [i_5];
                        }
                    }
                }
            }
            arr_19 [i_2] = (~(((!(arr_14 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 + 1])))));
            arr_20 [i_1] [i_2] = ((arr_9 [i_2] [i_2]) ? ((+(min((arr_5 [i_2]), var_7)))) : (arr_9 [i_2] [i_2]));

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_25 [i_2] [i_2] = (((1073741823 <= var_17) * ((-(arr_21 [i_1 + 2] [i_2] [i_6])))));
                arr_26 [i_1 + 2] [i_2] [i_6] [i_6] = min(((((arr_9 [i_2] [i_1 - 2]) >= (!1715148970)))), var_6);
                arr_27 [i_2] [i_2] = ((!((((arr_24 [i_1] [i_1 + 1] [i_1 - 2]) ? ((-(arr_5 [i_1]))) : (arr_6 [i_1] [i_6]))))));
            }
            var_25 = ((967212006 || (((~(min((arr_21 [i_1] [i_2] [i_1]), (arr_7 [i_1 + 1] [i_2]))))))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_7] = (~(max((max(7, (arr_23 [i_1] [i_1] [i_7]))), (max((arr_11 [i_1 - 2] [i_7] [i_1]), 879065926)))));
            var_26 = arr_9 [i_1] [i_7];
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_35 [i_8] [i_8] [i_8] = ((-3 + 2147483647) >> (((((arr_6 [i_1 - 1] [i_8]) ? (arr_6 [i_1 + 1] [i_8]) : (arr_6 [i_1 - 1] [i_8]))) + 655857688)));
            arr_36 [i_1] [i_8] [i_8] = arr_11 [i_1] [i_8] [i_8];
            var_27 |= (-2147483647 - 1);
            var_28 = arr_34 [i_1 - 2];
        }
        arr_37 [i_1] [i_1 - 2] = ((((var_11 ? (arr_9 [i_1] [i_1 + 1]) : (arr_9 [i_1] [i_1 + 1])))) ? var_1 : (max((arr_33 [i_1] [i_1]), (((arr_4 [i_1 + 2]) ? (arr_5 [i_1]) : (-2147483647 - 1))))));
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_40 [i_9] [i_9] = ((-(arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        arr_41 [i_9 - 1] = (arr_28 [i_9 + 1]);
    }
    var_29 = (max(var_29, (min(var_8, 2147483647))));
    var_30 = (1610612736 ? 7 : var_14);
    var_31 = (var_15 ? var_2 : var_12);
    #pragma endscop
}
