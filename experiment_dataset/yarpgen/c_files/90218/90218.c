/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((0 ? (~18) : var_6));
                    var_17 = (var_9 + 8);
                    arr_6 [i_0] [i_1] [i_0] [i_0] = var_12;
                }
            }
        }
        arr_7 [i_0] = (((255 ? 8 : 17)));
        var_18 = ((var_4 ? ((0 ? var_1 : var_14)) : -var_9));
        arr_8 [i_0] = ((247 ? var_7 : var_14));
    }
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        var_19 = (min(var_19, (((251 % (~17))))));
        var_20 = (max((23 + var_4), (((((var_9 ? 232 : var_7))) ? (((max(230, var_12)))) : ((255 ? var_10 : var_6))))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_21 = (min(var_21, 248));
            var_22 = ((0 ? 233 : 20));
        }
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_23 *= 232;
            arr_17 [i_5 - 3] [i_3 + 4] [i_3 + 4] &= (((((var_12 ? 247 : 20))) ? ((var_8 ? var_7 : 8)) : ((((var_10 ? 3 : 236)) >> (232 - 204)))));
            var_24 = (min(var_24, ((min(var_1, ((((234 + 17) - var_14))))))));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_25 [i_8] [i_8] = (((var_11 <= 247) >> (247 - 226)));
                            arr_26 [i_7] [i_7] [i_8] [i_3 - 4] = (229 >> (230 - 199));
                            var_25 = (max(var_5, var_5));
                            var_26 &= var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            var_27 = 242;
                            var_28 = (max(var_28, (((-0 ? var_0 : (24 == var_0))))));
                            var_29 = (max(var_29, var_1));
                            var_30 = (max(var_30, ((((((((max(var_12, var_3))) ? (~17) : 247))) ? ((8 ? var_3 : var_12)) : ((255 ? var_4 : 23)))))));
                            var_31 = (min(var_31, ((((((((max(33, var_13))) + (255 == var_0)))) ? (min(var_8, ((var_4 ? var_1 : 232)))) : (min((var_11 / var_14), ((var_10 ? var_1 : var_10)))))))));
                        }
                    }
                }
                var_32 = var_2;
                var_33 = (max(var_33, (~var_9)));
            }
            var_34 = 0;
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_35 [i_11] = (var_12 ? 12 : ((var_12 ? 233 : var_4)));
        var_35 = (min(var_35, ((((((var_2 ? var_5 : var_3))) && (((var_7 ? var_12 : var_1))))))));
        arr_36 [i_11] = ((var_13 ? -250 : var_5));
    }
    #pragma endscop
}
