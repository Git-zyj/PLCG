/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (max(var_11, ((var_6 ? var_8 : (arr_1 [i_0])))));
        var_12 += ((223 ? (arr_0 [i_0] [i_0]) : (arr_1 [3])));
        var_13 -= 20541;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [19] = ((20541 ? (arr_6 [i_2 + 3]) : (arr_6 [i_2 + 2])));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_14 = (((arr_5 [i_3 - 2] [i_2] [i_2 + 3]) > (arr_5 [i_3 + 1] [i_2 + 1] [i_2 + 1])));
                        var_15 = -13881;
                        var_16 += (arr_5 [i_2] [i_2] [i_2 + 3]);
                        arr_13 [i_1] [i_1] [i_4] [1] = ((!(arr_2 [i_3 - 2] [1])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (((~((-(arr_17 [i_2] [14]))))))));
                        arr_18 [i_5] [i_5] = (((arr_3 [i_1 - 3]) > (arr_14 [i_3] [i_3 + 1] [i_5] [i_3 - 2])));
                        var_18 = ((32767 ? var_8 : var_0));
                        arr_19 [i_1] [i_1] [i_3] [i_5] = (((arr_16 [i_5] [i_1 + 1] [10] [i_1] [i_5]) ? (arr_16 [i_5] [i_2] [i_2 + 2] [i_2] [i_5]) : 7473050840032490460));
                        var_19 = ((!(arr_12 [i_1 + 1] [13] [13])));
                    }
                    arr_20 [i_3] [17] [17] = (arr_15 [10]);
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_20 = var_0;
            var_21 -= ((-5676199206243917472 ? (arr_6 [i_1 - 3]) : var_7));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_22 = (((!(arr_7 [1] [i_1 + 2] [i_1] [i_7]))));
            arr_27 [i_1] [i_7] [i_1 + 2] = -32746;
        }
        arr_28 [i_1 - 2] = (arr_21 [i_1 + 1] [20]);
    }
    var_23 = (max(var_23, (((-(((2146007677819566604 << (-32746 + 32746)))))))));
    var_24 -= 17301929880820826870;
    var_25 = var_1;
    #pragma endscop
}
