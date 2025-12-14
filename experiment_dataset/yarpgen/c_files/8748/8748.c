/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_14 ? 43 : -var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = 82;
                arr_7 [i_0] [i_1 + 2] = (~103);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = (((-43 + 2147483647) << (((arr_9 [i_2]) - 53340))));
        var_19 = ((~(arr_8 [i_2] [i_2])));
        arr_11 [i_2] = (((((57592 ? 205 : var_7))) ? var_17 : 82));
        var_20 = ((43 ? 12 : 64252));
        var_21 = 198;
    }
    #pragma endscop
}
