/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((((arr_3 [i_0] [i_1]) ? 5576457884872011532 : -var_13)) < (!-117));
                arr_5 [i_1] [i_1] [i_1] = (((((max(((min(var_11, (arr_3 [i_0] [i_1])))), var_5)) + 9223372036854775807)) << (((-1394 + 1407) - 13))));
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
