/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (((((min(var_7, var_15))) == -var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 &= ((((arr_0 [i_0 - 1]) ? -1 : (38 - var_7))));
                arr_4 [1] [i_0] [i_0] = 3;
                var_19 += ((((max(0, (!var_12)))) ? ((~(arr_1 [10] [10]))) : (~var_10)));
                arr_5 [17] [i_0 - 1] [i_0] = (var_1 ? (((((arr_3 [i_0] [i_0]) > var_13)))) : var_0);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_20 ^= var_10;
        arr_9 [i_2] [i_2] = (((arr_8 [6] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [12])));
        var_21 = var_2;
    }
    #pragma endscop
}
