/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~var_8) & -332753479929841409)));
    var_15 ^= (min((((((var_2 >> (var_10 + 4190))) <= 1))), var_11));
    var_16 = (max(var_16, var_4));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, (((1 ? 332753479929841409 : 6403148463605607760)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = (-332753479929841394 != ((((min(var_9, var_10))) ? 332753479929841393 : (((max(32645, var_5)))))));

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_6 [i_2] = (((!127) != ((-(max(1047520258, 22532))))));
                arr_7 [i_2] = var_1;
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_19 *= ((-332753479929841409 ? var_13 : ((var_12 ? var_13 : 42978))));
                var_20 = (((((var_1 ? var_0 : var_10))) ? var_6 : (~0)));
                arr_10 [i_0] [i_1] [i_0] &= -332753479929841409;
            }
            var_21 ^= ((~(var_2 && var_11)));
            var_22 = ((((((((var_3 ? var_4 : 42978))) ? (max(23, (-9223372036854775807 - 1))) : 43004))) ? ((((var_8 + 32658) + (min(var_8, 0))))) : (max(((var_11 ? 0 : -5104092532347109839)), (var_1 - 43004)))));
            arr_11 [i_0] [i_0] = ((var_11 ? -26 : var_7));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_23 = (((((var_1 ? var_1 : -1))) ? (max(var_5, 8064)) : -18328));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_24 = (max(var_24, ((((max((max(var_5, var_3)), 8051)) >= 12)))));
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((var_1 <= ((max(65535, var_12)))));
                        var_25 = ((((min((((1472612683 ? -29313 : var_12))), var_3))) ? (((var_1 + (var_5 + 42982)))) : (min((65535 < 47), (var_8 / var_3)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_26 = (var_2 ^ var_8);
            var_27 = (max(var_27, 9863));
            var_28 = (167 > var_7);
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_24 [i_8] = ((-32 - (1 + 979414392)));
        var_29 *= (((var_12 + 255) ? 9713305588437183 : ((((((-332753479929841388 ? 142 : var_11)) > ((65535 ? 1 : 224))))))));
        var_30 = (min(var_30, ((((~0) ^ ((-263910506 ? 558515363 : var_5)))))));
        arr_25 [i_8] = ((124 ? (((min(15, 201025979)))) : (((var_4 - 20778) - ((var_12 ? 0 : var_7))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                {
                    var_31 = (var_9 ? (((var_10 + 2147483647) << (((var_1 + 67) - 28)))) : var_4);
                    arr_32 [i_8] [i_9] [i_10] = ((((219 >> (3072 - 3060))) != var_9));
                    var_32 ^= ((25 ^ ((var_6 ? (0 && 144) : var_3))));
                    var_33 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
