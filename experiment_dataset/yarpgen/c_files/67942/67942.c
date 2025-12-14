/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((min(var_10, var_11)) ? -2007280198716487133 : (((0 ? 29 : 8388607)))))));
    var_13 = var_0;
    var_14 = (~0);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = min(((29 ? 6872340289700145108 : -1)), -1);
        var_16 = 0;
        arr_2 [i_0] [i_0] = 32767;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 -= var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_18 = ((1 ? -8192080025326400293 : 1099381146));
                                arr_19 [i_1] [i_2] [i_4] [i_2 + 1] [i_4] [i_4 - 1] [i_5 + 1] = ((-((((arr_0 [i_4 - 1]) && (arr_1 [i_1 + 1]))))));
                                var_19 = ((255 ? 127 : 24144));
                                arr_20 [i_3] [i_2] [i_3] [i_3] [10] |= (arr_10 [1] [i_2 - 1]);
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] [3] = (((((((24 ? var_0 : (arr_6 [i_1] [i_1])))) ? (21 / 21) : ((min(-580, 58247))))) >= (var_11 ^ -1)));
                }
            }
        }
        arr_22 [i_1 + 2] = ((8192080025326400292 ? 8630427621600947518 : 862623511));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        arr_27 [i_6 + 1] [i_6] = ((((((arr_23 [i_6 - 2]) ? (arr_4 [i_6 + 1]) : (arr_23 [i_6 + 1])))) ? (((~(arr_4 [i_6 - 1])))) : var_9));
        arr_28 [i_6] = ((var_1 ? -3 : ((77 ? 9 : 8192080025326400292))));

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_38 [i_9] [i_6] [i_8] [i_9] = var_4;
                        arr_39 [i_6] [i_6] [i_6 + 1] = (((((2958966453 ? var_7 : (arr_9 [i_6 - 2])))) ? (((1 ? ((max(77, 567))) : 579))) : var_0));
                    }
                }
            }
            var_20 ^= (arr_1 [i_7 - 1]);
        }
        for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((((1 ? 194 : -534003905))) ? ((-(arr_25 [i_10 - 3] [i_6 + 1]))) : 246))));
            arr_44 [i_6] [i_6] = (max((((((0 ? (arr_16 [i_10] [i_6] [i_6] [i_6]) : var_3))) ? (arr_14 [i_6] [i_10 - 1] [i_6 + 1] [i_10]) : (arr_15 [i_6 - 2] [i_10] [i_10] [i_6 - 2] [i_6]))), (arr_16 [i_6 - 2] [i_6] [i_10] [3])));
        }
        for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
        {
            arr_48 [7] [i_6] [i_6] = var_4;
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    {
                        arr_56 [i_6] [i_13] [i_12 + 2] [i_6] [i_6] = (((((((min(var_0, var_6))) ? ((var_6 ? var_1 : var_9)) : var_1))) ? ((0 ? var_0 : 4111835786)) : ((((((var_8 ? var_11 : var_9))) ? 89 : (arr_7 [i_11 - 1]))))));
                        arr_57 [i_6] [i_6] [i_6] [i_6] = ((var_6 ? (arr_34 [i_6]) : ((((1 == (arr_49 [i_6 - 2] [i_6] [i_13 - 1])))))));
                        var_22 |= (arr_31 [4]);
                        arr_58 [i_6] [i_11] [i_11] [i_6] = ((min(var_3, (arr_7 [i_12 + 1]))));
                    }
                }
            }
        }
        var_23 += (-8192080025326400293 != 7270);
    }
    var_24 = ((((91633362 ? 5130058214179721130 : 7270)) >> (-7288 + 7321)));
    #pragma endscop
}
