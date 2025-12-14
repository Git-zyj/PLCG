/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_0] [i_0] = ((-((((min((arr_3 [i_0] [i_0]), 15724))) ? (((-15734 ? -15731 : var_14))) : 17179852800))));
                    arr_8 [i_1] [i_0] = (min((((!((((arr_1 [i_0]) ? -15734 : -127)))))), (~var_8)));
                    arr_9 [i_2] [i_0] [i_0] = 15734;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_16 = (((-((min(15734, 3))))));
                    var_17 = ((-var_5 ? ((-(min(var_4, -5359)))) : (((min(var_3, var_7)) * (((3072 ? 15537 : var_9)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_18 [i_5] = (3235118834 < 17330148414322263234);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                arr_24 [21] [i_6] [i_5] = (var_4 * var_15);

                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_18 = (((var_11 ? 128 : 32768)));
                        var_19 = (arr_21 [i_8 + 1] [i_8] [i_8 + 1] [i_8]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_20 = (((arr_19 [i_5] [i_6] [i_7 + 1]) >> (var_2 - 39409)));
                        var_21 = (!15741);
                        var_22 = 154;
                        var_23 = var_1;
                        var_24 = (3381637346 * 44538);
                    }
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        arr_39 [i_5] [i_5] [i_6] [i_7] [16] [i_5] = (!var_9);
                        var_25 = (((arr_21 [i_7 + 1] [i_8 + 1] [15] [i_7 + 1]) >= 0));
                        var_26 = 166210624;
                    }
                    arr_40 [i_7] = (~-7806878817059360482);
                    var_27 = (((!var_9) <= (!var_6)));
                    arr_41 [i_5] [i_5] = (var_11 / -105);
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_45 [8] = (((~1172378666901966672) - var_3));
                    var_28 = 169;
                    arr_46 [3] [7] [7] [i_12] = ((-((-5240 ? -1 : 62776))));
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_29 = 32426;
                            var_30 = ((!(-15730 > var_12)));
                            arr_51 [i_14] [17] [i_7] [i_7] [i_7] = 10551;
                        }
                    }
                }
                var_31 = 1172378666901966673;
            }
            arr_52 [i_5] [i_6] [i_5] = ((var_7 ? (var_9 > -15746) : ((var_5 ? -4611686018427387904 : var_9))));
        }
        arr_53 [i_5] [i_5] = var_11;
        var_32 = (265561476 == 4294967281);
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_64 [i_15] [i_15] [i_16] [i_17] [i_17 - 3] [i_16] = var_15;
                        arr_65 [i_5] [i_16] [i_16 - 3] [i_17] [10] [i_16] = (~var_7);
                    }
                }
            }
        }
    }
    #pragma endscop
}
