/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-2147483647 - 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0] = ((-(arr_0 [i_0 + 2])));
        var_12 = ((4080 + (arr_0 [i_0 + 4])));
        var_13 = ((-((var_8 ? (arr_1 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (min(var_14, ((((arr_3 [i_0 + 2] [i_1]) <= -32720)))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    var_15 *= (((arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 3] [i_2]) > var_1));
                    arr_11 [i_0] [i_0] [i_0] [i_0 + 2] = ((((((arr_1 [i_0]) ? (arr_3 [i_0] [i_1]) : 2475656905))) ? (arr_0 [i_1]) : (((arr_6 [i_0] [i_1] [5] [i_0 + 1]) ? (arr_6 [i_0] [i_1] [13] [i_3]) : (arr_0 [12])))));
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    arr_14 [i_4] |= ((((((arr_4 [i_4]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0])))) ? (((192 || (arr_9 [i_0] [i_1] [i_0] [i_1] [14])))) : (arr_5 [i_0 + 4] [i_0] [7] [i_4 + 1])));
                    arr_15 [i_0] [i_2 - 1] [i_0] = (((arr_10 [i_0 - 1] [i_1] [i_2] [i_4 + 1]) ? (arr_10 [i_4] [i_4] [i_4 - 1] [i_4]) : (arr_8 [i_4] [i_2 - 1] [i_0] [i_0])));
                    var_16 = (((arr_13 [9] [i_1] [i_4 - 1] [i_0] [i_2] [i_2 - 1]) << ((((-127 ? (arr_3 [6] [i_1]) : 0)) - 51760))));
                    arr_16 [i_0] [1] [i_0] [1] = (((arr_10 [i_2] [i_2] [i_2] [i_2 - 1]) | (arr_10 [i_1] [10] [i_1] [i_2 - 1])));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_17 = ((-28 ? -2746 : (arr_9 [18] [i_1] [i_2] [1] [i_5])));
                    arr_20 [i_5] [i_0] [i_1] [i_0] [i_0] = ((0 ^ (arr_10 [i_0 + 3] [18] [18] [i_0])));
                    arr_21 [i_0] = (((arr_17 [i_1] [i_2 - 1] [i_5] [i_0]) ^ (arr_17 [i_1] [i_2 - 1] [i_2] [i_0])));
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_26 [18] [i_1] [i_0] [i_6] = -23757;
                    arr_27 [i_0] [i_0] [i_2 - 1] [i_6] = ((!(arr_23 [18] [i_1] [i_1] [i_1])));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_7] [i_0] [i_8] = (((arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) == (arr_25 [i_2] [i_2 - 1] [i_2] [i_0 + 2])));
                        var_18 = (arr_24 [i_0] [14] [i_0] [i_7] [14] [i_8]);
                    }
                    arr_33 [i_0] [i_0] = (((((arr_5 [i_7] [i_7] [i_7] [i_7]) ? 17659 : (arr_22 [i_2] [i_2] [i_0] [i_0]))) ^ (arr_22 [i_1] [i_1] [i_2 - 1] [6])));
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_19 = (((-17575 || 65532) >= (arr_19 [i_0] [i_0])));
                    var_20 = (max(var_20, ((((arr_17 [i_0] [i_0 + 4] [i_9 - 1] [i_1]) - (arr_17 [i_0] [i_0 + 3] [i_9 + 3] [i_1]))))));
                    var_21 += (arr_4 [i_1]);
                    arr_36 [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) ? 27 : (arr_18 [i_9 - 1] [i_0] [i_0 + 1] [i_2 - 1] [i_1] [2])));
                    var_22 = ((((var_3 + (arr_28 [i_0] [i_0]))) / (((arr_35 [i_0] [i_0] [21] [i_0]) % 120))));
                }
                var_23 = (((arr_5 [i_0] [i_0 + 4] [i_0 + 4] [i_0]) / (arr_5 [17] [i_0 + 1] [i_0 + 1] [i_2])));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_24 = (arr_24 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_10]);
                var_25 = ((2147483630 >> (165 - 139)));
            }
            var_26 = (((arr_8 [i_0] [i_0] [14] [i_1]) + (arr_34 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 4])));
        }
        var_27 = (((arr_10 [i_0] [7] [i_0 + 3] [i_0]) > (arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 4] [i_0])));
    }
    #pragma endscop
}
