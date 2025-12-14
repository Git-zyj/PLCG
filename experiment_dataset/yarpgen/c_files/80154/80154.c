/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((min(-13, (arr_1 [20] [20]))) % -var_1))) ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [1]))))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (max(((-2147483636 ? 94 : -22)), -13));

            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                var_19 = ((9 >> (((arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2]) >> (((arr_5 [i_2] [i_2 + 2] [i_2] [i_2]) + 1555051353))))));
                var_20 = (((((var_16 == (arr_6 [i_0] [i_0] [i_2]))))) <= var_14);
                var_21 = (arr_6 [i_2] [i_0] [i_2 - 2]);
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_0] = ((!((!(arr_4 [i_0] [10])))));
                arr_11 [i_3] [i_0] [i_3] = (max(((min(10, (((!(arr_2 [i_1]))))))), (arr_8 [i_3 - 1] [i_3 - 1] [i_3])));
            }
        }
        var_22 = 4294967295;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_23 = ((((((arr_13 [i_4] [i_4]) ? var_1 : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ^ (arr_8 [i_4] [i_4] [i_4])));
        arr_15 [i_4] = ((~(((arr_9 [i_4] [i_4]) % (arr_13 [i_4] [i_4])))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_24 = (min(var_24, (arr_7 [i_5] [i_5] [i_5] [i_5])));
        var_25 = (min(var_25, (min(((4294967295 ? -14564 : 1)), (~-46)))));
        var_26 = (min(var_26, (((+(min((((arr_5 [i_5] [i_5] [i_5] [i_5]) ? (arr_0 [i_5] [i_5]) : (arr_4 [i_5] [0]))), (((var_2 >= (arr_9 [i_5] [i_5])))))))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = (max(var_27, (((-(max(-93, var_0)))))));
        var_28 = (min(var_28, (arr_5 [i_6] [1] [1] [i_6])));
    }
    var_29 = (min(var_29, var_5));
    #pragma endscop
}
