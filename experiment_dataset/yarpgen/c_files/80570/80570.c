/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = arr_6 [i_2] [i_1] [i_0];
                    arr_8 [i_0] [i_0] &= ((142146671 ? (((3660732936513730186 | 3660732936513730186) ? (arr_5 [i_1]) : (((arr_3 [i_0]) ? 802890493 : (arr_1 [1] [i_2]))))) : ((((min(-142146659, (arr_5 [i_1])))) ? (arr_2 [4] [i_2] [i_2 + 1]) : (min((arr_0 [i_0] [i_1]), (arr_6 [i_0] [i_1] [13])))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = arr_2 [i_3] [i_1] [i_0];
                    var_12 = (((arr_6 [i_0] [i_1] [i_3]) ? (((arr_2 [i_0 + 1] [i_1] [7]) ? (arr_5 [i_0 - 1]) : (arr_2 [i_0] [i_1] [i_3]))) : -3660732936513730189));
                    var_13 *= 2754227070;
                    var_14 = var_3;
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_15 = (((((((!(arr_4 [0] [i_4])))))) ? (((var_2 >= 611149330) ? (arr_13 [i_0] [i_1] [i_1] [i_4]) : (710239328 > 2754152797900984128))) : var_0));
                    var_16 *= (((((arr_0 [i_0 + 1] [i_1]) | (max(var_0, var_4)))) << (((((!-1001464242693420163) ? var_3 : (max(-142146667, 2588451309)))) - 4152820625))));
                    arr_15 [i_4] [i_1] [i_4] [i_4] = ((-9223372036854775807 - 1) ? 2588451304 : 0);
                }
                var_17 = var_5;
                arr_16 [i_0] &= ((var_8 || (arr_14 [i_0] [i_0] [i_0] [i_1])));
                var_18 = 964115515;
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = ((var_9 ? ((((-9223372036854775798 > (((arr_17 [i_5]) ? (arr_18 [i_5]) : var_0)))))) : (((((1593175910 ? (arr_18 [6]) : -5242902913124250457))) ? (!var_4) : ((var_11 ? var_11 : (arr_17 [i_5])))))));
        arr_20 [i_5] [i_5] = (~1593175910);
        arr_21 [i_5] = (arr_18 [i_5]);
        var_19 = (arr_18 [i_5]);
    }
    #pragma endscop
}
