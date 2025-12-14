/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, (((((((((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))) ? (((min((arr_1 [i_0] [7]), 41881)))) : (0 / 5964990162629713938))) == (min((-1002016487 & 12481753911079837671), (~var_8))))))));
        var_15 *= (arr_0 [i_0] [4]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 ^= var_7;
            var_17 ^= (-(arr_1 [6] [i_0]));
            var_18 = (min(var_18, (((~var_3) - 5964990162629713945))));
        }
    }
    var_19 -= (var_3 & 1998785486);
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((~(((arr_11 [i_2] [i_2 + 1] [i_2]) ? (arr_8 [i_2]) : var_11))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_21 -= ((((min((arr_16 [i_2 + 2] [i_2] [i_6] [i_2 - 2] [i_2]), ((-93 ? 12481753911079837670 : var_2))))) ? (((-1 < var_5) ? -16384 : -1775057929)) : 17272));
                            arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = ((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) * (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 2]) / (arr_9 [i_2 + 1] [i_3]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, ((((((arr_16 [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 2] [i_2 - 1]) + 2147483647)) >> (((arr_16 [i_2 + 1] [i_2 - 1] [i_7] [i_2 + 1] [i_2 - 1]) + 1581548668)))))));
                        var_23 = ((-((5964990162629713938 ? (arr_23 [i_2] [i_4]) : var_3))));
                    }
                    var_24 = (max(var_24, (((1775057928 ? (min((max(1256443704, var_2)), (arr_16 [i_4] [i_3] [i_4] [i_2] [i_2]))) : (((max((arr_9 [i_2] [i_2]), 29936)) | (arr_14 [i_4]))))))));
                }
            }
        }
    }
    var_25 = (min(var_25, (((16383 ? (~var_10) : var_13)))));

    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_26 = 32764;
        arr_27 [14] [i_8] = var_9;
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        var_27 = (min(var_27, (((~(arr_11 [i_9] [i_9 + 2] [i_9]))))));
        arr_30 [i_9] [i_9] = ((((((-28933 + 2147483647) << (((-1686134438 + 1686134460) - 22))))) ? (var_1 & var_9) : (arr_10 [i_9] [i_9] [i_9])));
    }
    #pragma endscop
}
