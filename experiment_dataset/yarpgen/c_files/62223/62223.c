/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!(179 % 179)));
                var_10 = (max(var_10, ((((1 || 1) ? ((1 ? -786710662 : 25783)) : 25)))));
            }
        }
    }
    var_11 += (((-29 ? var_4 : var_3)) | var_1);

    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_12 = (min((~28647), 28642));
        arr_10 [i_2] = (max(2652243136450872891, ((((2652243136450872889 ? -2652243136450872889 : 11)) + 28647))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_13 = ((0 >> (28647 - 28643)));
        var_14 = (!5859);
        var_15 *= ((1 ? 2652243136450872889 : 82));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_18 [i_4] [1] = (1 / 36869);
            var_16 = (174 < 2630536896);
            arr_19 [i_4] [i_4] = 176;
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [i_4] [i_4] [i_6] = (~7);
                        arr_26 [i_4] [i_4] = ((((0 ? 26 : 278134509)) / (-2147483647 - 1)));
                    }
                }
            }
            arr_27 [i_4] = (1 ? ((0 ? 65515 : 0)) : 14334);
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {

                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_17 = (1 - 1);
                            var_18 = (max(var_18, ((185 ? (30614 - 1) : 30407))));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_19 += ((-32757 ? 2147483646 : (23 / 1)));
                            var_20 = 54589;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            arr_42 [11] [i_7] [i_8] [i_7] [i_3] = (-29 < 1);
                            arr_43 [i_3] [i_3] [i_8 + 1] [i_9] [i_7] = (((-32767 - 1) & 19));
                        }

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_46 [i_7] [1] [i_8] [i_9] [i_13] = (1 ? -84 : 37750);
                            arr_47 [i_3] [i_7] [i_7] [i_9] [i_9] [i_7 + 4] [i_7] = (!1991346907);
                            var_21 |= (125787913 / 1);
                            arr_48 [i_9] |= (~29072);
                        }
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_22 = 58899;
                        arr_52 [1] [i_7] [i_7] [i_3] = -156;
                    }
                    var_23 = (--4097027471);
                }
            }
        }
    }
    #pragma endscop
}
