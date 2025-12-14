/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = -16318;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [1] = ((0 - (arr_6 [i_0])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (!43704);
                        arr_11 [8] [i_1] [i_2] [i_0] = ((-((23363 ? 3277169115 : -23375))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = (((arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_1]) ? ((var_8 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_14 [i_4] [i_1] [i_1] [i_0]))) : 2015946150));
                        arr_15 [i_0] [i_0] = (((arr_0 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 1])));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_5] = 10219485430261482501;
                        var_16 = -67;
                        var_17 = (arr_10 [i_0] [9] [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_18 = (~(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_19 = (((arr_4 [i_0] [i_7 + 2] [i_0]) ? ((((-100 + 2147483647) >> (2047 - 2033)))) : (((arr_4 [i_0] [i_7 - 2] [i_0]) ? (arr_4 [i_0] [i_7 + 1] [i_2]) : var_2))));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = 942709269966883995;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_20 = (((arr_7 [i_0] [i_2 - 2] [i_2 - 1]) < var_1));
                            arr_27 [i_1] [i_0] [i_1] [i_8] = (((var_8 / var_0) / (arr_22 [i_0] [i_0] [11] [i_2 + 1] [i_8])));
                            var_21 = (((arr_12 [i_0] [i_1] [6] [i_6] [6]) ? ((-942709269966883994 ? 1 : -98)) : (arr_22 [i_2 - 2] [i_0] [i_2 - 2] [i_8 - 1] [i_8 - 1])));
                        }
                        var_22 = max((arr_23 [i_2 - 3] [i_2 - 3] [i_6 + 2] [16] [i_6] [i_6] [i_6 - 2]), ((min((arr_23 [i_2 - 2] [i_2 - 2] [i_6 - 1] [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6]), 1))));
                    }
                    arr_28 [i_0] [i_1] [16] [i_0] = ((68719476224 ? -942709269966883973 : 6182));
                    var_23 = ((-(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_24 = ((((min((((1 ? 177 : -2015946150))), (((arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 - 2]) ? var_5 : (arr_10 [i_0] [i_1] [4] [i_2 + 1] [i_0])))))) ? (arr_7 [i_0] [i_1] [i_0]) : (arr_22 [4] [i_0] [i_0] [i_0] [4])));
                }
            }
        }
    }
    #pragma endscop
}
