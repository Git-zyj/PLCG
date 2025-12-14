/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (arr_7 [i_0] [i_0] [4]);
                    arr_10 [i_0] [i_0] [1] [i_0] &= ((((max((arr_2 [i_1 - 1]), (arr_3 [i_2] [i_0])))) != (min((min(var_0, var_13)), var_10))));
                    var_15 = (max(var_15, 255));
                }
            }
        }
    }
    var_16 &= var_8;
    #pragma endscop
}
