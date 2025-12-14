/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = (max(var_21, (var_10 && var_11)));
    var_22 = max((((var_0 > var_9) | (~var_19))), (((((var_18 ? 19481 : var_5)) << (((max(953656709, 953656713)) - 953656703))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 = (max((arr_7 [i_0]), (((arr_7 [i_0]) * 26873))));
                    var_24 = var_1;
                    var_25 = ((((max((arr_1 [i_0 + 1]), (3341310591 < 15)))) && ((((arr_0 [i_0 + 1] [i_0]) ? (!var_5) : -1467085267)))));
                    arr_8 [i_0] [1] [i_2] [i_0] |= (arr_6 [12] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    var_26 = ((~(var_17 >= -15)));
    #pragma endscop
}
