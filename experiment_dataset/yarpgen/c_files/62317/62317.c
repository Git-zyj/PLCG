/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 *= ((~(min(6365541802814001276, ((-6365541802814001277 ? var_4 : 4728502864648581046))))));
        var_17 = arr_3 [i_0];
        var_18 = ((!((((arr_3 [i_0 + 2]) ? ((((var_4 && (arr_0 [i_0] [i_0]))))) : ((-4728502864648581046 - (arr_3 [i_0 + 3]))))))));
        var_19 = 255;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] = -4728502864648581047;
                    arr_12 [i_2] [i_2] = ((~(0 <= 0)));
                    var_20 = var_2;
                }
            }
        }
        arr_13 [1] [i_1 - 1] = ((var_4 ? var_3 : var_15));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_21 = var_15;
                            var_22 = 37780;
                            var_23 = (((((-(arr_22 [1] [1] [7])))) ? (arr_27 [i_8] [i_8] [i_7] [i_8 - 1] [i_8 + 1]) : (arr_27 [1] [20] [i_7] [i_7] [13])));
                        }
                        for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_4] [i_4] [i_7] [i_4] [i_4] = arr_24 [i_6] [i_7];
                            arr_32 [3] [21] [i_7] = (~73);
                            var_24 = ((!(arr_21 [i_9 + 2] [i_9 - 2] [i_9 + 2])));
                        }
                        var_25 = ((54 ? (arr_15 [12]) : (arr_21 [i_4] [i_4] [i_6])));

                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            var_26 = (arr_25 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                            arr_36 [i_7] [i_7] [i_6] [i_7] [i_6] = (~8);
                            var_27 += (arr_25 [1] [i_5] [i_10 - 1] [19] [4]);
                        }
                        arr_37 [19] [i_7] [i_6] [i_7] = (~(arr_28 [i_5] [i_7]));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    arr_44 [i_4] [i_4] [5] [i_4] = ((-(-32767 - 1)));
                    var_28 -= arr_43 [8] [i_11 + 1] [i_4] [i_11];
                }
            }
        }
        var_29 = (min(var_29, ((((arr_19 [i_4] [i_4] [i_4]) / -1574579236)))));
    }
    var_30 = 2147483647;
    #pragma endscop
}
