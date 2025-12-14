/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = 356148120;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (-1 > var_6)));
                    arr_8 [i_0] [i_1] [i_0] = -8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = (~var_8);
                                var_22 = ((+(((arr_0 [i_2]) - 101))));
                                var_23 = ((var_15 ? var_3 : -15));
                            }
                        }
                    }
                    var_24 = 15390;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = 1464973804;
        var_25 = 1048575;
        var_26 = (max(var_26, var_12));
        arr_18 [i_5] = ((((((216 == (arr_16 [i_5]))))) >= var_7));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_27 -= -18232;
                var_28 |= 93;
                var_29 ^= ((var_1 ? 954125047 : 30845));
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_30 = ((var_0 || (arr_14 [i_6] [i_6 + 2])));

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_31 = (arr_12 [i_6] [i_6] [i_6] [i_6 - 1] [i_9] [i_6]);
                    arr_33 [i_6] [i_7] [i_9] [i_6] = ((!(-31175 < 186)));
                    var_32 = (max(var_32, (!3112775472410579459)));
                    var_33 -= ((-2048 >= (var_0 % -90)));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_34 = -103;
                    var_35 = 939524096;
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    arr_38 [i_6] [i_7] [i_6] [i_6] = var_17;
                    var_36 = 18232;
                    var_37 *= 0;
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_38 = (max(var_38, var_1));
                    var_39 = 0;
                }
                var_40 = ((!(((var_5 << (((arr_16 [i_7]) - 30901)))))));
            }
            arr_41 [i_6] [i_6] [i_6] = (arr_19 [i_6]);
        }
        var_41 = ((var_4 <= (((70 >> (102 - 83))))));
    }
    var_42 = (((((min(var_12, var_16)))) ? -666821595 : 1782688170));
    #pragma endscop
}
