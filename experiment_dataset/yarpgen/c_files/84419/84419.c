/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~((((arr_0 [i_0]) > (arr_1 [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_13 = (max(var_13, 53));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_14 = ((arr_5 [i_1 - 1]) ? (min((arr_5 [i_1 - 1]), 6856290847507562173)) : (((~(arr_5 [i_1 - 1])))));
        var_15 = (arr_4 [i_1] [i_1]);
        var_16 = -22775;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_17 &= var_9;
                        arr_21 [i_2] [i_2] [i_2] [i_4] [i_5] = 1;
                    }
                }
            }
            var_18 = (((arr_13 [i_2] [i_3]) * (arr_13 [i_2] [i_2])));
            var_19 = var_3;
            arr_22 [i_2] [i_3] = arr_17 [20];
        }
        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            var_20 = ((((~(arr_11 [i_2] [i_6]))) != (arr_18 [i_2] [i_6] [i_6] [i_2])));
            var_21 = ((~(var_12 <= 1)));
            var_22 = (arr_15 [i_2] [i_6 - 1]);
        }
        arr_27 [i_2] [i_2] = var_2;

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_23 = (arr_36 [i_2] [i_7] [i_8] [i_9] [9]);
                            arr_39 [i_8] [i_8] [i_8] = (arr_32 [i_8]);
                            var_24 = (!22775);
                            var_25 |= ((((var_0 ? var_10 : -32)) >= 3));
                            arr_40 [i_2] [i_8] [i_8] [i_7] [i_7] [i_2] [i_2] = ((var_11 ? (-1720710919 == var_8) : ((((arr_31 [i_8] [i_7] [i_7]) < -643860809014287195)))));
                        }
                    }
                }
            }
            arr_41 [i_2] [21] |= ((-(arr_23 [i_2])));
            var_26 = (min(var_26, var_9));
            arr_42 [i_2] [i_2] [i_2] = ((~(arr_17 [i_7])));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_27 = 12296603010033305533;
            var_28 = (arr_17 [i_11]);
            var_29 = ((73 > ((1 ? 1729086026282196527 : 22774))));
            arr_45 [i_2] [10] [i_2] |= 65247;
            var_30 = -2438884657383370937;
        }
        var_31 = -2686225506577923940;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        arr_49 [i_12] = 961196807;
        var_32 = 170466616;
    }
    var_33 &= var_0;
    #pragma endscop
}
