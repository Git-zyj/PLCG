/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_12 = ((15518544394798792836 + ((-(((arr_2 [i_0]) ? var_4 : (arr_1 [i_0])))))));
            var_13 = (min(var_13, ((-0 / (((arr_0 [i_0 - 4]) ? 65535 : (arr_0 [i_1 + 2])))))));
            arr_6 [i_1 + 2] = ((-(((arr_3 [i_0] [i_0] [i_1]) >> ((((0 ? 24576 : (arr_1 [i_0]))) - 12875499585188190747))))));
            arr_7 [i_0] = ((~((var_8 ^ ((((arr_5 [i_0] [i_1] [i_1 + 1]) > var_1)))))));
            var_14 -= ((~(((((var_3 >> (((arr_4 [i_1]) - 2639395062037029592))))) ? ((1 ? 4503599627370495 : 29783)) : (((var_3 >> (((arr_2 [i_1]) - 16514)))))))));
        }
        var_15 = (min(var_15, (((-(arr_5 [i_0] [i_0] [i_0]))))));
        var_16 += (((arr_1 [i_0 + 1]) * ((((min((arr_2 [i_0]), (arr_5 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (((((-(arr_2 [i_2 - 2])))) != -var_11));
        var_17 = var_11;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_18 = ((arr_15 [i_3 + 1] [i_3 + 1]) > ((((!var_0) ? (-2147483647 - 1) : (((!(arr_13 [i_3] [i_3 - 1]))))))));
        var_19 |= ((~((~(arr_14 [i_3])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            {
                var_20 = (((((57296 >> (var_5 - 1312485137)))) ^ 5935689524817951796));
                arr_22 [i_4] [i_4] [i_4] = ((-(~17448)));
            }
        }
    }
    var_21 = ((-((var_5 ? (~var_11) : (min(var_4, var_11))))));
    var_22 = (((!-4503599627370495) ? (var_7 + var_5) : 57296));
    var_23 = (((7 || var_1) ? (((0 ? ((0 ? var_0 : var_0)) : 1))) : 2147483647));
    #pragma endscop
}
