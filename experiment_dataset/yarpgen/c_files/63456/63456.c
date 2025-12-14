/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_8, (((1 & 0) || ((max(1, -6902207479576742733))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 -= (min((max((min(7898065801343506036, 1)), var_15)), 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (min((((max(var_8, var_15)) % ((var_14 ? var_11 : 1)))), var_14));
                    arr_7 [i_0] [i_1] = -var_2;
                    var_21 *= (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
