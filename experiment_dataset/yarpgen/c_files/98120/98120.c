/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (((((arr_1 [i_0 + 2]) ? ((-8910010521142804728 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : var_3)) == ((min(var_11, (((1 - (arr_1 [i_0])))))))));
        var_13 = (((((arr_0 [i_0]) && (arr_1 [i_0 - 2]))) ? (((arr_0 [i_0]) ? -46 : var_3)) : 18981));
        var_14 = (arr_1 [i_0 - 1]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_15 = ((~((max((arr_2 [i_2]), var_4)))));
                    var_16 = ((+(((((var_4 ? (arr_4 [i_1] [i_1]) : 11192907363606151724))) ? 2040 : ((min(var_5, var_0)))))));
                }
            }
        }
    }
    var_17 += (min(var_11, var_3));
    var_18 = var_6;
    #pragma endscop
}
