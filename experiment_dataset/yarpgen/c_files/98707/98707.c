/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((var_14 ? -7 : ((((arr_2 [i_0]) ? var_3 : 1)))));
        var_16 &= ((-518210438 <= (arr_3 [i_0])));
        var_17 = (!12675054719630770582);
        var_18 = (min(var_18, (65472 % -36)));
        var_19 = (min(var_19, var_7));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_20 = (arr_7 [i_2 + 1] [i_2] [i_2 - 2]);
            arr_9 [i_2] = var_3;
        }
        for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
        {
            var_21 = ((+((-1403338153983253058 ? (min((arr_11 [i_3 + 1]), 18446744073709551615)) : var_1))));
            var_22 = (min(var_22, (((!(~12675054719630770576))))));
        }
        var_23 = 17043405919726298554;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_24 = 91;
        var_25 |= (((arr_12 [i_4 + 1] [i_4 + 1]) < -30140139));
        var_26 = (max(var_26, var_5));
    }
    var_27 = ((((1216951467 ? ((var_12 ? 4202116677 : var_14)) : (var_9 & 3730820958)))) / (((max(244, 12675054719630770576)) | var_13)));
    #pragma endscop
}
