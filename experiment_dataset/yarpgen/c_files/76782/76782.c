/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -17391;
        var_13 += ((+((65535 ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_14 = (min(var_14, (((8772410964159643679 ? ((0 ? (arr_1 [i_0 + 1]) : (arr_0 [2]))) : (arr_1 [i_0 - 2]))))));
        var_15 = arr_0 [i_0 - 1];
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 += max(((-(max((arr_6 [i_2] [i_2]), (arr_6 [i_1] [i_2]))))), (max(1375575051, ((-(arr_4 [i_2]))))));
            var_17 ^= ((((!(!-12019)))));
        }
        var_18 = arr_7 [2] [1];
        var_19 = (6 ? (((arr_3 [i_1]) ? (arr_7 [i_1] [i_1 + 2]) : 28066)) : (((-(arr_7 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_10 [i_3] = (arr_8 [i_3]);
        var_20 |= 3;
        var_21 = (arr_9 [i_3] [i_3]);
        var_22 ^= (((~6) ? (arr_9 [i_3] [12]) : 400629295));
        var_23 ^= ((((2142724685 ? (arr_8 [i_3]) : 110))) ? (arr_8 [i_3]) : (arr_9 [i_3] [i_3]));
    }
    var_24 = (((~(~var_2))));

    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_25 = (min(var_25, (((min(((-(arr_11 [12] [8])), ((max((arr_9 [i_4] [2]), (arr_9 [i_4] [8])))))))))));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_16 [i_4] = (-(((!((!(arr_14 [i_5])))))));
            arr_17 [i_4] [i_5] = (arr_11 [i_4] [i_4]);
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            arr_21 [i_4] [i_6] = (arr_15 [9]);
            var_26 = (min(var_26, (((1316 ? ((~(arr_9 [i_6 - 1] [i_4 - 1]))) : ((((!((((arr_9 [i_6] [i_4]) ? (arr_11 [i_6] [i_6]) : 23835))))))))))));
            arr_22 [i_4] = arr_11 [i_4] [i_4];
        }
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            arr_26 [i_4] [i_4 + 1] = ((max((arr_24 [3] [i_4 + 1] [i_4 + 1]), (arr_15 [i_7]))));
            var_27 = ((arr_25 [i_4] [7]) ? (min(((-(arr_9 [i_4] [i_7]))), (arr_9 [11] [11]))) : -11);
            var_28 ^= (arr_12 [i_4]);
        }
        arr_27 [i_4] = (((((-(((arr_24 [4] [i_4] [i_4 - 1]) ? 30002 : (arr_19 [i_4])))))) ? ((~(min((arr_11 [i_4] [14]), 2)))) : ((((((~(arr_12 [i_4 + 1])))) ? (arr_13 [i_4 + 1]) : ((-(arr_20 [i_4] [i_4]))))))));
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_29 = ((-(~1)));
        var_30 = (arr_25 [i_8] [i_8 + 3]);
    }
    #pragma endscop
}
