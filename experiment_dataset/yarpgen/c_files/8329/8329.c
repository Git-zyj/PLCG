/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_7 ? (min(0, (!var_0))) : (((1 ? 19689 : -1087367581))));
    var_11 = ((((var_0 ? var_4 : 4))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((!(((-(((arr_1 [i_1]) ? 18446744073709551602 : (arr_0 [i_1]))))))));
            arr_6 [i_1] = ((max(((var_0 ? var_3 : (arr_4 [i_1])), var_0))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_13 = (max(var_13, (((((((1590 >= -49) ? (min((arr_9 [i_0] [i_2] [i_0] [i_2]), var_5)) : (arr_3 [2])))) ? -68 : ((((((var_1 ? (arr_7 [i_0] [i_3]) : var_6))) && (886661609 | 1)))))))));
                arr_12 [8] = (((arr_4 [i_0]) - (((((arr_4 [i_2]) + -1557533938698248806)) - (arr_8 [i_2] [i_3] [14])))));
            }
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                var_14 = ((var_2 + 2147483647) << (((max(3234768374, (max(7159867318103478256, 2742834897)))) - 7159867318103478256)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_15 = (((((max(5, 30)))) % var_9));
                            var_16 = ((((max((arr_22 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 3] [i_4 + 1] [19]), var_8))) > (((var_3 && (arr_22 [i_4 + 3] [i_4 + 2] [2] [i_4 + 3] [i_4 + 3] [i_5]))))));
                        }
                    }
                }
                arr_23 [4] [4] |= ((+((27 ? (arr_16 [i_0] [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 + 3]) : (arr_16 [i_0] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2])))));
                var_17 = (arr_4 [i_4]);
                var_18 = (max(var_18, ((((max(((2486 ? var_3 : -10)), 1)) ^ ((var_8 ? (((arr_22 [12] [4] [i_4] [i_2] [i_2] [i_0]) ^ var_0)) : 1)))))));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_26 [1] [i_2] [1] [1] = (~1);
                var_19 = (~var_6);
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_20 = ((var_7 % (arr_14 [i_8])));
                arr_30 [i_0] [i_2] [i_2] [1] = ((-(((arr_10 [i_8] [i_2] [i_0] [i_0]) + (arr_10 [1] [i_0] [i_2] [i_2])))));
                var_21 = var_1;
            }
            var_22 -= 2382666316;
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_23 = (arr_17 [i_0] [i_9] [3] [i_9]);
                            var_24 = (arr_27 [1] [i_9] [7] [i_12]);
                            arr_39 [i_9] [7] [i_10] [i_9] [i_9] = var_7;
                        }
                    }
                }
            }
            var_25 -= (min(((((~(arr_29 [i_0] [i_0] [i_0] [i_9]))) << (((min((arr_22 [i_9] [9] [i_0] [4] [i_0] [i_0]), -7159867318103478256)) + 7159867318103478287)))), ((((arr_20 [i_0] [0] [i_9]) >> (((arr_20 [i_9] [8] [i_0]) - 19439)))))));
            var_26 = ((!((!(((var_3 - (arr_3 [1]))))))));
        }
        var_27 = var_8;
        arr_40 [1] = min((arr_36 [i_0] [i_0] [i_0] [i_0]), (((arr_11 [i_0]) | (var_9 & var_9))));
    }
    var_28 = var_3;
    #pragma endscop
}
