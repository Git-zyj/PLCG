/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((max((arr_1 [i_0]), var_0))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_2;
            var_15 = (max(var_15, ((max(15462422910578995792, -8088094229662584610)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [13] = 2878103949;
                var_16 = ((((-851229955495439532 && (arr_3 [i_0] [i_2]))) || (!var_8)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = var_10;
                            arr_19 [i_0] [i_2] [i_2] [i_0] = -851229955495439532;
                        }
                    }
                }
                var_18 *= (!-8194972298620734487);
                var_19 = (!160);
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [i_2] [i_2] [i_0] [1] [i_0] = (arr_24 [i_6] [i_7 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]);
                        var_20 = ((((max(7609, 8088094229662584610))) && (7609 != var_12)));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_21 |= (min(42419, -1576668482461006850));
                            var_22 = (max((~var_12), 15659133311897486586));
                            arr_30 [i_8] [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = (5728990263624003921 && ((!((max((arr_27 [i_0] [i_2] [i_0] [i_7] [i_8] [i_0]), var_6))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_23 = (arr_25 [i_0] [i_7] [i_6] [i_2] [i_0] [i_0]);
                            arr_35 [i_0] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
                            var_24 = (arr_29 [13] [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_25 = max(851229955495439532, 24);
                            arr_39 [i_2] [i_2] [i_0] [1] = -130;
                        }
                        var_26 = var_10;
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            arr_44 [i_11] [i_0] [i_0] = 54788;
            arr_45 [i_0] [i_0] [i_11] = (!-8194972298620734471);
            var_27 = var_6;
            arr_46 [i_0] [i_11] [i_0] = -255;
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {
                    var_28 = (-32767 - 1);
                    var_29 = (max(19028, (min(1, -851229955495439532))));
                    var_30 = (arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_58 [i_0] [i_12] [i_14] [i_0] [i_0] [i_0] [i_13] = (arr_52 [i_0] [i_12] [i_13] [i_15] [i_0] [i_0]);
                                var_31 = (((~43378) || -54788));
                                arr_59 [i_0] = (((-865748560 < 239) != (~21615)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_32 = (max(12227, 3));
                                var_33 = 15;
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = max(var_9, (((((((21 || (-9223372036854775807 - 1))))) != (var_10 + 12237)))));

    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_68 [i_18] = var_13;
        var_35 = (min(var_35, (944273910 && 91)));
    }
    var_36 = -1127188771563291030;

    /* vectorizable */
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        arr_71 [i_19] [i_19] = (arr_69 [i_19] [i_19]);
        var_37 |= ((6206997757414642722 << (-865748560 + 865748618)));
        var_38 = (((arr_11 [i_19] [i_19] [i_19] [i_19]) >= 1));
        var_39 = (-865748572 ? (arr_65 [i_19] [i_19] [i_19] [i_19] [i_19]) : (2915638225236518884 >= 13349884416872115131));
    }
    #pragma endscop
}
