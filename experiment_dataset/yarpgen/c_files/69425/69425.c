/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_17 -= 77;
                    arr_6 [i_0] [i_0] [i_2] [0] = (((max(1337937373, -1337937374)) >> (((-403 ^ 25298) + 25411))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] = (max((-393157941 & 11967), (max(-15230, 18446744073709551615))));
                    arr_10 [i_0] [i_0] [i_1] [9] = (1337937373 <= 1360283829);
                }
                var_18 ^= (min(2934683466, 549218942976));
                var_19 = 22174;
            }
        }
    }
    #pragma endscop
}
