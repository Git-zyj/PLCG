/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((max(var_4, (((-32 ? 3423096600 : 31)))))) ? var_18 : -469504186);
    var_20 ^= ((!(!var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(var_21, (((~(arr_1 [2]))))));
        var_22 = ((7 && (arr_1 [i_0])));
        var_23 = (((arr_2 [i_0] [i_0]) >= 60));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (arr_4 [i_1] [i_1])));

        for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_25 = ((((arr_15 [i_5] [14] [i_3] [i_2] [i_1]) - (arr_9 [i_3 + 2]))));
                            var_26 = (arr_7 [i_2]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] [19] [i_1] [i_1] = ((~(arr_4 [i_3 - 1] [10])));
                            var_27 = (((arr_15 [14] [i_5 + 2] [i_3 - 1] [i_1] [i_1]) ? (arr_15 [i_5 - 1] [i_5 - 1] [i_3 - 2] [3] [i_1]) : (arr_15 [6] [i_5 + 3] [i_3 + 4] [i_3 - 2] [i_2 - 3])));
                        }
                    }
                }
                var_28 = ((~(8358999457639409399 + -4034825602625119966)));
                var_29 = (((arr_10 [i_3 + 4] [i_2]) || ((((arr_5 [i_3] [i_2 - 2]) | (arr_5 [i_2] [i_3 + 2]))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_30 = 63;
                var_31 = (arr_10 [i_2] [i_2]);
                var_32 = (arr_4 [i_2 - 1] [i_2 + 1]);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_23 [i_1] [i_2] = (arr_4 [i_2 - 2] [i_2 - 1]);
                var_33 = (arr_18 [i_2 + 2] [i_2 - 2] [i_2 + 1]);
                arr_24 [16] [i_2 + 3] [i_7] &= (((arr_16 [i_1] [i_2]) ? (~-8077542929978566467) : (arr_10 [i_2 + 1] [4])));
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_27 [i_1] [i_2] [i_8] [i_8] = (arr_16 [1] [i_8]);
                var_34 = ((!(!-268435456)));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_35 = (max(var_35, 5656343926076241922));
                            var_36 = (arr_12 [i_1] [i_1] [i_1] [i_1] [i_2]);
                            var_37 -= (arr_32 [i_9 - 1] [1]);
                            arr_33 [10] [i_2] [i_2] [i_9 - 1] = (arr_25 [i_2] [i_2] [i_9 - 1]);
                        }
                    }
                }
            }
            arr_34 [1] [i_2] [19] = (arr_10 [i_2] [i_2]);
            var_38 = (min(var_38, ((((arr_4 [i_2 - 3] [i_2 + 2]) ? (arr_28 [i_1] [i_2 + 2]) : (arr_15 [i_2] [17] [i_2] [i_2 - 4] [i_2 + 3]))))));
        }
        for (int i_11 = 4; i_11 < 18;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 19;i_13 += 1)
                {
                    {
                        var_39 = 20179;
                        var_40 -= (~8077542929978566483);
                        var_41 = (arr_13 [i_13] [9] [5] [i_1]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_42 = ((((arr_35 [i_16] [i_15] [19]) ? (arr_7 [i_14]) : (arr_19 [1]))));
                            var_43 = ((~(((arr_51 [i_1] [i_11] [i_14] [i_15] [i_16 + 2]) - (arr_4 [i_11 - 3] [i_14])))));
                        }
                    }
                }
            }
            var_44 = (arr_36 [i_11 - 3] [i_11]);
            var_45 = (arr_7 [1]);
        }
        var_46 -= (((arr_22 [19] [7] [i_1] [i_1]) ? (((-(arr_7 [4])))) : (arr_42 [i_1] [i_1] [0] [8])));
        arr_53 [i_1] = (((arr_29 [14] [18] [i_1] [i_1] [i_1]) ? (arr_51 [i_1] [i_1] [i_1] [17] [i_1]) : (arr_42 [2] [i_1] [0] [i_1])));
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_47 = ((~((((arr_28 [i_17] [i_17]) == (arr_28 [i_17] [i_17]))))));
        var_48 = (arr_28 [i_17] [i_17]);
    }
    #pragma endscop
}
