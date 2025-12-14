/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 |= max(((((((arr_3 [i_0]) % (arr_3 [i_0])))) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0 - 2]))), ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))) ? (((((arr_3 [i_0]) + 2147483647)) << (((((arr_3 [12]) + 26246)) - 26)))) : (((arr_2 [i_0] [i_0]) >> (((arr_3 [i_0]) + 26223)))))));
        arr_4 [1] = ((((arr_0 [i_0 + 1]) == (arr_0 [i_0 - 1]))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);

        /* vectorizable */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_11 [i_1] [1] = (((arr_2 [i_1] [i_2]) ? (arr_2 [i_1] [i_2 + 1]) : (arr_8 [i_2 - 2])));
            arr_12 [i_1] [i_1] [i_2 - 1] = (((((arr_1 [i_2]) <= (arr_5 [i_1]))) || (arr_6 [i_2 - 3])));
        }
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            var_18 = (min(var_18, (arr_5 [i_1])));
            arr_17 [i_1] [i_1] [i_3] |= ((~(arr_14 [i_3 + 1])));
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = (max(var_19, (arr_9 [i_1] [5])));
            arr_20 [3] [i_4] = ((((max((arr_2 [i_1] [i_4]), (arr_2 [i_1] [17])))) ? (arr_2 [i_1] [i_4]) : (((arr_2 [i_1] [i_4]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_4])))));
            var_20 |= ((!(((arr_19 [i_1] [i_1] [i_4]) <= (arr_9 [i_1] [4])))));
            var_21 = (arr_19 [i_1] [i_1] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            var_22 = ((((((arr_3 [14]) * (arr_1 [i_1])))) || (((~(arr_19 [i_1] [i_5 + 1] [i_5]))))));
            var_23 = (arr_13 [i_1]);
            arr_24 [3] [i_1] = (arr_6 [i_5 - 1]);
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_24 = (((((-(arr_2 [i_6 + 1] [i_6 + 1])))) + (((arr_3 [i_6 + 1]) - (((arr_9 [i_1] [i_6]) ? (arr_1 [i_6 + 1]) : (arr_26 [i_1] [i_6] [i_6])))))));
            arr_27 [i_1] [i_1] |= (arr_10 [i_6]);
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_25 |= (((((arr_9 [i_1] [i_7]) ? (arr_9 [i_1] [i_7]) : (arr_9 [i_1] [i_7]))) >> (((arr_16 [i_7]) - 24817))));
            var_26 = (max(var_26, ((((arr_21 [1]) | (((arr_21 [i_1]) ? (arr_21 [i_1]) : (arr_21 [i_7]))))))));
        }
        arr_31 [i_1] = ((((arr_29 [i_1] [i_1] [1]) ? (arr_29 [i_1] [i_1] [i_1]) : (arr_30 [i_1] [i_1] [i_1]))));
    }
    var_27 |= var_4;
    #pragma endscop
}
