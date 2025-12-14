/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(((var_13 ? var_7 : var_2)), ((max(var_14, var_8)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 *= (var_8 || var_0);
            var_21 = (min(var_21, ((((((((min(var_7, var_11))) ? (((var_17 ? var_7 : var_10))) : var_18))) ? ((((max(var_17, var_9))) ? var_13 : var_8)) : ((min(var_16, var_11))))))));
            arr_6 [i_0] [2] [18] = var_4;
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_10 [12] &= (max(((var_15 ? var_16 : ((min(var_13, var_10))))), var_0));
            arr_11 [2] [2] |= var_13;
            var_22 = (max(((var_4 ? var_9 : var_16)), ((min(var_11, (var_7 | var_18))))));
            var_23 = ((var_4 >> ((max(var_8, var_13)))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_24 = (min(var_24, ((max(((var_13 ? var_7 : ((min(var_10, var_16))))), var_17)))));
            var_25 = (min(var_25, ((max((var_2 + var_2), ((var_9 ? var_13 : var_14)))))));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_26 = (max(var_26, (((((max(var_16, var_12))) < ((((var_17 - var_1) != ((min(var_3, var_8)))))))))));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_27 ^= var_11;
                var_28 |= (((var_18 & var_0) | (var_8 | var_1)));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_29 |= var_12;
                            var_30 = (min(var_30, (max(((var_16 ? var_8 : var_4)), ((min(var_7, var_3)))))));
                        }
                    }
                }
                var_31 += (min((max(var_4, var_12)), ((var_1 >> (var_17 - 895634790)))));
            }

            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                var_32 -= (max(var_18, ((min(var_4, var_10)))));
                var_33 = (((var_16 ? var_7 : var_17)) / (var_0 / var_17));
                arr_28 [i_0] [i_4] [i_9] [i_0] = (max((max(var_1, var_5)), (max(var_6, var_10))));
                arr_29 [i_0] [i_0] [i_9] [i_9 - 1] = (max((min((min(var_9, var_4)), var_13)), (((var_13 ? var_7 : var_10)))));
                var_34 += var_9;
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                arr_32 [i_0] = (var_17 || var_3);
                var_35 |= ((var_14 + ((var_18 ? var_7 : var_8))));
                var_36 = (var_3 ? var_1 : var_7);
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_37 = (max(var_37, ((min((min(var_6, var_18)), var_17)))));
                arr_37 [i_0] [1] [i_11] [i_11] = ((var_10 ? (((((var_9 ? var_3 : var_4))) ? ((min(var_7, var_1))) : var_14)) : (var_4 >= var_2)));
                var_38 = var_4;
            }
            var_39 ^= ((((var_0 ? (((var_6 ? var_12 : var_17))) : var_18))) ? var_1 : (var_14 % var_1));
        }
        var_40 = (min(var_40, ((((max(var_14, var_9)) << (var_10 >= var_5))))));
    }
    var_41 += var_6;
    #pragma endscop
}
