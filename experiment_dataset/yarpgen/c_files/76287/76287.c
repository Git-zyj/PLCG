/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 |= ((arr_0 [i_0 - 1]) && 1);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = (((arr_2 [1] [i_0 + 2]) % (arr_4 [i_1])));
            var_22 |= ((((var_10 | (arr_0 [i_0]))) % 1));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] [1] [i_2] = (((arr_7 [8] [14] [i_0 + 1]) | ((var_5 ? (arr_3 [12] [i_2 - 2] [12]) : 3))));
            var_23 = var_2;

            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_16 [1] [i_2 - 1] [i_2] [i_4] [i_4] = (((((arr_14 [i_0] [12] [i_2 - 2] [i_0] [i_0] [i_0]) % var_19)) ^ (arr_12 [i_2 - 1])));
                    var_24 = ((((!(arr_0 [i_0 + 2]))) ? (!var_12) : ((-(arr_11 [7] [i_0] [1] [i_0])))));
                }
                var_25 = (min(var_25, (((((((arr_10 [12] [i_3] [i_3] [i_3]) ? (arr_2 [i_2 - 1] [1]) : (arr_11 [i_2 + 1] [4] [4] [i_2 + 1])))) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_2 - 1]) : 1)))));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_26 = (arr_12 [8]);
                var_27 = (((arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2] [13] [i_0 + 2]) ? (((arr_15 [i_0] [11] [i_2] [1] [i_5]) % var_18)) : ((1 ? (arr_7 [i_0] [4] [i_0]) : var_18))));
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_28 = ((var_10 % ((((arr_7 [i_0] [i_0] [i_0]) | 1)))));
                var_29 = (max(var_29, var_15));
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_30 = 83;
                var_31 = (arr_13 [i_0 - 1] [6] [i_0 - 1] [i_8]);
            }
            arr_26 [2] [11] = 1;
            arr_27 [1] [i_7] = (((((0 ? (arr_8 [13] [13] [10]) : 56887))) ? 1 : var_2));
            arr_28 [i_7] [i_7] = var_19;
        }
        var_32 = (((arr_6 [i_0 - 1] [i_0 + 1]) % -var_6));
        arr_29 [i_0] [i_0] = (((arr_25 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ^ (arr_25 [i_0] [i_0 + 1] [i_0 + 2])));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_33 = (min(var_33, (((28070 ? 162 : 1)))));
        arr_32 [i_9] = ((((max((((arr_10 [i_9] [i_9] [i_9] [i_9]) ? var_10 : (arr_12 [2]))), ((((arr_25 [i_9] [i_9] [i_9]) % 1)))))) ? (((!((max(var_1, (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [5]))))))) : (((!(arr_21 [i_9] [1] [11] [1]))))));
        var_34 = ((((-83 ^ (arr_0 [i_9]))) ^ ((max((arr_0 [i_9]), var_15)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_35 = var_6;
        var_36 = (3377699720527872 % 871427617);
    }
    var_37 = ((((max(var_6, 59203) % (((max(52808, var_9))))))));
    #pragma endscop
}
