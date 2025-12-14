/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = 6;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1]) | (arr_4 [i_0 - 1] [i_0 + 4] [i_1 + 1])))) == (~var_8)));
                            var_16 += ((-((var_11 ? var_12 : 93))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_13 [i_4] = (!var_5);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_0 & (3072008297989576243 - 1))))));
                    var_18 = 3072008297989576250;
                    arr_19 [i_5] [i_5] = ((-(arr_15 [i_4 - 3])));
                }
            }
        }
        arr_20 [i_4] = var_10;
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_24 [i_7] = (((9223372036854775807 ? 64 : 576458553280167936)));
        arr_25 [i_7] = (max(-63, -29));
        var_19 = (min((((min(var_1, 15374735775719975362)))), -var_0));
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8 + 4] = -var_8;
        var_20 = var_10;

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_21 = (~-12);
                        var_22 += var_6;
                        arr_39 [14] [i_10] [i_10] [i_10] [i_8 + 1] = ((+(((var_9 - -5017874089746092207) | (!var_10)))));
                        var_23 = 253016786297582356;
                    }
                }
            }
            var_24 = (max(var_24, 1023360681));
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_25 = (min(var_25, var_5));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    {
                        var_26 = (max((((4294967283 || (((1023360671 ? var_1 : 4010284291913403103)))))), (((-12603 | 50096) ? (var_2 || var_12) : (232 - 1)))));
                        var_27 = (min(var_27, (((-((-(arr_42 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8]))))))));
                        arr_49 [i_13] [i_8] = ((((min((arr_44 [i_13 - 1] [i_14 - 1] [i_14]), 4294967290))) ? 48 : ((((arr_45 [i_13 - 1] [i_14 + 3] [i_14] [i_14]) == (arr_44 [i_13 + 1] [i_14 - 1] [i_14]))))));
                    }
                }
            }
            var_28 = (((!var_4) != ((58 & (min(var_11, var_5))))));
            arr_50 [18] [18] [18] = (((var_6 ? (min(4278375618, var_4)) : ((var_4 ? 16591670 : var_7)))));
            var_29 = (arr_47 [i_8] [i_8] [9]);
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            arr_55 [16] [i_8] [i_8] = (((arr_26 [i_8 + 4]) ? (((!((max(var_2, var_4)))))) : 12));
            arr_56 [i_15] = ((((((3072008297989576235 || var_9) ? -32767 : (arr_26 [i_8])))) ? (((arr_35 [i_8 + 4] [i_15] [i_15]) ? var_1 : var_6)) : (((!(var_10 && var_10))))));
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_30 = 137;
            var_31 = (max(219, var_2));
            var_32 = (min(var_32, (((((((!(!1))))) * ((16591674 << (var_10 - 254787061))))))));
            var_33 = (min(var_33, var_10));
        }
        var_34 = (min(var_34, (((var_8 ? ((max(((var_1 << (var_3 + 11734))), ((var_9 ? var_1 : var_12))))) : (((arr_51 [i_8 + 4]) ? (!1427575363) : (~var_2))))))));
    }
    #pragma endscop
}
