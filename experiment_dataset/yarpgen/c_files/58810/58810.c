/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_11 = (min(var_11, (((arr_6 [14] [i_1 - 1] [i_0]) > (arr_6 [i_0] [i_1 - 1] [i_1])))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_12 = ((((!(arr_7 [i_4] [i_2] [12] [i_0]))) ? 1 : (arr_5 [i_1])));
                        var_13 = ((-(arr_5 [i_1])));
                    }
                    arr_14 [i_0] [i_1] = (arr_13 [19] [i_1] [i_3]);
                    arr_15 [i_0] [i_1] [i_0] [i_0] [20] [12] = (((arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 3] [i_3 + 1]) ? 5300 : (arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 3] [4])));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_14 = (var_8 < -11375662781384050881);
                    var_15 = var_5;
                }
                var_16 = var_2;
                var_17 = (arr_17 [i_0] [i_1] [i_2] [i_1] [i_1]);
            }
            var_18 = (((arr_19 [i_1 - 1] [i_1] [i_1]) ^ var_2));
            var_19 = (min(var_19, (((-15 ? -15 : -15)))));
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            var_20 = (arr_18 [i_0] [i_0] [i_0] [i_6]);
            arr_24 [i_0] [i_6] = (((arr_19 [i_0] [i_6 - 2] [i_0]) ? (arr_19 [11] [i_6 + 3] [i_0]) : (arr_19 [13] [i_6 + 1] [i_0])));
            arr_25 [i_0] [i_6] = ((!((((arr_12 [20] [16]) ? var_4 : -32)))));

            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                var_21 = (arr_27 [i_0] [6] [1]);
                var_22 = -15;
                var_23 = (((((-4306320748214391788 ? (arr_27 [17] [i_6] [i_7 - 4]) : (arr_18 [i_7] [i_6] [i_6 + 1] [i_7])))) ? (arr_11 [i_7 - 1] [i_7 + 2] [3] [i_7] [i_7 - 4] [i_7]) : var_3));
                var_24 = (((arr_6 [i_6 - 1] [3] [i_7 - 3]) ? ((var_10 * (arr_8 [15]))) : -var_1));
                arr_28 [i_7] [i_6 - 2] [i_6 - 2] = (arr_18 [i_7] [i_6 + 1] [i_6] [i_6 - 1]);
            }
        }
        arr_29 [i_0] = 127;
        arr_30 [i_0] [16] &= (15779 != 4306404333318589426);
    }
    var_25 = -var_6;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    arr_38 [15] [i_9] [i_10] [i_10] = min(4306404333318589423, -15);
                    var_26 = (min(var_26, (((0 ? 1 : (max(-7949515164839252198, 0)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    var_27 = (((((~(arr_41 [i_11 + 3])))) || ((((arr_41 [i_11 - 2]) ? (arr_42 [i_11] [10]) : (arr_42 [i_11] [i_12]))))));
                    arr_48 [i_11] = (((arr_43 [i_11 + 2] [i_13 - 1]) && (!var_9)));
                    arr_49 [i_11] [i_11] [i_13] = (arr_47 [i_13 - 1] [i_11 + 3]);
                    arr_50 [i_11] [i_11] [5] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
