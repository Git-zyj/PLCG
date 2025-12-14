/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((max((~var_10), (4294967282 > var_10))), (min(1, ((20 ? 1 : (-127 - 1))))))))));
    var_17 = (max(var_17, var_10));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 |= var_9;
                    var_19 = (max(var_19, (((3897355349 * (1 >= 255))))));
                }
            }
        }
        arr_7 [i_0] = (((var_1 ? 52696 : 7514707730054046872)));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_10 [i_3] = var_6;
        arr_11 [i_3] = ((!var_5) ? (min((var_14 - var_14), ((18446744073709551575 ? var_14 : var_14)))) : (max(137876400, (min(196, 18446744073709551602)))));
        var_20 = (min(var_20, 125));
    }
    #pragma endscop
}
