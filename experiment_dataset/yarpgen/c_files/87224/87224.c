/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((-(var_8 & var_10)));
    var_16 = ((-7255521983404075794 ? 12127 : -12127));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_17 *= (arr_1 [i_0]);
                arr_5 [i_0] = (((((((~9895674803894499920) ? ((-12122 ? -12127 : var_5)) : (121 * 58))) + 2147483647)) << (((var_9 + 25104) - 16))));
                var_18 = (min(var_18, (((((-1771150466 ? -12122 : (arr_3 [i_0 + 3]))) & 12118)))));
            }
        }
    }
    var_19 = (~3046);
    #pragma endscop
}
