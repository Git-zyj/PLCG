/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (2 ^ 12617020572504281237);
    var_21 = (!-7122);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 62605856;
                var_22 = 2337652113;
                arr_5 [i_0] [i_1] = (max(5924660, (-9223372036854775807 - 1)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_23 *= -118;
        var_24 |= (arr_7 [i_2]);
        arr_8 [i_2] [i_2] = ((-((5924686 ? 1050785466 : 1))));
        arr_9 [i_2] = 1;
    }
    #pragma endscop
}
