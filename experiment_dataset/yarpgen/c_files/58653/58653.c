/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((max((min(var_10, 0), 1))));
                arr_7 [0] &= (max(0, ((-(~var_12)))));
                var_15 = ((+(((arr_2 [i_1] [i_0 - 1]) ? 748824349606094448 : var_7))));
                arr_8 [12] &= (((((((arr_3 [1]) ? 33554431 : -748824349606094448)) | (((max(var_6, var_8))))))) ? 0 : (max(var_3, (max(0, var_4)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_12 [0] [i_2] &= (min(((((arr_10 [i_2]) != -748824349606094452))), (((0 ? 748824349606094448 : var_8)))));
        arr_13 [i_2] = ((((-(min(-748824349606094448, 1)))) + ((max(var_3, -4377207043859623590)))));
        arr_14 [i_2] [i_2] = (max(-var_2, ((-((var_7 / (arr_11 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = 748824349606094446;
        arr_17 [1] = (1 + 15);
        arr_18 [i_3] [i_3] = 1;
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        var_17 = ((max(1, (!var_2))));
        var_18 = (((--748824349606094434) == ((var_7 ? (min(var_0, var_6)) : var_6))));
    }

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_27 [i_5] = (min(((((min(19132, 255))) + 1)), 209));
        arr_28 [i_5 - 1] = (((((((var_8 ? var_4 : var_3)) >= ((((arr_25 [i_5 - 1]) != -1)))))) <= var_4));
        arr_29 [i_5 - 1] = ((~((~((var_2 ? var_11 : var_5))))));
        var_19 = 7;
        arr_30 [i_5 - 1] [i_5 - 1] = (((var_1 + 2147483647) >> ((var_5 ? (var_12 % var_8) : (110 > var_3)))));
    }

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_34 [i_6] = (min(-748824349606094441, -748824349606094447));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    arr_39 [i_6] [i_7] [i_6] = ((((max((arr_4 [i_6]), 4))) ? (((arr_5 [i_8 + 3] [i_8 + 3] [i_8 + 2]) ? (var_8 << 10) : ((1 ? 1 : (arr_33 [4]))))) : (((126 ? (((arr_22 [i_7]) ? var_7 : -19125)) : -19125)))));
                    var_20 *= var_10;
                }
            }
        }
        arr_40 [i_6] = ((var_5 ? (var_4 && 9223372036854775807) : (!74)));
    }
    #pragma endscop
}
