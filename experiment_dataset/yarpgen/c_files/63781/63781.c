/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((~(((arr_2 [i_0] [11]) & -70))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [18] [i_2] [i_3] [2] [i_3] = (min(((max(var_3, 1))), ((var_13 | (arr_2 [i_1 + 1] [i_1 - 1])))));
                        arr_15 [3] [3] [i_2] = ((1358592826221987517 || (arr_5 [i_0] [i_0] [i_0])));
                        var_21 = var_14;
                    }
                }
            }
        }
        arr_16 [i_0] = ((!(arr_6 [i_0] [i_0])));
    }
    var_22 = (min(((7 ? (~9378111122190000190) : ((var_18 ? -70 : var_15)))), ((((!255) ? ((((-2147483647 - 1) / var_17))) : (var_18 | var_4))))));
    #pragma endscop
}
