/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = (min(((((arr_4 [i_2 - 3] [i_2 - 1] [i_1 - 1]) | 32767))), (((((var_6 ? 59477 : 32765))) ? ((4294967295 ? var_9 : var_1)) : (var_8 & 0)))));
                    arr_7 [i_0] [i_2] [i_2] = (max(2119528509, 1));
                    arr_8 [i_2] [i_1] [i_2] = ((((((var_1 != (arr_2 [i_2] [i_0]))))) != ((((arr_6 [i_2 + 1] [i_1 - 1]) == (arr_2 [i_2 - 3] [i_1 + 1]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [14] = ((~((((arr_11 [i_3]) && (arr_11 [i_3]))))));
        arr_13 [i_3] [7] |= ((var_5 ? (((~(arr_11 [i_3])))) : (max(((4294967295 ? 0 : -1)), -1))));
        var_11 = (min((var_4 != var_9), 31));
    }
    #pragma endscop
}
