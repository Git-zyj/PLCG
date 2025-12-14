/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = -1;
                    arr_8 [i_1] [i_2] = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_6 [i_0] [i_1] [i_1] [i_2]) ? var_7 : -8882588347532223472))) : (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    var_17 -= -1929939603;
                }
            }
        }
    }
    var_18 = ((-((1 ? (((var_7 ? 1929939602 : var_7))) : var_11))));

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_19 = -1;
        var_20 -= (((((arr_2 [i_3 + 1]) ? var_4 : (arr_0 [i_3 + 1] [i_3 + 1]))) * (~4294967295)));
    }
    var_21 = (min(var_11, var_14));
    #pragma endscop
}
