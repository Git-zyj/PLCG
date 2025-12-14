/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_18 = ((~((-(arr_4 [i_0] [i_0] [i_0 + 1])))));

            for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_0] [i_2] = (-29 != -29);
                var_19 = (min(var_19, 967851814));
                var_20 += 33;
            }
            for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_0] = (arr_10 [i_3] [i_1 + 1] [i_0]);
                var_21 = 30;
                var_22 = (((arr_0 [i_0 + 3]) != (arr_9 [i_0])));
                arr_13 [i_0] [i_0] [i_0] [i_0] = var_5;
            }
        }
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_23 = (min(var_23, ((((var_12 ? (arr_1 [6] [6]) : 3490166927))))));
            arr_17 [i_0] [i_0] = -34;
            arr_18 [i_0] = ((-(arr_10 [i_0] [i_0 - 2] [i_0 + 1])));
        }
        var_24 = (((((var_14 ? -33 : var_13))) % -33));
    }
    var_25 = (max(var_25, var_17));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_26 = ((((max(73, 33))) % (arr_20 [i_5])));
                var_27 = (min(0, 1));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_28 [i_5 + 2] [i_6] [i_7] [i_6] = ((~(min(((2909468017 ? var_11 : (arr_19 [i_8]))), ((var_14 ? var_7 : 0))))));

                            for (int i_9 = 1; i_9 < 18;i_9 += 1)
                            {
                                arr_33 [i_5] [i_7] [i_5] [i_8] [i_9] = (~33975);
                                var_28 = (max(var_28, 7250357124865759044));
                                arr_34 [i_9 + 1] [i_9 - 1] [i_7] [i_7] [i_6] [i_5 + 3] = ((33983 >> (((~var_17) - 18446744072334946813))));
                                var_29 ^= ((-0 ? 29 : (--183)));
                                arr_35 [i_5] [i_5] [i_7 + 2] [i_8] [i_8] |= (min(4294967265, var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
