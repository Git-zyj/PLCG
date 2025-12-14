/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_11 &= max((((max(var_7, 2305280059260272640)) ^ ((max((arr_2 [i_0]), var_1))))), (!1));
                var_12 ^= (((arr_5 [i_1 + 1] [i_1 - 3] [i_1]) ? (min(var_1, (arr_5 [i_1 - 3] [i_1 - 4] [i_1]))) : (min(var_8, (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                arr_6 [i_0] [i_1] [i_1] |= (min((arr_1 [i_0]), (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (arr_3 [i_1 - 1]);
                            arr_12 [i_2] [i_2] |= (((((!-3437504123141111379) || 1)) ? (((min(var_6, (arr_9 [i_1 + 1] [i_3 + 2]))))) : (((arr_5 [i_3 + 2] [i_2] [i_0]) ? var_3 : (((arr_4 [i_2]) % (arr_3 [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    var_14 |= (var_4 ? var_9 : var_3);

    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_15 -= ((~(((arr_8 [i_4 + 1] [i_4] [i_4 - 1]) ? (arr_14 [i_4 - 1]) : (arr_9 [i_4] [i_4 + 2])))));
        var_16 -= var_10;
    }
    var_17 = ((((((max(var_9, var_7)) - (var_3 + var_3)))) ? var_1 : var_3));
    var_18 -= var_6;
    #pragma endscop
}
