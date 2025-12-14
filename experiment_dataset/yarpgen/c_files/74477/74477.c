/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 *= (max((var_6 - var_4), (min(-4308032760580793442, -2216431882706795578))));
        var_18 -= max(((max(var_1, var_4))), (min((max(var_2, var_1)), var_14)));
        arr_4 [i_0] [i_0] &= var_13;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (max(var_19, (((min(var_6, var_13))))));
        var_20 -= var_0;
    }
    var_21 -= ((var_10 ? (((~(min(-1, var_5))))) : (max(var_11, (max(4308032760580793442, var_7))))));
    var_22 *= (var_5 & var_11);
    var_23 = (min(var_23, (((var_14 ? var_5 : var_15)))));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_24 = -4308032760580793442;
            var_25 &= (1626371361 ? var_3 : 4308032760580793440);
            var_26 = (min(var_26, ((((var_16 ? var_0 : var_0))))));
            var_27 = (min(var_27, var_12));
        }
        var_28 = (min(var_28, (min(var_14, ((((var_14 ? var_7 : -4308032760580793450)) % (min(var_5, 4308032760580793440))))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_29 *= ((30 != ((51 ? var_14 : var_5))));
        var_30 = (max(var_30, ((min((4308032760580793442 - var_7), var_1)))));
    }
    #pragma endscop
}
