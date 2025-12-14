/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((var_10 > var_10) ? var_5 : var_9))), (~6402994095802897795)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = ((max(var_6, (6402994095802897795 == 1))));
        arr_2 [i_0] [i_0] = max((((min(var_2, (arr_1 [i_0] [i_0]))) + var_7)), (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (min(var_14, (((!((max((arr_1 [i_1] [i_1]), var_9))))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] |= ((((-38 ? 29734 : 13845419918379069641)) & (((0 << (var_9 + 250929601))))));
            var_15 = (!var_5);
            var_16 ^= (min(((((arr_1 [i_1] [i_1]) | 24))), (arr_1 [i_2] [i_1])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = (~var_11);
                            arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] [i_4] = (min(((~(arr_6 [i_1] [i_2] [i_2]))), (((arr_6 [i_2] [i_3] [i_4]) ? (arr_6 [i_2] [16] [i_5]) : (arr_6 [i_1] [i_2] [i_3])))));
                            var_18 = (max(var_18, (~var_4)));
                            arr_17 [i_4] [i_2] [i_2] [i_3] [6] [i_5] = arr_0 [i_4];
                        }
                    }
                }
            }
        }
        var_19 = (var_6 + var_7);
        arr_18 [i_1] = (((((var_3 ? ((12043749977906653821 >> (var_8 - 15545))) : 45))) && ((min((0 <= 852870323), 8724559757610170054)))));
        arr_19 [i_1] = ((var_10 ^ 46) && (((arr_13 [i_1] [i_1] [16]) > (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    var_20 = (((-1 < var_3) & var_0));
    #pragma endscop
}
