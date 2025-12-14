/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!((min(var_15, -3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 ^= ((-((((arr_5 [i_2] [i_1 - 3] [i_0]) >= (min((arr_6 [i_0] [i_0] [i_2] [i_0]), 2)))))));
                    arr_8 [i_2] [i_1] [i_1 + 1] [i_2] = (min((((max(2, (arr_1 [i_1]))))), -27));
                    var_19 *= (((((min(-3398208928518957100, 26654))) ? 845 : 833)));
                }
            }
        }
    }
    #pragma endscop
}
