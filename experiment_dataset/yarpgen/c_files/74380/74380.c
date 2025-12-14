/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max(((min(-32748, var_0))), (((arr_4 [i_0] [i_0]) ? var_2 : -32748))))) ? ((min(var_4, (arr_1 [i_0])))) : (((!(~var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, -138));
                            var_20 = (max(var_20, (((~(min(19, (min((arr_1 [i_0]), var_4)))))))));
                            var_21 -= (min((max((arr_3 [i_0] [19]), 66571993088)), 159));
                            var_22 &= (max((((222 ? (arr_0 [i_0] [i_1]) : var_8))), (min(var_18, ((~(arr_7 [i_0] [i_1] [i_2])))))));
                        }
                    }
                }
                var_23 = (min(var_23, (((26 ? (min((18744 && -11553), (((arr_0 [i_0] [i_0]) ? (arr_4 [i_0] [13]) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                {
                    var_24 = var_13;
                    var_25 = (((((max(-2445595905400366925, 11552)) == var_13)) ? var_0 : (((((2701597698376888666 ? 169911191576411096 : (arr_11 [i_5])))) ? (arr_16 [i_6] [i_6 + 3] [i_6 - 4] [i_6]) : ((7903494983073012001 ? var_14 : (arr_16 [i_4] [i_4] [i_5] [i_6 + 1])))))));
                    arr_18 [i_4] [5] [i_6] = (((-11578 & -1450215793) ? (arr_7 [i_6 + 4] [i_6] [i_6 + 3]) : (arr_9 [20] [i_6 + 4] [20] [i_6] [i_6 - 2])));
                    var_26 ^= (max(((var_12 & (arr_9 [i_6 + 3] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 3]))), var_0));
                }
            }
        }
    }
    var_27 = var_13;
    #pragma endscop
}
