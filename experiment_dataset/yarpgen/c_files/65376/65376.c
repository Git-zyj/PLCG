/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_0] = (((arr_2 [i_1 + 1] [i_1 - 3]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 - 2])));
            var_20 = ((1 ? ((var_13 ? (arr_2 [i_0] [i_1 + 2]) : 1919349910)) : ((((arr_0 [i_0] [i_0]) >= 1)))));
            var_21 += (arr_0 [i_0] [i_1 - 3]);
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_22 = (max(var_22, ((((arr_6 [i_2 + 1] [i_2 + 1]) >> (((arr_3 [i_2] [i_2 + 1] [i_0]) - 13811)))))));
            arr_7 [i_2] [i_2] = (arr_2 [i_0] [i_2]);
            var_23 += var_17;
        }
        arr_8 [i_0] = (arr_3 [i_0] [i_0] [i_0]);

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_14 [1] [i_3] = var_14;

                for (int i_5 = 3; i_5 < 7;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_3] [8] [i_5] [6] = (arr_3 [i_5 + 1] [i_3 - 2] [i_0]);
                    var_24 = 65520;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_0] [i_3] [i_4] [i_5] [i_6] = 1919349917;
                        arr_23 [i_6] [0] [i_4] [i_5 + 1] [i_6] [i_0] = ((1919349917 ? (arr_9 [2] [i_6]) : (arr_12 [i_5] [i_4] [i_3] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_27 [i_0] [i_3 - 2] [6] [i_5] [i_7] = (((arr_20 [i_3 - 1] [i_3 - 2] [i_5] [2] [i_5 + 1] [i_5] [i_7]) ? (arr_5 [i_3 - 2] [i_3 + 1] [i_5]) : (arr_6 [i_3 - 1] [i_3 + 1])));
                        var_25 = var_4;
                    }
                }
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    arr_30 [i_8 - 2] [i_4] [i_3 - 1] [i_0] = (((arr_9 [i_8] [i_0]) ? var_15 : 1));
                    var_26 = (((arr_29 [i_3 - 2]) ? (arr_26 [i_8 - 3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_0]) : (arr_12 [i_0] [i_3] [i_4] [i_8])));
                    var_27 += ((!((!(arr_1 [i_0])))));
                    arr_31 [1] [i_3] [1] [i_8] = (arr_17 [i_0] [1] [i_4] [i_4] [i_8] [i_8]);
                }
            }
            var_28 -= (arr_2 [i_0] [i_3 + 1]);
            var_29 = (arr_19 [i_0] [i_3] [i_0] [i_3] [i_3 - 2] [i_3 - 2] [i_0]);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_30 = (((arr_0 [i_0] [i_9]) + (arr_19 [i_0] [i_0] [1] [i_9] [i_9] [i_9] [i_9])));
            var_31 += (((arr_17 [i_9] [i_9] [i_0] [2] [2] [i_0]) >= var_17));
        }
    }
    var_32 = (min(var_32, ((((((!((min(1020, var_0)))))) >> (((var_17 + var_0) / (var_8 << 0))))))));
    var_33 = 2136230817;
    #pragma endscop
}
