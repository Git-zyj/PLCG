/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0] [i_0 + 1]) ? (arr_2 [1]) : var_8));
        var_19 = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_20 = (min(var_20, (((-(arr_0 [i_0] [i_0 - 1]))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_21 = (max(var_21, (((arr_6 [i_0] [i_0 + 1] [i_0]) ? var_11 : (arr_6 [i_0] [i_0 - 1] [i_0 - 1])))));
                arr_10 [i_0] [i_0] [i_2] = (((arr_8 [i_2] [i_2]) && (arr_8 [i_2] [i_2])));
            }
            var_22 = arr_9 [i_0 - 1] [i_1];
            var_23 = ((var_17 - (arr_7 [i_0 - 1])));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_3 + 1] [i_3 + 1] [i_3 + 1] [12] = (((arr_15 [6] [i_3] [i_4]) ? (arr_15 [i_3] [7] [i_3]) : (arr_15 [i_0] [i_3 - 1] [i_0])));
                    var_24 = -2735154036218233320;
                }
                arr_19 [i_0] [i_0] = ((!(arr_2 [i_3 - 1])));
                var_25 ^= (((arr_15 [i_3] [i_0 - 1] [i_0]) ? var_8 : (arr_15 [i_4] [i_0 + 1] [i_0])));
                arr_20 [i_4] [0] [14] [i_0 - 1] = (arr_2 [i_0]);
            }
            for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
            {
                arr_25 [i_0 - 1] [i_3 + 1] [i_6] = arr_12 [i_0] [i_3 + 1];
                var_26 = ((!(arr_0 [i_3 - 2] [i_3])));
                var_27 ^= ((!(arr_6 [i_0] [i_0] [i_0 + 1])));
                arr_26 [i_6] [12] [i_6] = (((arr_23 [i_6] [i_0 - 1] [i_3 + 1] [i_0 - 1]) && var_13));
                var_28 ^= (((arr_15 [i_3] [i_3] [i_3 - 2]) + (arr_15 [i_3 - 2] [i_3] [i_3 - 2])));
            }
            var_29 = (max(var_29, ((((arr_2 [i_3]) ? (arr_2 [i_0 + 1]) : (arr_21 [i_0] [i_0 - 1] [i_3] [i_0]))))));
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (((~(arr_7 [12]))))));
            var_31 -= (arr_0 [i_7] [i_0 - 1]);
            var_32 = (min(var_32, (arr_24 [i_0] [i_0] [i_7] [i_7 + 1])));
        }

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_33 = (min(var_33, ((((arr_32 [i_0 + 1]) * (arr_21 [8] [i_0 + 1] [i_0 - 1] [i_0]))))));
                arr_36 [i_0] [i_8] [i_9] = (arr_2 [i_0 - 1]);
                var_34 = (((arr_9 [i_0 - 1] [i_9]) ^ (arr_9 [i_0 - 1] [0])));
                arr_37 [i_0 - 1] [7] [i_0 - 1] [i_0 + 1] = ((((arr_17 [i_0]) + var_16)) * var_6);
                var_35 &= 23;
            }
            var_36 = (min(var_36, ((((arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_16 : (arr_14 [i_0 + 1] [i_0]))))));
        }
    }
    var_37 = (var_10 || var_11);
    #pragma endscop
}
