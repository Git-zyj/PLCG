/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (16748 / 17557);
                arr_6 [i_1] = (min(1, 2498551735));
                var_12 ^= (1 ? 17559 : -1);
            }
        }
    }
    var_13 ^= ((-26 ? var_5 : -351001628));
    var_14 = ((var_2 ^ ((((!(276986989 ^ 1)))))));
    var_15 |= var_0;
    #pragma endscop
}
