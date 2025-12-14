/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_11 = -299183980467378995;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, (255 && var_7)));
                            arr_16 [i_0] [i_1 + 2] [i_0] [i_4] [i_0] = ((!((((arr_11 [i_0] [i_1 - 1]) ? var_6 : (arr_7 [i_1] [i_1 + 2] [i_1 + 1]))))));
                            var_13 = (((arr_3 [i_1 - 1] [i_2 - 1]) - (255 + 8796093022207)));
                            arr_17 [i_0] [i_4] [i_2] [i_4] [11] [11] = (max((arr_0 [i_0]), (arr_10 [i_1 + 1] [i_2] [i_2 - 1] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            }
            var_14 = ((+(((~var_9) ? (var_2 & var_3) : (arr_7 [i_0] [i_1 - 1] [i_1 + 2])))));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_15 = (((arr_7 [i_5 + 2] [i_5] [i_5]) ? ((18446735277616529409 ? (((((arr_2 [i_0]) || var_4)))) : ((8050230692844630566 ? var_2 : 1861976133)))) : (((var_0 ? (!var_3) : var_10)))));
            var_16 = (max((max((((12635354251843937518 ? 4179916384966401079 : var_4))), (max(var_0, (arr_11 [i_0] [i_0]))))), ((((var_3 % var_10) && (0 & var_2))))));
        }
        var_17 += 0;

        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                var_18 = (((arr_27 [13] [i_6 - 2] [i_6 - 1] [i_6 - 2]) == 2078252918));
                var_19 = (min(var_19, ((~(var_4 * 6745173738542751231)))));
                var_20 = (min(var_20, 0));
                var_21 = (max(var_21, ((((arr_18 [i_6 - 3] [i_6 + 1]) * (arr_18 [i_6 - 4] [i_6 - 1]))))));
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                var_22 = (arr_21 [i_6 - 3] [i_8 - 1]);
                arr_31 [i_8] |= (((max(var_8, (arr_21 [i_0] [i_6]))) % ((((1 <= (arr_21 [i_6 + 1] [i_8])))))));
                var_23 = ((~(arr_5 [i_6 - 3] [i_6 - 2])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_24 = ((var_2 ? (arr_4 [i_8] [i_8 - 1] [i_8 - 2]) : var_4));
                            var_25 ^= (((-859474008 ? (min(0, 17381816474188059649) : (arr_13 [i_8 - 2] [i_6] [i_8] [i_6 - 3])))));
                            var_26 = (min(var_26, (arr_36 [i_8] [i_9] [i_9] [i_0] [i_8] [i_6] [i_0])));
                        }
                    }
                }
            }
            var_27 = (min(2216714377, (arr_10 [i_6 - 1] [i_6] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 3])));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_28 = 0;
            var_29 ^= (max((arr_8 [i_0] [i_0] [21]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11])));
        }
    }
    var_30 *= var_8;
    #pragma endscop
}
