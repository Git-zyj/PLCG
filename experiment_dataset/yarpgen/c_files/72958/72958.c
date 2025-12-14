/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max(7486326776244860292, ((-(min(var_1, 17287384756557590592))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 -= (1159359317151961024 >= 1);
                arr_6 [18] [i_1] &= var_1;
                var_21 ^= var_10;
            }
        }
    }
    #pragma endscop
}
