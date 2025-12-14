/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((10512 && ((!(!1)))));
    var_13 = ((((10512 ? 62490 : var_1))) + var_10);
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((!(((-15926 ? 13259043331296899283 : 18446744073709551615))))))));
                arr_5 [i_1] [i_1] = ((~((564645726 ? 3730321595 : 564645731))));
                var_16 = (min(var_16, (~-4569415571893303534)));
            }
        }
    }
    var_17 = (((-((7137778686228765218 ? 122 : var_8)))));
    #pragma endscop
}
