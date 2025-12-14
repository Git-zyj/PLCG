/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((((((121 ? var_9 : -106))) ? (min(-9223372036854775797, 118)) : (var_6 && -476684931084891514))) == var_5);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (((arr_1 [0]) | ((((max(1, -122)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_2] [17] [i_3 - 1] = var_4;
                                var_12 *= (min(var_5, (((-3 ? 1 : var_1)))));
                                arr_13 [1] [i_3] [i_2 + 1] [i_3] [i_0] = (max((~var_1), var_1));
                            }
                        }
                    }
                    arr_14 [i_1] = (((((((max(-117, var_6))) ? var_5 : (arr_9 [i_2 - 1] [i_1] [18] [i_1] [i_2 - 1])))) ? (arr_4 [i_0] [i_2 + 1] [i_2 - 1]) : (((arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_0] [i_0]) >> (((arr_10 [i_2 + 1] [i_2] [12] [i_2 + 1] [1] [i_2] [i_1]) - 3796077810066330574))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (arr_16 [i_5 - 1] [i_5 + 1]);
        arr_18 [12] &= (max(((((arr_15 [i_5 - 1] [i_5 + 1]) || (arr_15 [i_5 + 1] [i_5 - 1])))), (arr_15 [i_5 - 1] [i_5 - 1])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_13 += (arr_20 [i_7] [i_5 - 1]);
                        var_14 = (max(var_14, (((((var_8 && (-2177670655199520941 && 252))) ? (((-124 == (((arr_22 [i_5 + 1]) + 118))))) : 54531)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
