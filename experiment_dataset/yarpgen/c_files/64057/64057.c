/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [7] [11] = (max((max(var_9, (min(var_5, 113)))), (min((~var_8), var_7))));
        var_12 = (min(var_12, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : ((min((arr_0 [i_0]), 26189))))))));
        var_13 = ((+(((arr_0 [i_0]) ? var_2 : 6399030274281211575))));
        var_14 = ((((~((var_1 ? 2509878157 : 2904699442)))) | ((1785089142 | (116 ^ 112)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (((~(min(225, 1785089138)))))));
            var_16 = 210;
            arr_8 [i_1] [i_1 - 1] [i_1] = (max((~var_7), (min(1785089138, (arr_5 [i_1] [i_1])))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_17 = 129;
            arr_11 [i_1] [i_3] = (((arr_7 [i_1 - 1] [i_1]) < var_5));
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_4] = (-(var_5 - -16316));
            var_18 = (min(var_18, ((((arr_15 [i_1 - 1] [i_1 - 1] [i_4]) ^ -16)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_20 [i_1] [3] [17] = 245;
            var_19 ^= var_3;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            arr_25 [i_1 - 1] [i_1] = (var_7 ^ 10);
            arr_26 [i_1] [i_6] = var_5;
            var_20 += var_4;
            arr_27 [8] [i_1] = 11653601577061222652;
            var_21 = 151;
        }
        arr_28 [i_1] = ((!(((234 << (-7471 + 7472))))));
        arr_29 [i_1] [i_1] = (((arr_24 [i_1 - 1]) ? var_1 : -var_0));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_22 *= ((((1387309712 < var_9) < 2749967916914380069)));
        arr_32 [i_7] = var_8;
        arr_33 [i_7] = (max((((((var_4 ? var_3 : var_6))) ? ((-1369604088 ? 142 : 10)) : (!var_8))), (!var_8)));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_23 = min(((((max(var_7, var_1))) ? ((((arr_31 [i_8] [5]) + 1))) : var_5)), var_4);
        arr_38 [4] = (((((!(142 && -16)))) >> (var_4 - 4169834344)));
    }
    #pragma endscop
}
