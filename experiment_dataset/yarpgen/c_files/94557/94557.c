/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!-1007952680) | (((((max(var_14, var_13))) >= var_10))));
    var_16 = max((min(19, 1073741823)), ((((max(var_11, var_4)) % var_4))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (!247);
        var_18 = ((min(var_9, 1879417073)) ^ (min(var_2, (arr_1 [i_0 - 1]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 = ((var_1 * (arr_5 [i_4 - 1] [i_2])));
                            arr_13 [i_2] [i_1] [i_2] = (((1764095489 ? -470729969 : 1007952680)));
                            var_20 = ((2147483647 || (!var_1)));
                            arr_14 [i_3] [i_1] [i_2] = var_8;
                        }
                    }
                }
            }
            var_21 = (-1883486819 >= var_3);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_22 &= (((max(var_4, (305170124 * 2147483647)))) ? (arr_19 [i_0] [i_0] [i_6] [i_6 - 1]) : ((((!(-1334694326 / 64))))));
                            arr_28 [i_5] [i_8] = (((max((min(184, (arr_27 [i_0] [i_0] [i_6] [i_7] [i_7]))), (((-2147483647 - 1) ? 249 : (arr_15 [i_0] [i_5] [i_6]))))) >> (var_6 - 48)));
                        }
                    }
                }
            }
            arr_29 [i_0] [i_5] [i_5] = (((~(((arr_25 [i_5]) | 2099436853)))) & 3930250845);
            arr_30 [i_0] [i_5] = (((!159) <= -638952823));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_34 [i_9] [i_9] = (((-1007952694 + 2147483647) - 2147483647));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] [i_11] [i_0] = 2147483647;
                    var_23 = var_10;
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_24 = (arr_21 [i_10] [i_9] [i_10] [i_10]);

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_47 [i_13] [i_9] [i_10] [i_12] [i_13] = (((arr_42 [i_0] [i_0] [i_10] [i_10] [i_12] [i_13]) <= (arr_43 [i_0] [i_9] [i_0] [i_9] [i_12] [i_13])));
                        var_25 = (((!-1007952680) ? -638952818 : 96));
                    }
                    var_26 = (-1007952664 && 237);
                }
                var_27 = (min(var_27, ((((arr_15 [i_0] [i_0] [i_10]) || 2147483647)))));

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_28 = (((var_14 + 2147483647) >> (var_1 - 4036788366)));
                        var_29 = ((arr_17 [i_0]) << (((arr_42 [i_0] [i_0] [i_10] [i_14] [i_15] [i_15]) - 120)));
                        var_30 = ((!(!-337916251)));
                        arr_53 [i_0] [i_9] [i_10] [i_14] [i_0] = var_0;
                    }
                    arr_54 [i_0] [i_9] [i_10] [i_14] |= arr_32 [i_9] [i_10];
                }
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    var_31 = var_6;

                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        arr_60 [i_0] [i_9] [i_9] [i_10] [i_9] [i_17] = (arr_48 [i_0 + 1] [i_0 - 2] [i_9] [i_10] [i_16 - 1] [i_17]);
                        var_32 = (max(var_32, (!var_13)));
                        var_33 = (((arr_24 [i_16] [i_16] [i_16] [i_16] [i_16]) * var_10));
                        var_34 &= ((!(!var_10)));
                        var_35 = (!var_9);
                    }
                    var_36 = (arr_35 [i_0] [i_9] [i_10] [i_16]);
                }
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
            {
                arr_64 [i_18] [i_18] = var_6;
                var_37 -= (var_9 ? ((((arr_17 [i_0]) && (arr_6 [i_0] [i_0] [i_9] [i_18])))) : (!var_11));
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
            {
                var_38 ^= var_6;
                var_39 &= (94785443 ? (arr_21 [6] [i_9] [i_19] [i_9]) : (var_1 <= var_12));
                var_40 = 2840564010;
                var_41 = (min(var_41, (arr_5 [i_0] [20])));
            }
        }
        arr_67 [i_0] = ((!((max((!3225231068), (((arr_15 [i_0] [i_0] [i_0]) ? var_3 : -1920049231)))))));
        var_42 = (min((min((255 < var_4), ((1514382020 ? var_14 : (arr_17 [i_0]))))), var_9));
    }
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        var_43 += ((!(var_5 / var_9)));
        arr_70 [i_20] [i_20] = (((max((arr_69 [i_20]), var_5))) * (min(567978626, 211)));
        var_44 ^= ((!((min(((0 ^ (arr_66 [i_20] [i_20] [i_20] [i_20]))), (arr_55 [i_20] [i_20]))))));
    }
    var_45 = var_2;
    var_46 = 96;
    #pragma endscop
}
