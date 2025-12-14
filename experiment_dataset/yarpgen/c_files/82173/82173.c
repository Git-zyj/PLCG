/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_0]);
                arr_5 [i_1] &= (((arr_1 [i_1]) | ((var_8 & ((~(arr_0 [i_0] [i_1])))))));
                arr_6 [i_0] = 416746730;
            }
        }
    }
    var_13 = (((((-(var_2 == var_9)))) ? var_8 : ((max(var_0, var_8)))));
    var_14 = (var_5 - var_0);

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 = (arr_14 [i_3] [i_3] [i_3]);
                        arr_17 [i_3] [i_2] [i_3] [i_4] [i_4] [i_5] = ((!((((arr_12 [i_3] [i_4] [i_3]) ? var_12 : -1754285135)))));
                        var_16 = ((((!(arr_11 [i_2] [i_3 + 1] [i_4]))) && (((((((arr_3 [i_3]) ? 15 : -17))) ? ((-3 ? (arr_8 [i_2]) : (arr_10 [i_3] [i_3] [i_3]))) : (arr_10 [i_3] [i_3 + 3] [i_3]))))));
                        var_17 = ((var_10 ? (arr_10 [i_3] [i_2] [i_3]) : (arr_11 [i_3] [i_3] [i_5])));
                        arr_18 [i_2] [i_3] [i_3] [i_5] = var_11;
                    }
                }
            }
        }
        var_18 = (min(var_18, var_2));
        var_19 *= (((!63260) && -17));
    }

    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_22 [i_6] = ((!(arr_8 [i_6])));
        var_20 = (max(var_20, ((((3878220585 || 416746710) ? (((((min(2, (arr_12 [i_6] [8] [8])))) && (arr_21 [i_6] [i_6])))) : var_5)))));
        var_21 = var_8;
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        var_22 = (max(var_22, (arr_3 [i_7 + 1])));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 = var_11;
                            var_24 = (((arr_1 [i_7]) && (!5638454514419516067)));
                            arr_34 [i_7] [i_8] [i_9 + 1] [i_10] [i_11] [10] [i_10] &= (arr_9 [i_7]);
                            var_25 = (max(var_25, (4347 / 4095)));
                        }
                    }
                }
            }
            var_26 = (min(var_26, (((var_5 << (((arr_3 [i_7 + 1]) + 120)))))));
            var_27 = (min(var_27, ((((arr_31 [i_7] [i_8] [i_8] [i_8]) ? var_3 : var_11)))));
            var_28 = (arr_29 [6] [6] [11] [i_7] [i_7] [6]);
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
            {
                var_29 = (arr_9 [i_12]);
                arr_39 [i_13] [i_7] [i_7] = (((((!(arr_10 [i_7] [i_12] [i_12])))) >> (((!(arr_29 [i_7] [i_7] [11] [i_13] [0] [12]))))));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_30 = (max(var_30, 0));
                            arr_44 [i_7] [i_14] [8] [i_7] [4] [7] [i_7 + 1] = (arr_13 [1] [i_12] [i_12] [i_12]);
                            var_31 += ((var_12 ? (arr_35 [i_13] [i_13] [i_13 - 3]) : (arr_35 [i_13] [i_13] [i_13 - 2])));
                        }
                    }
                }
                arr_45 [i_7] = ((~((-(arr_15 [10] [10] [i_7] [2])))));
            }
            for (int i_16 = 3; i_16 < 13;i_16 += 1) /* same iter space */
            {
                arr_50 [i_7] [i_7] [i_7] [i_12] = (-((-(arr_37 [i_7]))));

                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_32 = -38542;
                    var_33 = var_6;
                }
                var_34 = (max(var_34, ((((arr_7 [i_7 - 1]) ? 389048528380437466 : 51326)))));
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_35 = (max(var_35, (((((((arr_48 [i_7] [i_7] [i_18]) ? var_4 : var_12))) ? (!var_10) : var_7)))));
                var_36 = (arr_3 [i_7 - 1]);
            }
            var_37 += (((((20555 ? var_5 : (arr_24 [i_7] [i_7])))) ? 44981 : var_1));
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
        {
            var_38 = (max(var_38, 3162954830));

            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                arr_64 [i_20] [i_19] [i_7] [i_7] = (((arr_62 [7] [i_7 - 1]) ? (arr_48 [i_7 + 1] [i_19] [i_20]) : (arr_31 [i_19] [14] [i_20] [i_20])));
                var_39 += (arr_63 [10] [i_7 - 2] [i_7 - 2] [i_7 - 2]);
                var_40 &= (((var_2 || 18682) ? (((arr_48 [i_7] [i_7] [i_20]) + (arr_43 [i_7 - 2] [i_19] [1] [i_20] [1]))) : -var_5));
            }

            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                arr_68 [3] [i_7] [i_19] [i_21] = ((((46868 <= (arr_40 [i_7] [i_19] [i_21] [i_7]))) ? (arr_41 [i_21] [i_19] [i_19] [i_19] [i_7 + 1] [i_7 - 1]) : (arr_57 [1])));
                arr_69 [i_7] [i_7] [i_7] [3] &= (arr_66 [i_7 + 1]);
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                arr_72 [i_7] [i_22] [i_19] [i_7] = (arr_48 [i_7] [i_19] [i_22]);
                var_41 = (((arr_70 [2] [11]) ? (arr_70 [i_7] [i_7]) : (arr_70 [i_7] [i_7])));
            }
            arr_73 [i_7] [i_19] = (14210 || 44998);
        }

        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 14;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 15;i_26 += 1)
                    {
                        {
                            var_42 = (((((var_5 ^ (arr_46 [i_7] [i_7] [i_24])))) ? (arr_30 [i_24] [6]) : (arr_27 [i_7 - 2] [i_23] [i_23] [i_24])));
                            var_43 = (arr_21 [i_24] [13]);
                            var_44 = ((var_12 * (((arr_47 [i_7] [i_23] [i_24] [i_26]) * var_8))));
                        }
                    }
                }
            }
            arr_84 [i_7] = (((arr_1 [i_7 - 2]) ? 27300 : ((((var_2 && (arr_71 [8] [i_7 + 1] [i_7 - 2] [i_7])))))));
        }
    }
    #pragma endscop
}
