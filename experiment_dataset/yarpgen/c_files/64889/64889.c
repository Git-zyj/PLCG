/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_10 ^= ((~(((!var_4) ? (((arr_3 [2] [2]) ? (arr_3 [i_0] [i_0]) : var_8)) : var_7))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 += ((-(((var_4 - var_5) - ((var_8 - (arr_3 [i_0] [6])))))));
            arr_7 [i_0] [i_1] [i_1] = (-((-5391095411724483060 ? ((96 << (var_6 - 15038314019975000053))) : var_8)));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_12 ^= ((var_2 ^ (~0)));
            var_13 = (max(var_13, (max((var_2 / -679186231953958566), (~2090838829)))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_14 ^= var_0;
            arr_12 [i_0] [i_0] &= ((2123675298496769265 ? (arr_4 [i_0 + 1]) : var_9));
        }
        var_15 |= (((((~(arr_1 [i_0 - 1] [i_0 - 1])))) ? ((((((arr_4 [i_0]) ? var_3 : var_0)) - ((var_3 ? (arr_3 [i_0] [1]) : var_3))))) : 17894724661280350790));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        var_16 = (((arr_9 [i_4 - 3]) >= (!var_0)));
        arr_15 [i_4] = var_6;
        var_17 *= (62 == 828029274);
        arr_16 [1] = (((arr_9 [i_4 - 2]) - (-3373999232550256576 - -12776)));
        arr_17 [i_4 + 1] [i_4 + 1] = (!var_1);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_20 [i_5] = var_8;
        arr_21 [i_5] = (((((((!(arr_19 [i_5] [i_5])))))) ? var_1 : (var_2 <= var_9)));
    }
    var_18 = (-2090838829 / 4635382685369923245);
    var_19 = (((2123675298496769262 + (min(2123675298496769265, 15)))));
    #pragma endscop
}
