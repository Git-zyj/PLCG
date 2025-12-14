/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = arr_3 [i_1 + 1] [i_1] [i_1 - 2];

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_10 = ((~(arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2])));
                    var_11 = 535353699813747944;
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_12 = 1;
                    arr_14 [i_0] [i_1 + 1] [i_2] [i_1] = (((((arr_12 [i_0] [i_1 + 1]) ? (arr_2 [i_1] [i_2]) : (arr_12 [i_1 - 1] [i_1 - 1]))) >> (((arr_12 [i_1 + 2] [i_1 + 1]) + 123))));
                    arr_15 [i_1] = (arr_2 [i_1 + 2] [i_1 + 1]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] [i_0] = ((~((-(-127 - 1)))));
                    var_13 = ((!(arr_1 [i_0])));
                    var_14 = ((!(((~(arr_17 [9] [i_0] [i_1] [i_2] [i_5]))))));
                }
                var_15 = (arr_11 [i_0] [i_2]);
                arr_20 [i_1] [i_0] [i_1] [i_2] = 1;
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_31 [i_6] [i_1] [i_6] [i_1] [i_0] = (((2063226159 + -1192802973) ? (arr_23 [i_6] [i_6] [0] [i_6] [i_6] [i_1 - 1]) : (((arr_21 [i_6]) + -1192802965))));
                            var_16 = -var_6;
                            var_17 = ((+(((arr_25 [i_0] [i_1] [i_1] [i_7] [8]) ? -1192802962 : var_0))));
                        }
                    }
                }
                var_18 = (arr_4 [i_1]);
            }
        }

        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            arr_34 [i_9] [i_9] [i_0] = (arr_24 [i_9] [i_9 - 2] [i_9] [i_9]);
            var_19 = (arr_9 [i_9] [i_9] [6]);
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_20 = var_7;

            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                var_21 = var_1;
                var_22 = ((min(-562784821, -106)));
                var_23 = 0;
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                arr_42 [i_12] = 64;
                var_24 = ((((((arr_33 [i_0]) >> (arr_21 [i_0])))) ? ((((((arr_22 [i_0] [i_0]) + 2147483647)) >> (var_7 - 165)))) : (arr_17 [i_0] [i_0] [i_10] [14] [i_12])));
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                var_25 = (((((min((arr_21 [8]), 32762)))) ? (arr_23 [i_0] [i_0] [i_10] [i_10] [0] [i_13]) : (min(839054660, -32763))));
                var_26 = 24;
                arr_47 [i_0] [i_0] = (((((((!(arr_40 [i_0] [i_10] [i_13]))) ? 24 : ((min((arr_36 [i_0] [i_0]), 199)))))) ? (+-8601102789766834217) : -6254));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    var_27 = ((~(arr_6 [i_0] [i_10 - 1] [i_0] [i_15])));
                    var_28 = (arr_27 [i_0] [i_10 + 3] [i_14] [i_15] [i_15 - 1] [i_14] [i_15 - 1]);
                    var_29 = ((+(((arr_17 [i_15] [i_10] [0] [i_10] [0]) ? var_0 : 3899141429))));
                    var_30 = ((1 ? (arr_37 [i_10 + 3] [i_15 - 1]) : 1));
                    arr_54 [i_0] [i_0] [i_0] [i_14] = 1;
                }
                var_31 = (arr_24 [i_0] [i_10 + 3] [i_10] [i_14]);
                var_32 = ((-(arr_3 [i_0] [i_14] [i_14])));
            }
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            arr_57 [i_0] [i_16] = (--4941);

            for (int i_17 = 1; i_17 < 15;i_17 += 1)
            {
                arr_62 [i_17] = ((!((((arr_59 [i_17 + 1] [i_16] [i_0] [i_0]) ? (arr_23 [i_0] [i_0] [i_0] [i_16] [i_17] [1]) : (arr_23 [i_0] [i_0] [i_16] [i_17 - 1] [i_17] [i_16]))))));
                arr_63 [13] [13] [i_17] = (max((min((arr_35 [i_17] [i_17 - 1] [i_17 - 1]), (arr_35 [i_17 - 1] [i_17 + 2] [i_17 - 1]))), (!var_3)));
            }
            var_33 = ((!((((((251 ? var_2 : (arr_44 [3] [i_16] [3])))) / (min(1893067887, var_0)))))));
        }
        arr_64 [i_0] = (arr_0 [i_0]);
    }
    var_34 = var_6;
    #pragma endscop
}
