/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 *= (min(63, ((62 ? (arr_0 [i_0] [3]) : 4294967295))));
        var_12 = (min(var_12, ((((~39) ? (arr_1 [i_0]) : ((var_9 ? ((min(122, -63))) : ((min((arr_2 [i_0]), var_7))))))))));
        arr_3 [i_0] [i_0] |= ((min((~-16330), -16321)));
    }
    var_13 = ((var_7 ? var_3 : var_9));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_14 = ((var_7 ? (min(((min(131, (arr_6 [i_1] [i_1])))), (~16))) : var_6));
                var_15 = 122;
                var_16 = var_4;
            }
        }
    }
    #pragma endscop
}
