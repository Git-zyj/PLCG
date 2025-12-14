/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_5, (32461 < -1064574803067686405)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 &= ((var_13 || ((max((arr_1 [i_0 + 1] [i_0 + 1]), var_2)))));
                var_18 = max(var_2, 9604966520577228636);
            }
        }
    }
    var_19 = (max((((max(var_10, var_14)))), (max(var_13, var_15))));
    var_20 = (-var_10 + var_11);
    #pragma endscop
}
