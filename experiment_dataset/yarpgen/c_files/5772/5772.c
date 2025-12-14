/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((2146039960 >> (2281953594 - 2281953591))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 *= (max((min((max(var_16, -6680246308649756772)), 2146039959)), 54));
                                var_21 = (min(var_21, ((min(var_15, ((((var_3 <= (arr_12 [i_0] [i_0] [i_0] [4] [i_0] [22] [i_0]))))))))));
                                arr_13 [i_0] [18] [i_2] [i_3] [18] = ((min((arr_2 [i_0] [i_1 + 1]), -4)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = ((((min(1, 72))) || (((((max(var_2, (arr_11 [i_0] [i_0 + 1] [5] [i_0] [8] [i_1] [i_0])))) ? (((385785899 - (arr_8 [i_0] [i_0])))) : (arr_2 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_22 = min(((((min(var_14, var_3))) ? var_1 : var_1)), var_11);
    var_23 = 237;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = 1;
        var_24 -= (arr_11 [i_5] [i_5] [i_5] [i_5] [20] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_25 = -86582837;
        var_26 = (((min(-1, (arr_21 [i_6])))));
        arr_22 [i_6] = 1385977126;
        arr_23 [i_6] = ((14 ? 0 : -1141592617));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_27 = 19;

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_32 [i_7] [i_7] [1] [1] = (((arr_26 [i_7]) >> (4681155533081347931 - 4681155533081347919)));
                        arr_33 [i_10] [13] [13] [13] = ((var_13 ? ((254 ? (arr_29 [i_7] [i_8] [i_9]) : (arr_2 [i_9] [i_10]))) : ((((arr_11 [i_7] [i_7] [8] [i_7] [i_7] [i_7] [i_7]) ? 1941697830 : var_1)))));
                        var_28 = var_6;
                        arr_34 [1] [i_8] &= ((((arr_2 [i_7] [i_7]) <= 1)));
                    }
                }
            }
            var_29 = 3764449823;
            arr_35 [i_7] [1] [i_7] = (arr_31 [i_7] [i_7] [12] [5]);
            var_30 = ((!(arr_20 [i_7 - 1] [i_7 - 1])));
        }
        for (int i_11 = 3; i_11 < 12;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_43 [i_12] = (arr_37 [i_7] [i_7 - 2]);
                arr_44 [i_7] [i_11] = ((((arr_28 [i_7] [9]) ^ 8)));
                var_31 = (((arr_3 [i_7 - 1]) / (((arr_37 [i_12] [i_7]) ? (arr_21 [14]) : 47))));
                var_32 &= (((((arr_19 [15]) >> (((arr_29 [i_7] [i_11] [i_12]) + 721512618)))) % ((((arr_37 [i_7] [i_7]) / 127)))));
                var_33 = (arr_12 [i_11 + 2] [i_11] [13] [i_11] [i_11] [i_11] [i_11]);
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_34 = 1618;
                var_35 *= (((arr_5 [i_11] [i_13]) ? (arr_10 [i_7]) : -77));
                var_36 = (((arr_38 [i_11]) >> (var_7 + 176492311)));
                var_37 = (min(var_37, (((var_16 ^ (arr_26 [i_7]))))));
            }
            var_38 = (arr_9 [i_11 + 2] [1] [8] [i_7]);
            var_39 = (min(var_39, var_8));
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            arr_50 [i_7] [i_7] [i_7] |= arr_9 [i_7 + 2] [18] [i_7 + 1] [13];
            arr_51 [i_7] [i_7] [i_14] = var_17;
            arr_52 [i_7 + 1] = (((((arr_49 [i_14] [6]) - (arr_30 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7]))) <= (arr_47 [i_7 + 2] [i_7 + 1])));
        }
        var_40 = (arr_1 [i_7 - 1]);
    }
    for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
    {
        arr_55 [i_15] = var_1;

        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            var_41 = (min(var_41, (arr_4 [i_15])));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    var_42 |= ((~(arr_64 [3] [i_16 + 3])));
                    var_43 ^= (247 >= -59);
                }
                for (int i_19 = 3; i_19 < 15;i_19 += 1)
                {
                    arr_68 [i_15] [i_16] [12] = (arr_45 [i_15 + 1] [i_16 - 2] [i_19 - 3] [4]);
                    var_44 *= (arr_6 [i_15]);
                }
                var_45 += (((var_7 + 2147483647) >> (((arr_0 [i_15 + 2]) - 33068))));
            }
        }
    }
    #pragma endscop
}
