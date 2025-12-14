/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 23479;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((~(max(-1967886240, var_14))));
                    arr_11 [i_2] [i_1] [i_0] |= ((((8 ? 16283118867147523753 : 2113929216)) * var_11));
                }
            }
        }
    }
    var_19 = ((~(~var_16)));
    #pragma endscop
}
