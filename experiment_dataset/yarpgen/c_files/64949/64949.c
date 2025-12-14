/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_0;
        var_13 &= 22169;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, -5479465440221469945));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = (((-5479465440221469945 | 892417396025945283) ? 29979 : ((-5479465440221469945 ? 2109688807 : (arr_10 [i_1] [i_2 + 1] [i_3])))));
                        var_16 = (min(var_16, (arr_9 [i_2 - 1] [i_2 + 1] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_17 &= 1958673020;
        var_18 = (min(var_18, (!206)));
    }
    var_19 = var_9;
    #pragma endscop
}
