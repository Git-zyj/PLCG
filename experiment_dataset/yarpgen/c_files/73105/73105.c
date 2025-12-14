/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 ^= (arr_3 [i_0]);
        var_14 = ((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0])))) ? (arr_2 [i_0]) : (arr_3 [9])));
        var_15 -= (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_16 -= (arr_0 [i_1] [i_0]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 += (arr_2 [i_0]);
                var_18 = (max(var_18, 48052913));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_19 ^= -4294967295;
                    var_20 = (arr_0 [i_2] [i_2]);
                    var_21 = (arr_2 [i_2]);
                    arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] &= (((arr_3 [i_3]) & (arr_10 [i_0] [i_3])));
                }
                var_22 = (((arr_4 [i_0]) ? (arr_10 [i_0] [i_2]) : (arr_10 [i_1] [i_0])));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_23 &= (arr_7 [i_0] [i_0] [i_0] [i_0]);

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_24 = (arr_11 [i_5] [i_5] [i_4] [i_1] [i_1] [i_0]);
                    var_25 = (arr_0 [i_0] [i_1]);
                    var_26 = (min(var_26, (((!(arr_1 [i_5]))))));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_27 = (((arr_5 [i_0] [i_1] [i_4]) - (arr_5 [12] [i_4] [i_6])));
                        var_28 = (arr_14 [i_1] [i_4]);
                    }
                    arr_21 [i_5] = (((arr_5 [i_5] [i_4] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_4] [i_5])));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, ((((arr_19 [5] [i_1] [i_1] [i_4] [i_1] [i_7]) ? (arr_7 [i_0] [i_0] [i_0] [i_7]) : (arr_22 [i_0] [i_1] [i_1] [i_4] [i_0]))))));
                    var_30 = (((((1 ? 15 : 30))) % (arr_9 [i_0])));
                    var_31 = (max(var_31, (((~(arr_10 [i_0] [i_4]))))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_32 = (max(var_32, ((((arr_9 [i_4]) | ((-(arr_0 [i_4] [i_8]))))))));
                        var_33 = ((!(arr_4 [i_0])));
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_30 [i_9] [i_9] [i_4] [i_9] [i_0] = (3753125090990759256 < 15);
                        var_34 *= ((!(((6109729342498572439 ? 232773074 : -5)))));
                        var_35 ^= (arr_1 [i_0]);
                        var_36 = (arr_29 [i_0] [i_9] [14] [i_0] [i_0] [14] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_37 = arr_0 [1] [i_7];
                        var_38 += (arr_7 [i_0] [i_1] [i_4] [i_10]);
                        var_39 = (min(var_39, ((((((((arr_34 [i_1] [i_4]) || (arr_11 [i_10] [i_10] [i_0] [i_4] [i_1] [i_0]))))) & (arr_9 [i_0]))))));
                        var_40 += (arr_4 [i_4]);
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_41 -= ((arr_9 [i_0]) ? (arr_32 [i_11] [i_11] [i_4] [i_1] [i_1] [i_0] [3]) : ((~(arr_25 [i_4]))));
                    var_42 = (min(var_42, ((((arr_8 [i_0] [i_0]) / (arr_8 [i_0] [i_1]))))));
                    var_43 ^= (!(arr_3 [i_1]));
                    arr_38 [i_11] [i_1] [i_4] [i_11] [i_11] = (((arr_7 [i_0] [i_1] [11] [i_11]) ? (arr_7 [i_0] [i_1] [i_4] [i_11]) : (arr_7 [i_0] [i_1] [i_4] [i_11])));
                }
            }
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_44 = (!15);
            var_45 = (((arr_10 [i_12] [i_0]) + (arr_12 [14] [i_12])));
            arr_41 [i_12] = (arr_10 [i_0] [i_12]);
            var_46 = (min(var_46, ((~(arr_11 [i_0] [i_12] [1] [i_12] [1] [i_0])))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_47 = (arr_20 [i_0]);
                var_48 = (((arr_10 [i_0] [i_13]) ? (arr_39 [i_14] [i_13] [i_14]) : (arr_5 [i_0] [i_13] [i_14])));
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_49 |= (arr_47 [i_0] [i_0]);
                var_50 = (((((~(arr_31 [i_0] [i_13] [i_13] [i_13] [1])))) ? ((((arr_34 [i_0] [i_13]) ? (arr_17 [i_15] [i_13] [4]) : (arr_16 [i_0] [i_13] [i_15] [i_15] [14])))) : (arr_42 [i_0])));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_51 ^= (arr_9 [i_16]);
                var_52 = (((arr_43 [i_16] [i_13]) ? (arr_4 [3]) : (arr_39 [i_16] [i_13] [i_16])));
            }

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_53 -= (arr_10 [i_17] [12]);
                var_54 = (max(var_54, (((-(arr_53 [i_0] [i_0] [i_0] [i_17]))))));
            }
        }

        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            arr_59 [11] [11] = ((~(((arr_53 [i_0] [i_0] [i_0] [i_0]) ? (arr_53 [i_18] [i_0] [i_0] [i_0]) : (arr_51 [i_0] [i_0])))));
            var_55 = arr_26 [i_18] [i_18] [i_18] [i_18] [i_18];
            var_56 = (((arr_10 [i_0] [i_0]) * (arr_55 [i_18] [i_0])));
            var_57 = (((arr_29 [i_18] [i_0] [i_0] [i_18] [i_0] [i_0] [1]) + (arr_29 [i_0] [i_0] [i_18] [i_0] [i_18] [14] [i_0])));
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_58 = (-(arr_42 [i_0]));
            var_59 = (max(var_59, (arr_12 [i_0] [i_19])));
            var_60 = ((-(arr_37 [i_19] [i_19] [i_0] [i_0] [i_0])));
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            var_61 |= arr_52 [i_0] [i_0] [i_0] [i_0];

            for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
            {
                var_62 = (max(var_62, ((((arr_7 [i_21] [i_20] [14] [i_0]) ? (arr_56 [i_0]) : (arr_62 [i_0] [i_20]))))));
                arr_68 [i_21] [i_0] [i_0] [i_21] = (((arr_16 [i_0] [i_0] [i_21] [i_21] [i_21]) || (arr_8 [i_20] [i_21])));
                var_63 = arr_25 [i_0];
                var_64 = ((-(arr_42 [i_20])));
            }
            for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
            {
                var_65 = (((arr_14 [i_0] [11]) ? (arr_14 [i_0] [i_20]) : (arr_14 [i_0] [i_20])));
                var_66 = (arr_48 [i_0] [i_0] [i_20] [i_22]);
            }
        }
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            var_67 = (min(var_67, (988283434829775516 - -18)));
            var_68 = (arr_9 [i_0]);
            var_69 |= arr_69 [i_0] [i_0] [6];
        }
    }
    var_70 = (((max((min(var_1, 17458460638879776091)), (-28174 && 21))) << (17458460638879776100 - 17458460638879776059)));
    var_71 = (min(var_2, ((((var_9 * var_6) || (~var_2))))));
    var_72 = (var_7 != var_6);
    #pragma endscop
}
