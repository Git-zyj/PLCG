/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(var_0, -237393538308298371)))) * (var_0 * var_6)));
    var_11 = (min(((((max(var_2, var_2))) ? (var_8 | var_1) : var_6)), (~var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = var_2;
                                var_13 = (max(((var_1 ? ((var_7 ? var_0 : var_2)) : (max(var_3, var_3)))), var_0));
                                var_14 = (min(var_14, var_9));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_15 = (max(var_15, (((var_8 ? (var_1 | var_7) : (var_6 != var_9))))));
                        var_16 = (max(var_16, var_6));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_17 = (((max(var_5, (var_0 * var_6))) <= var_4));
                            var_18 = ((3091 << (((-3092 + 3114) - 22))));
                            var_19 = (~((-3098 ? 39126 : 77)));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_6] = (var_4 > var_3);
                        var_20 = (((((((var_8 ? var_3 : var_0)) & (var_9 | var_9)))) ? (var_7 - var_4) : (((var_2 ^ var_4) | (max(var_5, var_8))))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_21 ^= ((var_4 - (!var_8)));
                        arr_25 [i_0] [i_1] [i_2] [i_1] = ((17683 ? -3 : (-127 - 1)));
                        var_22 = ((0 / (max((max(1, 0)), 116))));
                    }
                    var_23 &= var_7;
                }
            }
        }
    }
    var_24 = (min(var_24, var_3));
    #pragma endscop
}
