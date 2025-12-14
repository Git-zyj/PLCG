/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = 8642;
                var_11 = (min(((~(!1))), (((((7715963509023179257 ? 8641 : 56894))) ? (((arr_3 [i_0 + 1]) ? 1882124583 : (arr_5 [i_0]))) : (3378766732040170421 <= 31114)))));
                var_12 = ((-((+((var_4 ? (-127 - 1) : (arr_4 [16])))))));
                var_13 ^= max((max(0, (~0))), (~162));
            }
        }
    }
    var_14 = var_7;
    var_15 = (max(var_3, (!64)));
    #pragma endscop
}
