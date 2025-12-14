/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((~var_12) ? (arr_1 [i_0]) : ((max(-var_2, (arr_1 [i_0]))))));
        var_16 = (max(var_16, ((max(((max(-1613195177, 1613195176))), (max((arr_2 [i_0]), (max(1613195177, 3633110339622938759)))))))));
        arr_4 [i_0] [i_0] = -1613195177;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = ((~(arr_10 [i_2])));
            var_18 = ((8954 ? 16777152 : 2763465202));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_15 [i_2] = (~0);

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((-(max((1 - -2019694942), (arr_10 [10])))));
                    arr_19 [i_2] [i_2] [i_3] [4] = (arr_0 [i_4]);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_19 = (~14081);
                    var_20 = (max(var_20, ((max((arr_12 [4] [i_3] [i_2] [4]), var_3)))));
                    var_21 += 11827718270795184954;
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    var_22 = ((((max(var_4, 15749486825185758945))) ? (~var_8) : (((max((arr_7 [i_1] [i_1]), (arr_20 [i_3])))))));
                    var_23 = (min(var_23, 1613195177));
                    arr_24 [2] [2] [i_3] [i_3] [i_2] = (((max(((((arr_10 [i_6]) < var_0))), 6619025802914366661)) ^ 1419997516));
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (min(var_24, ((((arr_9 [i_1] [i_2]) ? (arr_9 [i_1] [i_2]) : (arr_9 [i_2] [i_7]))))));
                var_25 ^= (arr_20 [i_7]);
            }
        }
        var_26 = (max(-111899549, (max(((8189557162108235711 ? var_2 : 1449121727388069672)), var_12))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_35 [i_8] = (((arr_30 [i_8] [i_9]) >= (arr_25 [i_9] [i_9] [i_9])));
            var_27 ^= (((arr_26 [i_9] [i_9]) > 520128991));
            arr_36 [i_8] = ((~(arr_33 [i_9] [i_8])));
        }
        for (int i_10 = 4; i_10 < 12;i_10 += 1)
        {
            arr_39 [i_8] = -697677094;
            var_28 = (max(var_28, (~var_0)));
        }
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            arr_43 [i_8] = (arr_11 [i_8] [i_11 - 2] [i_11 - 1] [i_11 + 1]);
            var_29 = -520128985;
            var_30 += (arr_31 [i_11 - 1]);
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_31 = (((arr_13 [i_8]) ? ((var_13 ? var_2 : 7883660374528699056)) : -1631744707));

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_32 = (arr_13 [i_14]);
                            var_33 = (arr_34 [i_12] [i_13] [i_15]);
                            arr_58 [i_8] [i_12] [i_8] [i_8] = var_9;
                        }
                        arr_59 [i_14] [i_8] [i_12] [i_8] = var_6;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_62 [i_8] [i_8] [i_13] [i_16] [i_13] [i_8] = (arr_30 [i_8] [i_8]);
                        var_34 ^= (((-(arr_37 [i_8]))));
                        arr_63 [i_13] [i_8] = var_5;
                    }
                    arr_64 [i_12] = -var_6;
                    arr_65 [i_13] [i_8] [i_8] = (((arr_9 [i_8] [i_8]) * ((var_6 >> (561850441793536 - 561850441793510)))));
                    arr_66 [i_8] [i_8] = var_8;
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        arr_71 [i_17] = (~var_6);
        var_35 -= (-1835731548 >= 9);
    }
    var_36 = var_4;
    #pragma endscop
}
