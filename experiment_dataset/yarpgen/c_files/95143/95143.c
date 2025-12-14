/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (var_5 / 15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((((min(var_7, var_4))) ? (var_4 != var_9) : (min(817201065, 1)))) - (var_5 || var_3)));
                var_11 = (((((var_3 ? var_5 : var_1)) / (var_4 & var_1))));
                var_12 = (((min((73 & 94), (var_8 && var_6))) < (((var_1 != (var_9 > var_9))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = ((((5662 * 0) & (89 * 183))));
                    arr_10 [i_2] = ((min(var_3, (var_1 | var_6))) > ((((((max(653268774, 182))) && (var_4 <= var_1))))));
                    arr_11 [i_0] [i_2] = ((((1 ? 73 : 61)) | (((((var_2 ? var_7 : var_3)) >= ((72 >> (73 - 44))))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_14 = var_5;
                    var_15 = ((((((var_4 + var_1) < (((var_6 ? var_5 : var_6)))))) >= (((var_5 <= 16873) ? 113 : ((min(64, 16003)))))));
                    var_16 = ((((min(((var_4 ? var_2 : var_8)), (var_3 - var_3)))) != (((var_5 + var_5) ? (var_2 * var_2) : ((var_3 ? var_2 : var_9))))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_17 = (((((164 < (5159800452591086759 != var_8)))) << (42 - 40)));
                        arr_18 [i_0] [i_4] = (((var_4 || var_9) != var_0));
                        var_18 = ((((((var_4 << (var_5 - 3220122587165874438))) >> ((((var_6 ? var_1 : var_8)) - 8185473142126185274))))) <= ((((max(var_2, var_4))) + (min((-127 - 1), 6436136772181643541)))));
                        arr_19 [i_0] [i_1] [i_1] [i_0] = var_0;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_19 = ((127 >> (26564 - 26559)));
                        var_20 ^= 1608821403;
                        var_21 = ((((((var_5 & var_4) ? var_9 : (var_2 && var_1)))) ? (((1608821403 % 1) ? (48689 / 1) : -61)) : (((var_5 <= var_9) << (var_4 > var_5)))));
                        arr_22 [i_0] = ((((((var_5 > var_5) & ((min(48, 215)))))) <= ((((var_2 ? var_3 : var_5)) % (var_3 || var_6)))));
                        var_22 = var_7;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_0] [1] = (8188 != -120);
                        arr_28 [i_1] [i_1] [i_1] [i_1] = ((-2147483630 ? var_5 : var_0));
                        arr_29 [1] [i_1] [i_1] = (((var_5 >> (var_0 - 101))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_23 |= (min(((142 ? (18446744073709551601 / 1) : 2465108400686678390)), 16894));
                        var_24 = ((((-81 ? (var_7 >= var_6) : ((min(1, -10470))))) >= (((61 ^ 65532) % (var_3 || 9223372036854775793)))));
                        arr_32 [i_0] [i_1] [i_3] [i_7] = var_8;
                    }
                }
            }
        }
    }
    var_25 = ((var_6 & ((((var_1 ^ var_6) <= (var_7 > 16873))))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_26 = (min((((var_8 >> var_2) ? (var_3 + var_7) : (var_8 * var_6))), var_8));
                                var_27 = (((((((max((-9223372036854775807 - 1), -562550134561155028)) + 9223372036854775807)) >> (var_8 > 96))) - ((((var_9 != (((var_2 ? var_6 : var_0)))))))));
                                arr_50 [i_8] [i_8] [i_10] [i_11] [i_12] = ((var_3 ? var_8 : (((((var_7 ? var_5 : var_6)) != ((min(var_4, var_8))))))));
                            }
                        }
                    }
                    var_28 = (((((((max(var_5, var_9))) ? (var_1 || var_0) : var_5))) ? (((var_5 * (var_1 < var_2)))) : (((562550134561155027 / 58) / (var_1 / var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
