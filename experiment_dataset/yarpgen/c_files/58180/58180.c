/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_12;
        arr_2 [i_0] = var_2;
    }
    for (int i_1 = 4; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_14 -= ((~(~8152)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_15 = (min(var_15, (var_7 < 10314)));
                        var_16 = (((arr_8 [0] [i_1] [i_3]) < 0));
                        var_17 = ((-(arr_0 [i_1 + 4] [i_1 - 4])));
                    }
                    arr_14 [i_1] [i_1] [i_2] [i_1] = (max((((((max(var_8, 55223)))) & (((arr_4 [i_1]) ? 91 : var_12)))), (~253)));
                    arr_15 [i_1] [i_2] [i_1] = var_7;
                    var_18 = (min((arr_5 [i_1]), var_1));
                    var_19 = (min(var_19, ((((((((20847 ? 1 : (arr_9 [i_1 + 1] [i_2])))))) % var_12)))));
                }
            }
        }
        var_20 -= (2137552813 == 3584);
    }
    for (int i_5 = 4; i_5 < 7;i_5 += 1) /* same iter space */
    {
        var_21 = (((((((arr_11 [6] [i_5] [i_5 + 2] [i_5] [i_5 - 2]) && var_2)))) - 16469705459197830026));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_6] [i_6] = (max(var_6, (-19236 * 0)));
                            var_22 = ((((max((max(var_1, (arr_10 [1]))), (((-(arr_24 [i_7] [i_7] [i_7] [10]))))))) ? (((max((arr_5 [i_6]), (!var_5))))) : (~634597244)));
                            arr_29 [8] [i_8] [i_6] [i_6] [i_5 + 4] [i_5 + 4] = ((+(((arr_22 [i_5 + 4] [i_5 + 4] [i_8 - 1] [i_8 - 1]) ^ (arr_22 [i_5] [i_5 + 4] [i_8 - 2] [i_8 + 2])))));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_23 = (arr_31 [i_6 - 1] [i_6] [i_6 + 2]);
                            var_24 = (arr_26 [i_5] [i_6] [i_8 + 1] [i_5] [i_5 - 3]);
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_25 = (max((((var_9 + (arr_5 [i_6])))), (arr_11 [i_6] [i_6 + 1] [i_6] [i_6] [i_6])));
                            arr_34 [i_5 - 3] [i_6] [i_5 - 3] [i_6] [i_6] = (max(0, ((9223372036854775807 > ((max(63084, var_12)))))));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_26 -= var_1;
                            var_27 = (min(var_27, (arr_5 [i_7])));
                            arr_37 [i_6] = var_0;
                        }
                        arr_38 [i_6] [i_6] [i_8] = ((var_6 ? ((~(arr_6 [i_5 - 3] [i_8 - 1]))) : (((max(var_0, (-9223372036854775807 - 1))) % -var_2))));
                        var_28 = 7;
                        var_29 = (max((~2392680455), var_11));
                    }
                }
            }
        }
        var_30 = ((37246 ? ((max(243, (arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])))) : (arr_11 [2] [i_5 - 1] [i_5 - 4] [i_5 + 3] [i_5])));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        arr_48 [i_16] [i_15] [i_13] = min(var_12, ((((max(var_11, var_11))) - -9047914055135182063)));
                        arr_49 [5] [i_15] [i_14 + 1] [i_13] = (((255 || 0) || ((min(var_7, (arr_40 [i_14 - 2]))))));
                    }
                }
            }
        }
        var_31 = (~19211);
        arr_50 [i_13] [i_13] = var_0;
    }
    var_32 = var_2;
    var_33 = var_6;
    var_34 = (min(((var_7 + (max(1678912131, 1902286833)))), var_3));
    #pragma endscop
}
