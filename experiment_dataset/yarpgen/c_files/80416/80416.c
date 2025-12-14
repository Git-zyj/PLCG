/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (max((max((min(var_10, var_8)), ((max(-9, 0))))), ((min(1, 55924)))));
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (max(((min((min(1, (arr_1 [i_0]))), ((min((arr_4 [i_0] [i_1 + 1] [3] [3]), (arr_0 [i_1 - 2] [i_1 - 2]))))))), (min(((min((arr_1 [i_1 - 2]), (arr_2 [i_2])))), (min(var_13, (arr_5 [i_2] [i_1 + 1] [i_1] [i_0])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_15 = (min(((max((max(var_14, (arr_2 [i_3]))), ((max(28989, 63)))))), (min(((min(var_10, -83))), (min((arr_9 [2]), 9611))))));
                        var_16 = (max((min(((max(1, 9611))), (min(var_12, (arr_3 [i_5] [i_0] [i_0]))))), (max(((min(var_3, var_3))), (min(var_11, var_10))))));
                    }
                }
            }
        }
        var_17 = (max((min((max(var_8, 29462)), ((min(1, -102))))), ((max((max(var_4, 28989)), ((max((arr_2 [i_0]), (arr_13 [i_0] [i_0])))))))));
        var_18 = (max((min(((max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [2])))), (max(1818906868112022491, 60)))), ((min((max(var_14, (arr_0 [i_0] [i_0]))), (min((arr_4 [9] [i_0] [i_0] [9]), var_7)))))));
        arr_15 [i_0] = (min((min((max(0, var_1)), ((min((arr_4 [i_0] [i_0] [i_0] [i_0]), 255))))), (max((min((arr_4 [i_0] [i_0] [i_0] [i_0]), 18446744073709551615)), ((min(-28989, (arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_19 = (min((max(((min(28989, 28989))), (min(9615, var_0)))), (max(((max(var_6, 0))), (max(var_0, 63))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_20 = (min(var_20, ((min(((min(((max((arr_22 [i_6] [i_8] [i_8]), (arr_19 [i_6] [i_7])))), (min(-1450913597, -18))))), (min(((max(-1450913587, 129))), (max(-1450913597, var_8)))))))));
                    var_21 ^= min((max(((min(var_5, 0))), (max((arr_16 [i_6]), 7041454632659245128)))), (min(((min((arr_19 [i_6] [i_7]), (arr_20 [i_6] [i_7])))), (min(1450913586, var_8)))));
                    var_22 = (max((max(((min(1450913583, (arr_22 [i_6] [i_7] [i_8])))), (max(23557, 4057163138730286579)))), (max((max(var_8, (arr_18 [i_6] [i_6]))), ((max((arr_18 [i_6] [i_6]), var_12)))))));
                    var_23 = (max(((max(((min(1, -1))), (min((arr_19 [i_6] [i_6]), var_6))))), (max((min(33675, (arr_21 [i_6] [i_7]))), ((max((arr_19 [i_8] [i_6]), var_4)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_34 [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_10] = (min(-30700, 1));
                        arr_35 [i_10] = (max((min((max((arr_25 [i_9]), var_0)), ((min((arr_22 [13] [i_10] [i_10]), var_10))))), ((min((min(1, 738106207)), ((min((arr_22 [i_12] [i_12] [i_12]), (arr_22 [i_11 + 1] [i_9] [i_9])))))))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_24 = (min((max(((max((arr_25 [i_9]), var_0))), (min((arr_18 [i_10] [i_13]), var_11)))), (min((max((arr_18 [i_10] [i_10]), 6676071929279821735)), (min(var_1, (arr_29 [i_11] [i_11] [i_13] [i_11])))))));

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_25 = (min(var_25, ((min((max((min(var_4, 17741314530561190440)), ((min(1, var_6))))), ((max(((min(var_0, var_14))), (min((arr_40 [i_14] [12] [i_11] [i_10 - 1] [i_9]), var_4))))))))));
                            var_26 = (min(((max(7, -64))), (min((min(-1450913587, var_1)), (max(9, (arr_24 [i_14])))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            arr_44 [i_9] [i_10] [i_10] [i_13] [i_10] = 0;
                            arr_45 [i_10] [i_10] = 20383;
                            var_27 -= 1;
                        }
                        for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            arr_48 [i_9] [i_10] [i_11 + 1] [i_16] [i_16 - 2] |= (max(((min(((min(3, 17727))), (max(var_2, (arr_25 [8])))))), (min((max((arr_42 [i_16 - 1] [i_11] [i_13] [i_11 + 2] [i_10 + 1] [i_11] [i_9]), var_11)), (max((arr_41 [i_11] [i_11] [i_11] [12] [i_11 - 1] [i_11 + 2]), (arr_39 [i_9] [i_9] [i_10] [i_13] [i_16 - 1] [i_10] [i_9])))))));
                            arr_49 [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10] = (min(((max(3, 1))), (min((min(4015056605, var_5)), ((min(var_4, (arr_31 [i_9] [i_10] [i_9] [i_10] [i_10]))))))));
                        }
                    }
                    arr_50 [i_9] [i_10 + 1] [i_10] = (max(((max(((min(var_5, var_9))), (max(var_12, (arr_37 [i_10] [i_10] [i_11 - 1] [i_10])))))), (max(((min(var_5, var_10))), (min((arr_33 [i_9]), 1818906868112022491))))));
                    arr_51 [i_10] = (min((min(((max((arr_47 [i_10] [i_10] [i_9] [i_9] [i_10]), (arr_26 [i_10])))), (max(var_4, var_8)))), (max((max((arr_17 [i_11] [i_9]), var_11)), ((min(3295, (arr_46 [i_9] [i_10] [i_9] [i_10] [i_10] [i_9] [9]))))))));
                }
            }
        }
    }
    #pragma endscop
}
