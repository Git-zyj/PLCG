/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(((!7295770200650551544) ? (var_1 || var_2) : 450328048)))))));
        var_16 = (min((min(var_7, 103)), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = (min(((min(var_12, (arr_12 [i_3 - 2] [i_1] [i_3 - 4] [i_3 + 1] [i_1] [i_3 - 2])))), (min((arr_11 [i_4] [i_4] [i_4] [i_3 - 4] [i_1] [i_1]), (arr_12 [i_3 - 1] [i_1] [i_3 - 2] [i_3 - 3] [i_1] [i_3 - 3])))));
                            var_18 -= ((-((-7295770200650551544 + (arr_2 [i_2])))));
                            var_19 = (min((arr_6 [i_2] [i_2]), ((67 ? 1748579268 : 1085))));
                            var_20 = ((((((((-2496 ? (arr_7 [i_0] [i_0] [i_3]) : -1867958211)) >= ((7295770200650551532 ? -1 : 1078)))))) * (min(-12, (~-7295770200650551544)))));
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_21 = ((-(arr_14 [i_0] [i_0] [i_1] [i_1])));
                arr_15 [i_0] [i_0] [i_0] |= var_12;
                var_22 = (max(var_22, var_4));
            }
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_23 *= 1479383728;
            var_24 = (min(-32758, (((((32097 ? var_2 : var_11))) ? var_3 : ((min(-1086, 116)))))));
            var_25 = (((!(-7295770200650551544 && var_0))) ? (((((min(var_8, 32766))) < ((-7295770200650551546 ? var_4 : -100))))) : (!var_12));
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_26 = (((~var_6) ^ 1804694584));
            arr_20 [i_0] [i_0] [i_0] |= 84;
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_25 [i_8] [i_0] = ((var_8 ? 255 : ((var_12 ? (arr_22 [i_0] [i_0] [i_0]) : -7295770200650551521))));
            var_27 = (min(65527, 9223372036854775807));
            var_28 = var_10;
        }
        var_29 -= -586366857597826511;
        var_30 = (min(var_30, ((min(((var_5 ? var_11 : -2)), ((~(arr_16 [i_0]))))))));
    }
    var_31 = (min(var_31, ((min(var_10, (((715634412 & 237) ? (var_6 >> var_14) : ((min(var_11, var_7))))))))));
    var_32 = ((((min(255, var_7))) ? (min((~var_1), -54)) : 243));
    var_33 = (((((~var_11) != ((var_6 ? 48707 : var_7))))) << ((((~((max(var_7, var_10))))) + 27274)));
    #pragma endscop
}
