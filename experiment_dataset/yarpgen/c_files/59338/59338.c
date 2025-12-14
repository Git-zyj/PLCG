/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 & ((((((max(18, 229))) <= (var_7 % var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((arr_2 [i_0] [i_1] [i_1]) + ((0 ? 4294967284 : (arr_2 [i_0] [i_0] [i_1]))))) - 204));
                var_11 = (min((min((max((arr_4 [i_1] [i_0]), (arr_1 [i_0]))), var_2)), var_9));
                arr_7 [i_0] [i_0] [i_1] = (((-(max(var_7, -7641642909175546553)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_12 = (min(var_12, ((((max((((var_5 ? var_5 : (arr_10 [i_2])))), (arr_9 [1] [i_2]))) + (!18446744073709551600))))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_2] [i_2] [i_2] = (arr_10 [i_2]);

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_13 = var_0;
                arr_20 [i_2] [i_2] [i_2] [i_2] = ((!((min(15, 36552)))));
                arr_21 [i_2] [i_2] [i_2] = (max((arr_13 [i_2]), var_7));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_14 += var_4;
                arr_26 [10] [i_2] [i_2] = (((max((!var_1), -var_4)) % 1));
            }
            var_15 += ((((max(-6280155932693558122, var_5))) ? (max(((var_1 ? -6280155932693558125 : var_0)), (((var_7 ? 36552 : var_8))))) : (~4294967284)));
        }
        var_16 -= (min((~4294967287), (max(4294701825, 74885651307722556))));
        arr_27 [i_2] [i_2] = var_8;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_30 [i_6] = (min((((!var_2) ? var_7 : (max(var_9, 17762363072285840640)))), (((18446744073709551615 ? (max(-7641642909175546567, 1)) : ((min(4294967285, 65525))))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_17 = ((!(((201 << (((min(65514, 9907850070316698321)) - 65497)))))));
                    arr_36 [i_6] [17] [i_8] = (min((~var_0), var_3));
                    arr_37 [i_8] [i_8] [i_8] = ((~(((((var_0 ? var_2 : 1))) ? -2046539927 : (max(33975, 4294967260))))));
                    arr_38 [i_8] = (max(((min(20481, (arr_35 [i_8 + 2] [i_8] [i_8 + 2] [i_8])))), (((arr_31 [i_8 + 2] [i_8] [6]) ? (arr_34 [i_8 + 2] [i_8 + 1] [4]) : 68))));
                }
            }
        }
    }
    #pragma endscop
}
