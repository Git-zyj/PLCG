/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 23;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_18 |= 0;
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0 + 1] [i_0]) ? (~-6956577281962849116) : ((8361269095793689585 << (32761 - 32761)))))) ? 21 : (((!(arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [11] [i_1] |= (((((var_11 >= (arr_3 [i_1] [i_1])))) == (arr_4 [i_1])));
        var_19 = 8361269095793689561;

        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_20 = -714657783;
            var_21 = (((((255 ? 1 : 1))) >= 9223372036854775807));
            var_22 *= ((((arr_8 [i_1]) ? 0 : (arr_9 [i_1] [i_2]))));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_23 += (arr_3 [i_3 - 1] [i_3 - 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    {
                        var_24 = 10218225479004288180;
                        var_25 += ((-286325454 ? (((arr_10 [12]) ? 2055814696 : 0)) : (!8)));
                        arr_17 [i_1] [i_3] [i_1] [i_5 - 4] = (!(((16382 >> (var_9 - 2590023192190868450)))));
                        var_26 = 1827312922343363187;
                        arr_18 [i_1] [i_3] [i_4] [i_5] [i_3] = (((arr_16 [i_1] [i_4] [9] [i_4] [i_1] [7]) ? 32767 : -64));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_27 = ((-(((min(1827312922343363187, 82)) | ((max((arr_9 [4] [i_6]), var_1)))))));
        var_28 = (-(((arr_4 [i_6]) ? 6158720633344256740 : (0 != 2144613273))));
        arr_22 [i_6] [i_6] = ((-243690671 ? (541165879296 - -95) : ((max((((arr_12 [i_6] [i_6] [i_6]) ? -8507795172301274503 : 0)), -var_8)))));
        arr_23 [i_6] = (~(min((max((arr_20 [i_6] [i_6]), (arr_8 [i_6]))), ((min(8361269095793689562, var_2))))));
        var_29 = (min(-17774, (((var_16 & var_11) ^ (((arr_9 [i_6] [i_6]) | var_8))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = var_11;
        arr_28 [i_7] = ((((((((arr_24 [i_7]) | 8459404910888898289)) >= 18130))) % (max((((arr_25 [i_7] [i_7]) ? 247 : 2046)), (49 ^ 0)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                var_30 = 224;
                var_31 = (min((((((var_8 ? 5 : (arr_29 [i_8] [i_9]))) + 4465))), ((((((arr_33 [i_8]) ? -1 : 64240))) ? 114 : -6819943685055342912))));
            }
        }
    }
    var_32 = var_15;
    #pragma endscop
}
