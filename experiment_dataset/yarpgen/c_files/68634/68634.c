/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 &= (2737484205 < -var_4);
        arr_2 [i_0] [12] = (!var_5);
        var_21 = ((!((min(var_17, (!var_4))))));
        var_22 = (max(var_22, var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (~1);
        var_23 = (((var_0 ? var_0 : (arr_4 [i_1]))));
        var_24 = 0;

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_25 = (var_1 || var_13);
                var_26 = ((var_9 ? var_18 : ((var_13 ? 4475773890984003823 : 22))));
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                var_27 ^= 112;
                var_28 = (arr_12 [i_4] [i_4] [i_1]);
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_29 = (arr_14 [2] [0]);
                var_30 = 4806179202042791204;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_31 = ((var_17 ? (arr_16 [12] [i_2 + 1] [i_2 + 2] [12]) : 1));
                var_32 = var_14;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_33 ^= (((!(arr_14 [5] [5]))) ? var_15 : ((var_16 ? (arr_8 [i_1] [i_2] [i_6] [i_2]) : var_1)));
                            var_34 &= (-((-13 ? var_3 : var_12)));
                            var_35 = var_2;
                        }
                    }
                }
            }
            arr_25 [i_1] [i_2] = var_9;
        }
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            var_36 = ((var_2 ? (arr_4 [17]) : (arr_17 [i_9] [i_9 + 1] [i_9])));
            var_37 ^= (((arr_9 [i_1] [i_9 + 3] [i_9 - 2]) ? (arr_9 [i_1] [i_9 + 1] [i_9 - 1]) : (arr_18 [i_9 + 1])));

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                var_38 = (min(var_38, ((~(arr_20 [i_10 - 2] [i_1])))));
                var_39 = (max(var_39, 0));
                var_40 = -6435;
            }
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {

            for (int i_12 = 3; i_12 < 19;i_12 += 1)
            {
                var_41 -= ((var_14 ? ((var_17 ? var_14 : var_19)) : (arr_29 [i_12] [i_12 + 1] [i_1] [12])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_42 = var_13;
                            var_43 ^= var_2;
                            var_44 += ((-(!621622326)));
                            arr_41 [i_1] [i_11] [i_1] [0] [i_14] [i_14] [i_11] = var_10;
                        }
                    }
                }
                var_45 = ((~(((arr_16 [i_1] [i_1] [i_1] [i_1]) ? var_8 : (arr_14 [i_1] [i_11])))));
                var_46 = (min(var_46, (arr_24 [i_12 - 3] [i_12 - 3] [i_12] [i_12 + 2] [i_12] [i_12] [i_1])));
            }
            var_47 = var_10;
        }
    }
    var_48 += ((~((-(!var_7)))));
    #pragma endscop
}
