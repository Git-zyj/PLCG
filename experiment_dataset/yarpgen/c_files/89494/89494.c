/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~(0 + 497155071)))) ? ((((min(var_1, var_1))) % ((var_9 ? var_1 : 223)))) : (!var_10)));
    var_13 = (max(var_10, 3797812225));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 += (max(((max((arr_0 [i_0 + 2] [i_0 + 4]), (arr_0 [i_0 + 2] [i_0 + 1])))), (max(-var_7, (max(7597, -1715188890))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] [i_1] [i_2] [i_3] [i_4] |= (((arr_4 [i_2] [i_2 - 1] [i_4 - 1] [i_4 + 1]) > 698045925657664716));
                            arr_12 [i_0 + 4] [i_1] [i_4] [i_1] [i_4 - 1] = -0;
                        }
                    }
                }
            }
            arr_13 [i_0] = var_2;
            var_15 = var_1;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_16 = (57344 * var_0);
            var_17 *= (((((57344 << (((arr_7 [6] [i_0 + 1] [5] [i_0 + 1] [i_0 - 1]) + 115))))) ? ((-(arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 4]))) : ((max((arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 1]))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_18 ^= (var_9 * var_10);
                    arr_23 [i_0] [i_6] [i_7] = (((((-(arr_15 [i_0 + 4])))) ? (((32925 > ((57938 ? 0 : var_8))))) : var_7));
                }
            }
        }
    }
    #pragma endscop
}
