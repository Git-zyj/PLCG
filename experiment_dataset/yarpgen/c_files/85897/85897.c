/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 25567;
    var_16 = var_3;
    var_17 = (min(var_17, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 -= var_9;

                        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_19 *= (((arr_3 [i_3 - 1]) ? (arr_0 [i_4 + 1] [i_3 - 1]) : (arr_3 [i_3 - 1])));
                            var_20 = -7986434385306996115;
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_21 = (var_13 ? ((var_0 ? var_9 : (arr_5 [i_1]))) : (arr_15 [i_0] [22] [i_2] [i_3] [i_5 - 2]));
                            var_22 = var_7;
                        }
                        var_23 = (((25565 - (arr_4 [i_0]))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_24 = ((var_12 * (arr_7 [i_1])));
                            var_25 |= var_9;
                            var_26 = (max(var_26, (25566 - var_6)));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                var_27 = (arr_2 [i_10] [i_9]);
                var_28 = 25566;
                var_29 = (((arr_33 [i_10 - 2] [i_10 - 1] [i_10 + 1] [i_10 + 1]) ? (((78232324 ? -1 : 32745))) : (arr_32 [i_0] [i_9] [1] [i_9])));
            }
            var_30 = ((var_9 && (arr_6 [i_9])));
            var_31 = (min(var_31, (((-((258048 ? 25552 : 2190319383)))))));

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_32 = (arr_23 [i_0] [i_12]);
                            var_33 = ((~2829305977) ? var_14 : 4782923095801570204);
                            var_34 = (max(var_34, (~1)));
                        }
                    }
                }
                var_35 = (min(var_35, (arr_20 [i_0] [i_0] [i_9] [i_11])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_36 = 3207501285;
                            var_37 = var_11;
                            var_38 -= -19;
                        }
                    }
                }
                var_39 = ((((((arr_18 [i_0] [i_0]) != (arr_41 [i_0] [1] [i_0] [0] [i_9] [i_9] [i_11])))) - -var_3));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        {
                            var_40 = (!-72);
                            var_41 = ((((var_13 ? 375508547 : 2190319383)) >> var_3));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        {
                            var_42 = var_3;
                            var_43 = (max(var_43, 2305842992033824768));
                        }
                    }
                }
                var_44 = (~var_5);
                var_45 = (min(var_45, (((arr_15 [i_18] [i_9] [i_0] [i_0] [i_0]) - ((((arr_23 [i_0] [i_9]) <= (arr_46 [i_0] [i_9]))))))));
            }
        }
        for (int i_21 = 1; i_21 < 19;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                var_46 = (((var_6 & var_8) ? (~var_4) : (1087466039 ^ 1)));
                var_47 = ((var_0 && (arr_35 [i_21 + 4] [i_0] [5])));
            }
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_48 = var_0;
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 23;i_25 += 1)
                    {
                        {
                            var_49 = (((1 ? (arr_28 [i_0] [i_21 + 2] [i_21] [i_23] [i_23] [i_23] [i_21]) : var_3)));
                            var_50 |= ((((arr_23 [i_24] [i_25]) || -374968586)));
                        }
                    }
                }
            }
            var_51 = (arr_53 [i_21 + 1] [i_21 + 2] [i_21 + 3]);
        }
        var_52 = (((((arr_33 [i_0] [9] [i_0] [i_0]) ^ 65535))) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_14);
    }
    #pragma endscop
}
