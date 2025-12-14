/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_8 ? var_10 : var_7))) ? (var_9 / var_1) : (min(var_8, var_7))))) ? ((~((var_10 ? var_1 : var_4)))) : -var_8));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (((~13340855394411264562) ? var_8 : var_2));
        var_13 = (min(var_13, (((min((var_9 | 3430364193658824905), ((var_3 ? (arr_0 [i_0]) : var_10))))))));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (((((arr_4 [i_1]) << (((min((arr_4 [i_1]), (arr_3 [i_1]))) - 217)))) & (!var_7)));
        arr_6 [i_1] [i_1] = ((max(((min(var_10, (arr_4 [i_1])))), (249 | var_10))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_13 [i_3] [i_3] [i_3] = (((((arr_5 [i_3 - 1] [i_3 - 3]) * -117)) % (((((arr_5 [i_3 - 1] [i_3 - 3]) || (arr_5 [i_3 - 1] [i_3 - 3])))))));
                    arr_14 [i_4] [i_3] [i_4] = ((~((-4455 ? 3430364193658824905 : 15016379880050726685))));
                }
            }
        }
        arr_15 [i_2] = (max(((((var_0 ? (arr_11 [i_2] [i_2] [7] [7]) : 102)) / 3940)), (arr_5 [i_2] [i_2])));
        arr_16 [i_2] = (((((-117 ? 1 : 52))) ? (((arr_1 [i_2] [i_2]) + var_10)) : ((max((~14336), (((arr_8 [i_2]) ? var_2 : (arr_12 [i_2] [i_2]))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_15 &= (max((max(50, -32441)), (((arr_17 [i_6 - 1]) ? (arr_17 [i_6 + 2]) : -1))));
                        var_16 = ((2147483633 ? ((((arr_23 [10] [i_5] [i_5] [i_6 + 3]) << (((arr_24 [i_2] [i_5] [i_6]) - 3624561949))))) : (((arr_24 [i_7] [i_5] [i_6 + 3]) ? (arr_23 [i_2] [i_2] [i_2] [i_6 + 3]) : (arr_24 [i_2] [i_5] [i_6])))));
                    }
                }
            }
        }
        arr_25 [i_2] = var_6;
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_17 *= (min((((var_1 || ((((arr_27 [i_8]) / var_3)))))), (min((max(var_3, (arr_27 [i_8]))), (max(96, 3483))))));
        arr_29 [i_8] [i_8] = 0;
        arr_30 [i_8] [i_8] |= (!var_5);
    }
    var_18 ^= (((min(var_9, 15016379880050726710)) | ((((~var_4) ? ((var_10 ? var_5 : var_3)) : var_0)))));
    #pragma endscop
}
