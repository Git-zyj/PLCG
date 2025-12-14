/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((1 != 4294967295) / (4294967275 / 2693539062))) * (!30));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((((((~215) + 2147483647)) >> (!0)))) < (((30 ^ 108) ^ 5))));
                var_22 -= 1;
                var_23 = ((((682554346 | 0) * 0)) << ((((207 > 4294967262) > (!0)))));
                arr_7 [i_0] [i_1] [i_1] = 143;
                var_24 = (5 + 3573122281);
            }
        }
    }
    #pragma endscop
}
