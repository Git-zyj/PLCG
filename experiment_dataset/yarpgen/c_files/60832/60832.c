/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 ^= (((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) + 9223372036854775807)) << (((arr_3 [i_0] [i_1]) - 9666556495146681005))));
                arr_6 [i_1] [i_0] = (((+(((arr_2 [4] [i_0 - 1]) / (arr_5 [i_0] [i_1]))))));
                var_20 = (((~var_2) | (arr_3 [i_0 - 2] [i_0 - 4])));
                arr_7 [i_1] = (min(-1727741526, (((var_12 <= (~var_9))))));
            }
        }
    }
    var_21 = -var_2;
    var_22 *= var_8;
    #pragma endscop
}
