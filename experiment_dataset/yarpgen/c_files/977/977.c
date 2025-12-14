/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (arr_8 [i_0] [i_0] [i_0]);
                    var_13 = ((((((~(arr_6 [i_0] [i_0] [i_0] [i_2]))))) ? (!-var_6) : var_0));
                    arr_10 [i_2] = var_4;

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_2] [i_2] = ((6905732910332579062 ? 0 : -1));
                        var_14 = (max(var_14, (((((((~65535) / (arr_1 [i_0] [i_0])))) == -5842065703025796695)))));
                        arr_14 [i_2] = ((0 ? ((((var_7 ? 18446744073709551615 : 11)) - ((((arr_7 [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_5 [i_3])))))) : 18446744073709551615));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_2] [i_0] [i_1 - 1] [i_0] [i_2] [i_0] = (arr_15 [i_0] [i_1]);
                        var_15 = (i_2 % 2 == 0) ? ((((arr_6 [i_2] [i_2] [i_2] [i_2]) - var_4))) : ((((arr_6 [i_2] [i_2] [i_2] [i_2]) + var_4)));
                        var_16 = ((((((2825863408737265420 ? 0 : 16)))) ? (min(((0 ? 3203922533498233501 : 65530)), 65525)) : ((((arr_1 [i_1 + 1] [i_2 + 1]) ? (((var_0 > (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (var_11 == var_10))))));

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_17 = (max(((128 * (((arr_11 [i_0] [i_1] [i_2] [i_4] [i_5]) / 65521)))), (arr_11 [i_5] [i_4] [i_2] [i_1] [i_0])));
                            var_18 = 65535;
                            var_19 = (max((((!(arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_4])))), var_2));
                            var_20 = (max((((arr_2 [i_1 + 2] [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 + 1]))), ((((arr_2 [i_1 - 1] [i_1 + 1]) == 0)))));
                            var_21 = (~2930746464);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 7;i_9 += 1)
                    {
                        {
                            var_22 = ((arr_25 [i_6] [i_6] [i_6]) | (min((((arr_6 [i_6] [i_7] [i_8] [i_6]) ? 25 : var_8)), var_0)));
                            var_23 -= (((arr_5 [i_6]) && (((+(((arr_4 [i_6] [i_6]) ? var_0 : (arr_22 [i_9]))))))));
                            var_24 -= var_9;
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = (((((!(-32767 - 1)))) * 94));
                        }
                    }
                }
                var_25 ^= 65528;
            }
        }
    }
    #pragma endscop
}
