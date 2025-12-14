/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((!((!(((arr_1 [i_0]) && var_3))))));
                var_12 = (((3769 + 6) / (arr_3 [i_1])));
                arr_6 [i_1] = ((var_5 || ((((arr_3 [i_1]) << (var_2 - 54742))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_13 = (max(var_13, ((((!(arr_7 [i_2])))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_14 = (arr_9 [14]);
            arr_11 [i_2] [i_3] [3] = (arr_10 [i_2] [i_3] [i_3]);
            var_15 = (arr_8 [i_2] [i_2]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_4] = ((var_8 + ((((!(var_0 + var_2)))))));
            var_16 = (((arr_8 [i_4] [i_2]) + var_1));
            arr_16 [i_4] [i_4] = var_3;
        }
        var_17 ^= ((2097151 / ((11862720796349872288 | (-703778699 <= -632551227)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_26 [i_8] [i_8 - 3] [i_8] [0] [i_5] [i_8] = (!var_1);
                        arr_27 [i_8] [i_7] = (~(arr_14 [i_6 + 1] [i_8]));
                        arr_28 [i_8] [i_8] [i_8] [i_5] = var_0;
                        var_18 = (((1685103553 > var_0) || ((!(arr_9 [i_5])))));
                        arr_29 [i_5] [14] [i_6 + 1] [i_7 - 1] [i_7] [i_5] &= (((arr_12 [i_8 + 3] [i_8 + 3]) * (arr_12 [i_8 - 3] [i_8 + 3])));
                    }
                }
            }
        }
        arr_30 [i_5] = ((703778707 < (arr_12 [20] [i_5])));
        var_19 -= (arr_20 [i_5] [i_5]);
        var_20 = (max(var_20, ((((arr_25 [i_5] [i_5] [i_5] [i_5]) + (arr_25 [i_5] [i_5] [i_5] [i_5]))))));

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_21 = (((arr_12 [i_5] [i_5]) / var_2));
            arr_33 [i_5] [i_5] [i_5] = var_8;
        }
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            arr_36 [i_5] [i_10] |= ((-(arr_35 [i_10 - 2] [i_10] [i_5])));

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_46 [i_5] [i_10] [i_11] [i_12] = ((arr_22 [i_5] [i_10 + 3] [i_11]) / (arr_25 [i_11] [i_10 - 1] [i_10] [i_12]));
                            arr_47 [i_13] [i_10] [i_11] [i_10 + 2] [1] [i_10] [i_5] = (((((703778720 < (-2147483647 - 1)))) >> (((arr_10 [i_5] [i_10] [i_11]) - 3885546329910897304))));
                        }
                    }
                }
                var_22 = (((arr_32 [i_10] [i_10 + 2]) >= (var_7 || var_2)));
            }
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                var_23 += (((arr_38 [i_10 + 4] [i_10 + 1] [i_14 - 2] [i_5]) == (~var_9)));
                arr_51 [i_10] [i_10] [i_10] = ((arr_34 [i_10 + 1] [i_10] [i_14 - 2]) * (arr_34 [i_10 + 2] [i_10 + 2] [i_14 + 1]));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 14;i_16 += 1)
                    {
                        {
                            arr_58 [4] [i_10] [i_14] [i_14] [i_10] [3] = (9 == 1048575);
                            var_24 = (max(var_24, ((((arr_45 [9] [i_10 + 1] [i_14] [i_15] [i_16 + 1]) - (arr_55 [i_10] [i_14] [i_10 - 1]))))));
                        }
                    }
                }
            }
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                arr_62 [i_5] [i_10] = (((arr_20 [i_10 + 1] [i_17 - 1]) >= (arr_20 [i_10 + 2] [i_17 + 1])));
                var_25 = (((-(arr_25 [i_17] [8] [i_10] [i_17]))));
                arr_63 [i_10] [i_10 - 2] [i_10] = (166900398 && 4785960442056306535);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_26 |= (((arr_55 [i_17 + 1] [i_5] [i_17 + 1]) < (arr_55 [i_17 + 1] [i_5] [i_17 - 1])));
                            arr_68 [i_10] [i_18] [11] [i_10] [i_10] = (var_2 + var_1);
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                var_27 = (((arr_64 [i_5] [i_10]) || (arr_40 [i_5] [i_10 - 1])));
                arr_72 [i_10] = var_6;
            }
            arr_73 [i_10] = ((!(arr_42 [i_10] [i_10] [i_5] [i_10] [i_10 + 3] [i_10 + 4])));
        }
    }
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        var_28 += (min(((+(((arr_77 [i_21] [i_21]) & -2147483644)))), ((((((arr_75 [i_21]) >= (arr_75 [i_21]))) && ((min(var_10, var_8))))))));
        var_29 = (max((((!(arr_76 [i_21])))), (min(((((arr_76 [i_21]) ^ (arr_76 [13])))), ((var_6 ^ (arr_76 [i_21])))))));
        var_30 = var_7;
    }
    var_31 = ((-var_4 < (!var_0)));
    var_32 = -var_3;
    #pragma endscop
}
