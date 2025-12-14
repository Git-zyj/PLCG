/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (32767 <= -2147483645);
                var_14 = ((((((var_9 ? -7049920384923490402 : -7088847899394365548)) + 9223372036854775807)) >> (((max((arr_1 [i_1 - 2] [i_1 - 3]), 7049920384923490402)) - 7049920384923490389))));
                var_15 = ((!((var_1 < (arr_5 [i_1] [i_1])))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
