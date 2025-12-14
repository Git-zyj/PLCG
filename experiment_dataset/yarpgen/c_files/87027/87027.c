/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (1216823110 + 7378)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 &= -var_5;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((~(min((arr_0 [i_0]), 1757576967)))) - (!3)));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (~var_1);
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] = ((!(arr_11 [i_0])));
                        var_21 = (((-9 && 0) ? (((((1 - (arr_10 [i_0] [i_3] [i_0])))) ? 329527763 : (min(var_6, (arr_11 [i_4]))))) : (((min(80, var_12))))));
                        var_22 = (max(var_22, (((~(((~var_6) ? ((((arr_16 [i_1] [i_3] [i_4]) ? 44929 : -3227))) : 16915479418984854314)))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = 20606;
                        var_23 ^= (((((((20606 ? 9169416868485945903 : var_18))) ? ((25029 ? 1019057340603610091 : -6308)) : (~1625359675)))) ? var_11 : (((32672 + var_3) ? (arr_10 [i_1] [i_0] [i_1]) : (arr_10 [i_1] [i_1] [i_1]))));
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((((max(1, (arr_13 [i_3] [i_1] [i_0])))) ? (((~var_7) - -17550)) : 1));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (max(var_24, ((((((!(1 && 4137))))) & (61399 | 3580423159)))));
                    arr_24 [i_0] = var_11;
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_30 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((((~(arr_28 [i_6] [i_6] [2] [i_6] [i_6] [i_6])))) ? (((var_13 + 2147483647) << (var_16 - 1))) : (arr_3 [i_0] [i_1] [i_1]))));
                        arr_31 [i_0] [i_1] |= (arr_14 [i_0] [i_0] [11]);
                        var_25 = var_17;
                    }
                    arr_32 [i_6] [i_0] [i_1] = 17555;
                }
            }
        }
    }
    #pragma endscop
}
