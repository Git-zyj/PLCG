/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= -15043;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(((~-15043) & (~var_2)))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_17 |= (min((((-15043 ? 3 : -15043))), ((var_9 ? 96 : (min(0, var_14))))));
                    var_18 += (((min(var_1, var_2))));
                    arr_8 [i_0] [i_0] [i_0] = 96;
                }
            }
        }
    }
    #pragma endscop
}
