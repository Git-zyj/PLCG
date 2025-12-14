/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 255;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((180 ? (arr_0 [i_0] [i_0]) : 76)))));
        arr_2 [i_0] = (((arr_1 [3] [i_0]) & ((var_8 ? (!32767) : (arr_0 [i_0] [3])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = var_9;
        arr_5 [i_1] = ((((((((752813106636205488 / (arr_3 [i_1])))) ? var_11 : var_3))) || (((arr_4 [i_1] [i_1]) || (((arr_4 [i_1] [i_1]) < (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 |= (((((~((min(var_8, (arr_9 [i_2] [i_2 + 1]))))))) ? (arr_4 [i_3] [16]) : (((~((-1750230767 ? 98 : 1750230766)))))));
                    var_18 -= 32769;
                }
            }
        }
        var_19 = ((((~(arr_0 [i_2 + 1] [i_2 - 4])))) ? ((8588 ? 0 : var_10)) : (~1750230797));
        arr_13 [i_2] = var_12;
    }
    var_20 = (((max(((65535 ? var_1 : 1)), ((min(var_6, 32769))))) == (min(-7222373900316665176, (var_5 / 32767)))));
    var_21 = var_5;

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_22 ^= ((((((max(62, var_6))) * (arr_15 [i_5 + 2] [i_5 + 2])))) ? 255 : ((((var_12 & var_2) > var_13))));
        var_23 = 2486002677;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_24 = ((arr_16 [i_7] [i_6]) % 1193767648);
                    arr_26 [i_6] [i_6] [i_8] = (((((arr_21 [i_6] [i_6] [11]) ? 7222373900316665175 : var_6)) / 1750230766));
                    arr_27 [10] = ((var_1 / (((arr_24 [i_8] [i_7] [i_8]) ? 1 : var_2))));
                }
            }
        }
        var_25 = (((arr_24 [i_6] [i_6] [i_6]) ? (arr_24 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_6] [i_6])));
        var_26 = 32767;
    }
    #pragma endscop
}
