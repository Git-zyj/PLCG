/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((!((((arr_5 [i_0] [i_1 - 2]) >> (3423809447 - 3423809433))))));
                arr_9 [i_1] [i_1] = min((arr_0 [i_1 + 2]), (((99400226 ? 595622447 : (3227967737 == 1842622149)))));
            }
        }
    }
    var_19 = (var_10 * (((((min(63, 4195567061)) <= (max(var_4, 2029021878)))))));
    var_20 *= (~var_15);
    var_21 = (~4195567061);
    #pragma endscop
}
