/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((((arr_0 [i_0]) ^ -7381678097115574521)) % (((63 << ((((min(224, -26))) - 220)))))));
        arr_2 [i_0] [i_0] = (max(var_9, (arr_0 [i_0])));
        var_18 = (max(var_18, ((min((((arr_0 [i_0]) | (arr_0 [i_0]))), (min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? var_3 : ((((!(arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 *= (min(((((min(-1623074155, (arr_5 [i_2])))) ? (max(-1623074177, 245)) : (arr_4 [i_2]))), ((((min(var_0, 32)) == (arr_1 [i_1] [i_2]))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_20 *= (((43 <= -1623074188) * (arr_12 [i_2] [i_2] [i_1] [i_2])));
                var_21 = (104 | 1623074203);

                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_17 [10] [i_4] [i_3] &= ((~(arr_6 [i_4] [i_3])));
                    arr_18 [i_1] [i_2] [i_3] [i_3] = (arr_1 [i_2] [i_3]);
                    var_22 = (min(var_22, ((((arr_16 [i_1]) ? 138 : (arr_16 [i_1]))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 ^= (((arr_5 [i_1]) || (arr_6 [i_1] [i_1])));
                        var_24 = (-34 * var_15);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [i_1] [i_4] [i_4] [i_4] [i_3] [i_1] [i_3] = (var_5 ? var_15 : (arr_21 [i_6] [i_4] [i_2] [i_2] [i_1] [i_1]));
                        var_25 = (arr_16 [i_3]);
                        var_26 = ((!(arr_20 [i_1] [i_2] [i_3] [i_4] [i_3] [7] [i_6])));
                    }
                    var_27 = (min(var_27, var_2));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_28 *= ((-(var_5 % var_10)));
                    arr_26 [i_1] [i_3] = (arr_7 [i_3] [i_7]);
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_29 ^= (arr_7 [i_1] [i_1]);
                    var_30 = (max(var_30, -1125899906842624));
                    var_31 = var_7;
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_32 = (min(var_32, (((!((((arr_4 [i_9]) | var_14))))))));
                            var_33 = (min(var_33, -182));
                            var_34 = (arr_21 [i_9] [i_2] [i_11] [i_10] [i_2] [i_2]);
                        }
                    }
                }
                var_35 = (max(var_35, ((~(arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
            }
        }
        var_36 = ((((min(1995154349, (-1147380095 || 250)))) || -39));
        arr_37 [i_1] &= (max(((min((arr_6 [i_1] [i_1]), (!17)))), ((-((var_8 ? 128 : 0))))));
        var_37 += (((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (((arr_30 [i_1] [i_1] [i_1] [i_1]) ? (max((arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_1] [i_1]))) : (arr_4 [i_1])))));
        var_38 = (((min((arr_5 [i_1]), (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) == ((((var_5 != (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_39 = (min(var_9, (~222)));

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_43 [i_12] [i_12] [i_12] = (((var_16 ? 250 : 462474706159994291)));
            var_40 = (max(var_40, var_12));
        }
        arr_44 [i_12] [i_12] = ((~((min((arr_42 [i_12]), var_9)))));
    }
    var_41 = var_15;
    var_42 = (max(var_12, var_3));
    #pragma endscop
}
