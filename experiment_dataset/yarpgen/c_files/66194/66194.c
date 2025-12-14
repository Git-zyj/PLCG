/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (var_14 || -64);
                    arr_8 [i_1] [i_1] [i_2] = ((((25543 ? (arr_5 [i_0] [0] [i_1] [17]) : var_3)) == 48));
                    var_19 = -60;
                    var_20 = (min(var_20, (arr_3 [i_1] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_12 [2] [6] = (((((var_14 * (arr_9 [i_3 + 1])))) ? var_11 : (-2016055321494371839 >= 73)));
        var_21 = (arr_9 [i_3 + 2]);
        var_22 = (max(var_22, (((+(min((arr_10 [i_3]), ((2016055321494371834 ? -77 : 3891261636)))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (((!var_9) ? (((arr_10 [i_4]) ? (arr_10 [i_4]) : (arr_10 [i_4]))) : (arr_10 [i_4])));
        var_24 = ((((max((arr_2 [i_4] [i_4]), 52))) ? (arr_2 [i_4] [i_4]) : (max((arr_2 [i_4] [i_4]), 3891261624))));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_25 = var_4;
                var_26 = ((!((((((3891261643 + (arr_0 [i_4] [i_4])))) ? (((arr_18 [i_4] [7] [9] [0]) % (arr_17 [i_4] [2] [i_4] [i_4]))) : 1)))));
                var_27 = var_7;
                var_28 |= var_7;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 = (max(var_29, ((min((arr_0 [i_4] [i_5]), (arr_20 [i_4] [i_5] [i_5] [i_7]))))));
                var_30 = (max(var_30, (((-21557 ? var_5 : -32)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_31 += (max(403705683, (max((arr_14 [i_5]), (arr_14 [i_8])))));
                            arr_26 [i_4] [3] [i_4] [i_4] [3] [6] = 524909235;
                            arr_27 [i_8] [i_9] [i_9] [i_4] [i_9] [i_7] [i_7] = (((((max(var_1, var_4)))) ? 0 : -2016055321494371818));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_32 = var_6;

                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    var_33 = (max((((((3891261613 ? var_5 : 21556)) * (arr_33 [i_10] [i_11])))), var_2));
                    arr_34 [2] [2] [i_4] [i_4] = (((((arr_20 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]) / (arr_22 [i_11 - 1] [1]))) << (var_1 - 24775)));
                    arr_35 [i_4] [i_5] [i_4] [0] = ((max(var_10, (!var_5))) >= ((max(4294967283, (arr_28 [i_4] [i_4] [i_4] [1])))));
                    var_34 = (min(((var_10 * (arr_29 [i_11 - 1] [1] [i_11 - 1] [i_11]))), (((+((((arr_16 [i_4] [i_4]) <= 13))))))));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_35 = (max(var_35, (((((2273448935 + (arr_1 [i_4])))) ? (((((arr_6 [i_4] [i_4]) + (arr_33 [2] [1]))))) : var_2))));
                    var_36 = (((-54 | (var_5 ^ var_13))));

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_37 = (arr_18 [i_4] [0] [i_10] [0]);
                        arr_43 [i_4] [i_4] [i_10] [i_12] [5] = ((min(var_6, (arr_14 [i_4]))) >> (var_0 - 51800));
                    }
                    arr_44 [i_4] [2] [i_10] [2] [i_4] = ((!(((var_2 % ((((arr_37 [i_4] [i_4] [9] [9] [4]) >= 74))))))));
                    var_38 = (min(((min(var_7, 403705676))), (((arr_3 [i_4] [i_4]) ? var_3 : (arr_3 [i_12] [16])))));
                }
            }
            var_39 += (arr_20 [i_4] [i_5] [i_5] [i_4]);
            var_40 = var_13;
            var_41 = ((((arr_9 [i_4]) ? (arr_33 [9] [i_4]) : (arr_9 [i_4]))));
        }
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            arr_47 [i_4] = 1;
            var_42 *= var_7;
        }
    }
    #pragma endscop
}
