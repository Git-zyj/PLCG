/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [9] [i_1] [i_3] [i_1] = ((~(min(-941366520, -2111477684))));
                            arr_14 [i_0] [i_3] = 0;
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = ((!(127 ^ var_11)));
            }
        }
    }
    var_14 = ((min(var_8, var_2)));
    #pragma endscop
}
