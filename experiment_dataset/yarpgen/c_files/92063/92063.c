/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (((!((min(47, 7)))))) : (~var_1)));
    var_11 = var_4;
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((~(((!(arr_2 [i_0] [i_0]))))))) ? ((244 ? ((113 ? 255 : -1658073221)) : 2147483641)) : ((min(((!(arr_0 [i_0]))), 0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((~(arr_4 [i_1])));
                        arr_14 [i_2] = 4177920;
                        var_14 = (((arr_4 [i_0]) ? 1658073219 : (((!var_8) ^ ((var_2 ? var_2 : var_8))))));
                    }
                }
            }
        }
    }
    var_15 = (~var_5);
    #pragma endscop
}
