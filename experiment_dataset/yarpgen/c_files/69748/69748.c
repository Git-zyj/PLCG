/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 |= ((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_3)))));
        var_11 = ((((((~-5382) ? ((~(arr_1 [i_0] [i_0]))) : (~var_9)))) ? (((~-10567) >> ((((min(var_1, -32196))) + 32224)))) : (((~7367) ? (max(-32196, -723540265)) : (~-32210)))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_12 = (~var_3);
                            var_13 -= 32171;
                        }
                        arr_14 [i_3] [i_3] [i_3 - 1] = (((arr_4 [i_3 - 1]) ? 56817 : var_6));
                        var_14 = (!-var_6);
                        var_15 -= var_4;
                    }
                }
            }
            var_16 = (((arr_1 [i_0] [i_1 - 1]) ? var_4 : ((29014 ? var_3 : (arr_8 [i_0])))));
            var_17 = ((((((-25489 ? -342669653 : 1081906518)) + 2147483647)) >> (((((arr_5 [i_0] [i_0] [i_0]) ? var_9 : 28)) + 19390))));
            var_18 ^= (arr_1 [i_1 - 1] [i_1 - 3]);
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_17 [i_0] [i_0] = ((~var_2) ? (arr_8 [i_0]) : var_9);
            arr_18 [i_0] [i_5] = ((((min((arr_16 [i_5] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_5] [i_5])))) ? (((23638 ? var_9 : -32196))) : (min(-5694811102709785538, var_2))));
            var_19 = (((-30849 + 2147483647) << (((max((arr_8 [i_0]), -29010)) - 4294938286))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_20 = ((((((min(3743639629118600155, 12998))) ? -1 : (!29021))) != 1));
                        var_21 = (i_6 % 2 == 0) ? ((min(((28997 << (((arr_20 [i_6] [i_6 + 2] [i_6 + 4] [i_6]) - 51)))), (!var_2)))) : ((min(((28997 << (((((arr_20 [i_6] [i_6 + 2] [i_6 + 4] [i_6]) - 51)) - 95)))), (!var_2))));
                        arr_25 [i_6] [i_6] [i_6] = 82;
                        var_22 -= ((~((~((max(var_9, var_4)))))));
                        arr_26 [i_6] [i_6] [i_5] [i_6] = ((var_2 ? (min((((-179588629 ? 75 : var_3))), (arr_23 [i_6] [i_6] [i_6 + 4] [i_6 + 4] [i_6]))) : var_4));
                    }
                }
            }
        }
        arr_27 [i_0] = ((((max((var_4 && var_1), (min(var_1, -25489))))) ? (((((3252780446805300353 << (((-469090464 + 469090513) - 49))))) ? var_8 : ((max(52537, 12998))))) : ((min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -28993)))));
    }
    var_23 = ((var_7 ? var_6 : var_5));
    var_24 = var_8;
    var_25 = (((~(min(var_7, var_3)))));
    #pragma endscop
}
