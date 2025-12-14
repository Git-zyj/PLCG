/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((var_2 ? var_6 : var_0)) <= (var_16 ^ var_5)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 += ((-29854 - ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
        arr_3 [4] = ((!((min((max(0, 38014)), var_11)))));
    }
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_1] [i_2] = ((max(var_3, (-9223372036854775807 - 1))));
                var_20 += ((!((max((((-24421 ? 25829 : var_0))), (((arr_0 [i_2]) ? var_14 : 6974127344672178326)))))));
            }
        }
    }
    #pragma endscop
}
