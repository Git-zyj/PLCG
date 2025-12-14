/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0]) && (((arr_1 [i_0]) > var_4)))) ? (((arr_0 [i_0]) / (9 - var_1))) : ((1620640919938833868 << (((-6415012326943558121 ^ var_2) - 6415012326943558138))))));
        var_16 = (((arr_0 [i_0]) / (arr_0 [i_0])));

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_17 = (arr_0 [i_1]);
            var_18 = ((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]) > (((arr_2 [i_1] [i_1] [i_1 - 1]) * (arr_2 [i_1 + 3] [0] [i_1 - 4]))));

            for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
            {
                var_19 = (var_3 || 115);
                var_20 = ((145911756 < (arr_7 [i_0] [i_0] [i_0] [i_0])));
            }
            for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
            {
                var_21 = (((((((((-(arr_0 [i_0]))) + 2147483647)) >> (var_6 - 189)))) || ((min((arr_9 [i_1 - 4] [5] [i_3] [i_3 - 1]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                arr_10 [i_0] [8] [i_3 + 2] = (max(var_13, (arr_9 [i_1 - 2] [6] [i_1 - 4] [i_1 - 4])));
            }
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_21 [i_0] [i_4 - 2] [i_5] [i_6] = (((arr_2 [i_4 - 2] [i_5 + 2] [i_5 + 3]) == (arr_2 [i_4 - 1] [i_5 + 2] [i_5 - 1])));
                    arr_22 [i_0] [8] [i_0] [i_0] = (((arr_9 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2]) ? var_1 : (arr_18 [i_4 - 1] [i_4 - 2] [i_5 + 3])));
                }
                var_22 = ((arr_12 [i_4 + 1] [i_4 + 1]) ? 183 : (arr_12 [i_4 - 1] [i_4 - 2]));
                var_23 = ((-(arr_7 [i_0] [i_4] [i_4] [i_5 + 2])));
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    var_24 = (((arr_25 [i_7 - 2]) & (arr_25 [i_7 - 1])));
                    arr_28 [i_7] [i_7] [8] = ((24657 != (arr_8 [i_7 + 3])));
                    var_25 = ((-(arr_25 [i_0])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_26 = (((arr_29 [i_4 - 1] [i_7 + 3] [i_7] [i_7 - 1]) ? (arr_29 [i_4 + 1] [i_7 - 1] [i_7] [i_7 - 1]) : (arr_29 [i_4 + 1] [i_7 + 1] [i_7] [i_7 - 3])));
                    var_27 = (max(var_27, (arr_12 [i_4 + 1] [i_7 - 1])));
                    arr_33 [i_0] [i_0] [i_4] [i_7] [i_9] = -32764;
                }
                arr_34 [i_7] [i_0] [i_4 + 2] [i_7] = ((~(arr_2 [i_4 + 2] [i_4 - 2] [i_7 + 1])));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                arr_39 [i_4] [i_4] = (((arr_11 [i_10]) ? 16826103153770717748 : (arr_16 [i_4 - 1] [i_10 + 2] [i_10 - 1])));
                var_28 += ((-(((arr_13 [i_10 + 1]) - (-2147483647 - 1)))));

                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_29 = (((arr_19 [i_10] [i_10 + 1] [i_10 + 2]) ? var_2 : (arr_5 [i_10] [i_10] [i_10 + 1] [i_10 + 1])));
                    var_30 = 1;
                }
            }
            var_31 = ((-29 ? (arr_19 [i_0] [i_4 + 2] [i_4 + 2]) : 2551484725673341962));
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_32 = ((~(max(var_3, (((arr_24 [i_0]) ? var_5 : 9377047664703238479))))));
            var_33 = 66;
        }
    }
    var_34 = (!var_8);
    #pragma endscop
}
