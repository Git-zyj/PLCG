/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [1] = (var_0 || var_1);
                            var_18 = var_14;
                            var_19 = (229519547 >= var_11);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_15 [i_0] [8] [i_0] [1] [i_1] [9] [i_2] = (((var_16 & var_14) ? (arr_8 [i_3] [i_3 + 1] [i_3] [i_3]) : (!0)));
                            var_20 ^= (min((((arr_14 [i_1 + 1] [18] [i_1] [16] [i_1 - 1]) ? 229519540 : 30080)), (var_8 < 207)));
                            var_21 = (min(var_21, ((((36 << (((arr_9 [i_0] [i_2] [i_0] [i_0] [i_1 + 1]) - 38983))))))));
                        }
                        var_22 = (var_8 < var_17);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 |= var_7;
                        arr_18 [4] [i_1 + 1] [i_2] [i_6] [8] = ((min(-229519541, (arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [6]))));
                        arr_19 [i_2] [i_2] [i_2] [i_0] = ((((((((-229519572 ? 2850241245 : -49))) ? 229519540 : -229519541))) && (!72)));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [15] = (((((((min((-2147483647 - 1), 0)) + 2147483647)) + 2147483647)) >> -0));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 ^= (((var_9 ? ((var_5 << (var_0 - 10156))) : var_13)));
                        arr_23 [i_0] [i_0] [i_2] [i_7] = (~var_9);
                    }
                    var_25 -= (min(((63 ? 0 : 2002594180625335002)), var_6));
                    var_26 &= 794144181;
                    var_27 = -229519579;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            {
                var_28 = (min(12074, 10544707615853838622));
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_41 [2] [i_9] [i_10] [i_8] [i_12] |= ((5612757571664383319 ? 1 : (((arr_0 [i_9] [i_9]) ? 12074 : -889871874))));
                                var_29 = ((-(arr_9 [i_9] [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9])));
                                arr_42 [i_12] [i_9] [i_9] [i_11] [i_12] = 253;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, var_3));
    var_31 = ((((((2864 / 12197) % ((var_6 ? var_5 : 3500823114))))) ? var_14 : var_8));
    #pragma endscop
}
