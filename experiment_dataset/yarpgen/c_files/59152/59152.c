/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((max(0, 0))) <= (!1)))), 245));

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_11 = (((((arr_6 [i_2]) - (arr_6 [i_1 + 1]))) + (arr_6 [i_0 - 1])));
                        var_12 = (0 > 0);
                    }
                    var_13 ^= ((~((min(0, -40)))));
                }
            }
        }
        var_14 -= (min(1, 0));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_18 [i_0] [7] [i_5] [i_5] = 1;
                        var_15 = (min(var_15, (((!((((max(29568, 35967))) && 1)))))));
                        var_16 = (max(var_16, ((var_9 ? (((!(!var_4)))) : 0))));
                        var_17 = ((~(~1)));
                        arr_19 [i_0] [i_4] [i_4] [i_5] = (arr_10 [i_6]);
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_0] = (max((((arr_2 [2] [i_4]) ? var_8 : (4294967295 < 1))), ((-((min(-19, 35968)))))));
            var_18 ^= (min((((!(((32752 ? 4586242065751749512 : (arr_4 [i_0] [i_0] [i_4] [i_4]))))))), 29552));
        }
    }
    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_19 = 1;

        for (int i_8 = 2; i_8 < 7;i_8 += 1)
        {
            var_20 ^= (max((((!(arr_13 [i_7 - 1] [i_8 - 2] [i_7 - 1] [i_8])))), 1));

            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                var_21 = 2251799276814336;

                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_22 = (((arr_13 [i_10] [i_10] [i_10 + 1] [1]) < ((-(arr_5 [i_8 + 1] [i_7 - 2])))));
                    var_23 = ((((min(-2072444304, ((-(arr_28 [i_7] [i_7] [i_10])))))) ? ((((arr_21 [i_7]) ? (arr_21 [i_9 + 2]) : (arr_21 [i_7])))) : 1));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_24 = (max(0, 1));
                    var_25 = (!397911669373824282);
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_26 = (max(var_26, 225));
                    var_27 = ((((((39181214695381946 | (arr_6 [i_8]))))) % 18444492274432737302));
                    var_28 = (max(var_28, ((((((((max(30439, 1))) ? 0 : 2528634528))) || ((!(arr_27 [i_8 + 2] [i_12] [i_8 + 2]))))))));
                }
                var_29 = 105;
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_40 [i_13] [i_13] [i_7 + 2] [i_7 + 2] = ((~((((-(arr_34 [i_13] [i_8])))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_30 = (((arr_23 [i_15] [i_14] [i_7]) ? ((min((arr_39 [i_7] [i_14] [i_15]), (-127 - 1)))) : 397911669373824282));
                            arr_47 [i_7] [i_7] [1] [i_14] [i_14] [i_7] [i_7] = max((arr_2 [i_14] [i_8]), 1);
                            arr_48 [1] [i_8 - 1] [i_13] [i_14] [i_13] = -var_4;
                            arr_49 [i_14] = var_5;
                        }
                    }
                }
                arr_50 [i_7] = 1;
            }
        }
    }

    /* vectorizable */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_31 = (arr_16 [i_16] [i_16] [i_16] [i_16]);
        var_32 ^= (arr_23 [i_16] [i_16] [i_16]);
        arr_55 [i_16] = ((-(2251799276814347 < 1)));
    }
    #pragma endscop
}
