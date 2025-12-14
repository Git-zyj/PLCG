/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (((arr_3 [i_0]) < (((((max(0, var_16))) != ((min(239, var_12))))))));
            arr_6 [i_0] [i_1] [i_1] = (((!-6949) ? ((~((var_4 ? 6 : 14351)))) : (arr_4 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] [9] [14] = (((((~(((arr_5 [i_0] [i_0] [i_0]) ? 2 : (arr_8 [i_2] [i_0] [i_0])))))) ? 15872 : (arr_1 [i_2])));
            arr_10 [i_0] [i_2] [i_0] = (((arr_3 [9]) ? ((max(var_16, 248))) : (((!(((arr_2 [i_0]) < -11)))))));
            var_18 = var_9;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_19 = ((32747 ^ (arr_7 [i_0] [i_3])));
            arr_13 [i_0] [i_0] = (((((arr_0 [i_0]) != (arr_12 [24]))) ? (arr_4 [i_0] [i_3]) : ((-10287 ? (arr_11 [i_0] [i_3] [i_3]) : (arr_0 [i_0])))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [24] = (((((((0 / (arr_8 [i_0] [i_0] [i_0]))) << (var_16 - 208)))) ? (min((arr_5 [i_4] [i_4] [i_4]), -var_13)) : (arr_5 [i_6] [i_5] [i_0])));
                        arr_21 [i_0] [12] [24] = ((!(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
        arr_22 [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_20 = (((((var_12 ? (((arr_7 [i_0] [1]) ? var_5 : (arr_0 [i_0]))) : var_10))) ? (((((arr_30 [i_0] [i_7] [7] [i_7]) ? (arr_1 [i_0]) : 239)))) : (((((arr_3 [i_7]) | var_12)) ^ (arr_0 [i_7])))));
                    var_21 = (min(var_5, (((!((min(12, (arr_18 [i_0] [i_7] [i_0] [i_0] [6])))))))));
                    var_22 ^= ((-(((arr_3 [i_8]) ^ (arr_3 [i_7])))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_23 |= ((17 ? ((((var_5 ? (arr_31 [i_9] [i_9]) : (arr_19 [i_9]))))) : ((((min(112, (arr_15 [i_9])))) & 16))));
        var_24 = (max(var_24, ((((max(((((arr_28 [i_9]) != 32720))), (~-32760))) & (~var_9))))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_36 [i_10] = ((((-(arr_12 [i_10]))) < ((((arr_12 [i_10]) >= var_9)))));
        arr_37 [i_10] = (((((max((arr_14 [i_10] [i_10]), 59)))) ? (((arr_33 [i_10] [i_10]) ? var_5 : -1)) : 102));
    }
    var_25 = -var_0;
    var_26 = (~var_15);
    #pragma endscop
}
