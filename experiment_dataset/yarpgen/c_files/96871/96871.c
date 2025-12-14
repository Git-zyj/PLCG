/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(3332266463, var_5));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((!(arr_2 [i_0] [i_0]))) ? ((-(arr_1 [i_0] [i_0]))) : (((88 ? 6 : (arr_0 [i_0])))))), (((-(!-121))))));
        arr_4 [i_0] = (((arr_2 [9] [i_0]) ? ((((max(2, (arr_1 [i_0] [21])))) ? (((!(-127 - 1)))) : (max(-1558736189, (arr_2 [i_0] [i_0]))))) : (((!(arr_2 [4] [4]))))));
        arr_5 [i_0] [i_0] = (~65519);
        var_15 -= ((-65519 ? (!33554431) : ((((min(32143, (arr_2 [i_0] [i_0])))) ? (37832 < 47) : 208))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_1] [i_2] [4] = ((arr_0 [i_1]) ? (arr_8 [i_1 - 2]) : ((min((arr_8 [i_1 + 1]), (arr_6 [i_1 - 1] [i_2])))));
            var_16 *= ((((min((arr_0 [22]), (arr_10 [i_1 - 2] [i_2])))) ? (((((arr_7 [i_1 - 2]) > 43440)) ? (arr_10 [i_1 + 1] [i_1 - 3]) : ((176 ? 65518 : (arr_0 [i_2]))))) : (((!(arr_9 [i_1]))))));
            arr_12 [i_1] [i_1] [i_1] = (arr_1 [i_2] [i_1 - 1]);
            arr_13 [i_2] [i_2] = (arr_8 [i_1]);
            arr_14 [i_1] = (-(((arr_0 [i_1 - 1]) ? (((max((arr_6 [i_1] [i_2]), (arr_6 [i_1 - 2] [i_1 - 2]))))) : (arr_1 [5] [5]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                arr_21 [i_4] [i_4] [i_4] = (arr_1 [i_4 - 1] [i_1 + 1]);
                var_17 = (min(var_17, ((((arr_16 [i_1 - 3] [i_1 - 3] [i_4 + 1]) ? (arr_16 [i_1 - 2] [i_3] [i_4 - 1]) : 245)))));
            }
            arr_22 [i_1 - 3] [i_1] = 32512;
            arr_23 [12] [i_1] = arr_2 [i_1 - 3] [i_1 + 1];
            var_18 = (((arr_20 [i_3]) ? (arr_0 [i_1]) : (((arr_15 [16] [i_1 - 1]) ? (arr_19 [i_3] [i_3] [i_3] [14]) : 17876))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_19 = (((max(((4464211500366725742 ? (arr_8 [i_1]) : (arr_24 [i_5]))), ((max((arr_0 [i_5]), 65535)))))) ? (((((arr_17 [i_5]) ? 17 : (arr_2 [i_1] [8]))) >> ((((-(arr_1 [i_1] [9]))) - 11899958199219221060)))) : (arr_7 [i_1 + 1]));
            var_20 = ((((((arr_24 [i_1 - 2]) ? (arr_24 [i_1 - 3]) : 65512))) ? (((arr_24 [i_1 - 3]) ? (arr_16 [i_1 - 2] [i_1 - 3] [i_1 + 1]) : (arr_24 [i_1 - 2]))) : (arr_24 [i_1 - 2])));
        }
        arr_26 [i_1] = (arr_6 [i_1 - 2] [i_1]);
        var_21 += (arr_9 [i_1]);
        var_22 = (arr_19 [i_1 - 3] [16] [16] [10]);
    }
    #pragma endscop
}
