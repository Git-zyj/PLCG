/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min((var_8 * var_6), ((var_6 ? 1220012450 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 ^= (5 & (arr_3 [i_1 - 2] [i_1 - 1]));
                    var_12 = (min(var_12, 127));
                    var_13 = var_2;
                    var_14 = (min(var_14, (-4204 || -109)));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] = var_1;
                                var_15 = (min(var_15, (((((((!(((var_9 ? var_1 : var_0))))))) & -4204)))));
                                arr_17 [i_3] [14] [13] [i_5 + 3] = (min((arr_6 [i_4] [i_5 + 3]), (((!(arr_11 [i_0] [i_3] [i_0]))))));
                                var_16 = ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_17 = (min((((-(arr_6 [i_1 + 1] [i_5 + 3])))), ((4294967295 << (((arr_6 [i_1 - 1] [i_5 - 1]) - 26411))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_7 ? (((1109727598 ? ((var_2 ? var_8 : var_6)) : var_8))) : (max((min(2580199019, 32767)), var_6))));
    #pragma endscop
}
