/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(var_10, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] = (arr_0 [i_1]);
            var_19 = (min(var_19, var_3));
            arr_7 [i_0] [i_1] [3] = (arr_4 [i_0] [i_0]);
            var_20 = (arr_3 [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_9 [i_0] [i_2]) ? (arr_10 [i_0] [i_2]) : (arr_8 [i_2] [i_0])));
            var_22 = ((3797689770698131085 | (arr_11 [i_0])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] = ((((((arr_12 [i_0]) >= (arr_3 [i_0] [2])))) < ((var_6 * (arr_10 [8] [i_0])))));
            var_23 = ((((((arr_11 [i_3]) ? -376849901272901826 : 238))) || ((((arr_1 [i_0]) ? var_11 : (arr_13 [13] [i_3] [i_0]))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_24 = (max(var_24, (((0 || (arr_10 [i_0] [i_4]))))));
                var_25 |= (arr_18 [i_0] [i_0] [i_5]);
                var_26 ^= var_10;
                arr_21 [i_0] = (((arr_1 [i_5]) >= (arr_0 [i_0])));
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_27 = (min(var_27, (arr_10 [i_0] [i_0])));
                            var_28 = ((!(arr_29 [i_7] [i_7 + 1] [i_7] [i_7] [1] [i_7] [i_6 - 1])));
                        }
                        var_29 = (arr_5 [12] [i_4] [i_6]);
                    }
                }
            }
            arr_30 [i_4] [i_0] = (var_5 + -3783589920532021486);
            var_30 = (((arr_1 [i_0]) ? ((~(arr_24 [i_0] [i_0] [i_4]))) : 6834846296822807304));
        }
        arr_31 [6] [i_0] = ((var_8 >> (((arr_22 [i_0] [i_0] [i_0]) - 92))));
        var_31 = arr_20 [i_0] [i_0];
        var_32 = (min(var_32, (arr_0 [i_0])));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_33 = ((arr_10 [i_9] [i_9]) < (min(var_14, (((arr_18 [i_9] [i_9] [i_9]) - (arr_18 [i_9] [i_9] [i_9]))))));
        arr_34 [i_9] = (((((~((min(77, var_11)))))) ? ((1 ? (arr_27 [i_9] [i_9]) : (max((arr_19 [22] [i_9]), (arr_15 [i_9]))))) : (((min((((arr_12 [i_9]) || 1)), var_12))))));
    }

    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_38 [i_10] = (arr_22 [i_10] [10] [i_10]);
        var_34 = var_14;
        var_35 = (((((2147483647 ? (arr_5 [i_10] [i_10] [i_10]) : (arr_2 [i_10])))) ? (30 <= var_12) : ((-(max(179, 3983422391116903677))))));
    }
    #pragma endscop
}
