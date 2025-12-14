/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((var_2 < ((max((arr_4 [i_0]), (arr_2 [6])))))) ? var_14 : (((arr_3 [i_0] [i_1]) ? var_14 : 127))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 ^= max(((min(var_5, (arr_9 [1] [i_1] [i_2] [i_3])))), 11672163545095386252);
                            var_17 = var_4;
                        }
                    }
                }
                arr_11 [i_1] &= (((((var_8 ? var_0 : var_5)) | (~var_9))) - 109);
            }
        }
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((max((!10762), (206 + -1213171325))))));
        arr_16 [i_4] [17] = (arr_15 [i_4]);
        arr_17 [i_4] [i_4] = 0;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_19 = ((!((max(1314615492, var_10)))));

        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            var_20 = (23 | 50);
            var_21 = ((((((arr_19 [i_6 - 2] [i_6 - 1]) > 17708334677546753501))) >> (((((arr_19 [i_6 - 1] [i_6 - 2]) ? (arr_19 [i_6 + 1] [i_6 - 3]) : (arr_19 [i_6 - 3] [i_6 - 2]))) - 4185300937545137336))));
            var_22 = (((var_12 + 2147483647) << 1));
            var_23 = 351742677;
        }
    }
    var_24 = ((!(((var_11 ? var_10 : 1963975970)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_25 += (39 * var_5);
                var_26 += (min(((((max(var_3, (arr_4 [i_7])))) ? var_6 : (var_6 / var_10))), (arr_10 [i_7])));
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_35 [i_8] = ((~(((arr_15 [i_10 + 2]) | ((((arr_20 [i_7] [i_7] [i_7]) | (arr_12 [i_9]))))))));
                                arr_36 [i_11] [i_10] [i_8] [i_9 + 1] [i_8] [i_8] [i_7] = 16178242108188321301;
                                arr_37 [i_10] [i_8] [i_8] [i_8] [8] [i_8] |= 11083;
                                var_27 = ((var_5 >> (((max((((65535 ? (arr_2 [i_11]) : var_1))), (min((arr_5 [i_7] [6] [i_9]), (arr_19 [i_10] [i_9 + 2]))))) - 3220971551))));
                                var_28 |= (max(((((arr_22 [i_7] [i_7]) >= ((((arr_28 [i_7]) < var_12)))))), (min((((255 ? var_7 : var_10))), (max(var_12, var_13))))));
                            }
                        }
                    }
                }
                var_29 &= var_5;
            }
        }
    }

    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 12;i_14 += 1)
            {
                {
                    var_30 = (var_6 ? 86 : 207);
                    var_31 = (max(var_31, ((((var_3 && -24) ? ((((arr_46 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 1]) > (arr_42 [i_14 + 1] [i_14 + 1] [i_14 + 1])))) : var_14)))));
                }
            }
        }
        var_32 = (min(((max((arr_44 [i_12] [i_12] [i_12]), var_14))), (min(var_3, (arr_44 [i_12] [i_12] [i_12])))));
        arr_47 [i_12] = ((+(max((arr_19 [i_12] [i_12]), (arr_39 [i_12])))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_33 = ((-75 ? 65525 : var_12));
        arr_51 [i_15] = var_12;
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_34 ^= (((max((1 / 10), ((var_13 ? var_7 : -21)))) >> (((min(-2295943737193585114, (!-351742678))) + 2295943737193585175))));
        arr_55 [i_16] [i_16] = (((((((32 ? (arr_50 [i_16] [i_16]) : 32448))) ? 170 : (~65535))) * (((!((min((arr_23 [i_16] [i_16]), 180))))))));
        var_35 = ((((min(25, (arr_18 [i_16])))) && ((max((((arr_50 [i_16] [i_16]) ? var_2 : -19768)), (33526 + 65523))))));
        arr_56 [i_16] [i_16] = (((~50) | (~23)));
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        arr_59 [i_17] [i_17] = 0;
        arr_60 [i_17] = (arr_58 [i_17]);
    }
    #pragma endscop
}
