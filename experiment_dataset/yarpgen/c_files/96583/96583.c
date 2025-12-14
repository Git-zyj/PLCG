/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (!-var_14);
                arr_6 [i_0] [i_0] [i_1] = (((((-6346 ? 120 : ((1 ? -7780085235238153752 : 63))))) * 63));
                var_21 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = var_1;
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] [i_4] [i_3] = (max((~var_17), ((var_17 ? 83 : var_14))));
                                arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] [i_0] |= (((((var_1 ? 1 : 34))) ? (max(var_11, var_17)) : (~62151)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((min(((63 ? 5887 : 15360)), 63))) ? var_7 : (((63439 ? 0 : 63)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_24 = ((max(var_0, (max(var_6, 7)))));
                    var_25 = var_15;
                    var_26 = (min(var_14, (((((var_11 ? 2946202098872903764 : (-32767 - 1)))) ? var_0 : (max(var_17, var_16))))));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_29 [i_5] [i_6] [i_7] [i_8] = var_7;
                        var_27 = ((+(max((var_15 >= var_4), ((var_19 ? var_0 : var_12))))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_28 = ((~((var_10 ? var_1 : var_4))));
                        var_29 = 125;
                        var_30 += 1;
                        var_31 = (max((((var_13 ? 4294967295 : 54))), ((((18446744073709551614 ? var_16 : 32766))))));
                        arr_33 [i_5] [i_5] [i_5] [i_7] = var_3;
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_36 [i_5] [i_5] [i_7] [i_7] [i_7] [i_10] = (max(((~((var_19 ? 3 : -123)))), var_7));
                        arr_37 [i_7] [i_5] [i_7] [i_7] [i_10] [i_10] = ((~(var_8 - var_0)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
