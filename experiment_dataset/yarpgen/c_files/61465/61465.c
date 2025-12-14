/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((((0 ? var_2 : var_9))), (min(var_15, var_14))))) ? ((var_0 ? ((32719 ? var_5 : 23221)) : (((55735 ? 32721 : 3187739927))))) : var_15));
    var_19 = (!32729);
    var_20 = ((~(max(((65517 - (-32767 - 1))), var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1 - 3] = var_5;
            arr_8 [i_0] [i_0] [i_1] = (~var_16);
        }
        var_21 ^= (1 == var_6);
        var_22 *= (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [4]) : (arr_4 [i_0] [i_0])));
        arr_9 [i_0] [4] = (((arr_1 [i_0] [i_0]) ? var_9 : var_1));
    }
    #pragma endscop
}
