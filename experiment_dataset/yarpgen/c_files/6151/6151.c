/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((var_2 ? 1 : 103));
        var_17 = ((var_15 ? var_14 : 0));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = var_9;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] = ((var_15 ? (((8864548477813495653 ? var_6 : var_13))) : var_3));
                        arr_14 [i_1] = 103;
                        var_18 = (min(var_18, var_10));
                        var_19 += ((251 ? 8864548477813495653 : var_8));
                        arr_15 [i_1] [i_2] [i_2] [i_2] = 0;
                    }
                }
            }
        }
        arr_16 [i_1] = -9223372036854775795;
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_19 [i_5] = ((var_5 ? ((-96 ? 4 : 0)) : var_14));
        var_20 ^= (~9223372036854775801);
        var_21 += ((var_4 ? (!var_8) : ((var_3 ? var_6 : var_15))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = (254 ? 12329582821562086500 : 22655);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    arr_30 [i_7] [i_7] [i_8 - 3] = 14492;
                    arr_31 [i_6] [i_6] [i_7] [i_7] = (!(((var_8 ? -1 : ((61817 ? -8950532065886171918 : 254))))));
                    arr_32 [i_6] [i_6] [i_7] [i_7] = (((!var_10) ? (((var_0 ? var_12 : var_7))) : ((var_7 ? 13234471146095919795 : 1))));
                }
            }
        }
        var_22 = 0;
    }
    var_23 = var_12;

    /* vectorizable */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        arr_36 [i_9 + 2] [i_9] = var_9;
        var_24 = ((-7440 ? 52290 : 0));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_25 = (~2130501031);
                            var_26 = var_11;
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            var_27 = (~var_15);
                            var_28 = 0;
                            arr_51 [i_14] [i_12] [i_10] = ((var_2 ? var_8 : var_12));
                        }
                        var_29 = (!var_0);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] = (((69818988363776 ? 13265 : 0)));
        var_30 = var_7;
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_31 -= (((((var_10 ? 48 : var_12))) ? ((7440 ? var_14 : 6117161252147465116)) : var_5));

        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            arr_60 [i_16] = (1031277905 ? var_5 : 2130501031);
            arr_61 [i_16] [8] [i_16] = (((((var_5 ? 251 : 0))) ? ((((!(!var_15))))) : (((((var_7 ? 1031277904 : 14366097823325392004))) ? var_9 : -35183835217920))));
        }
        var_32 = var_0;
    }
    #pragma endscop
}
