/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((var_1 ? (((min((arr_2 [i_1 - 2]), var_5)))) : (min(var_15, (arr_1 [i_1 + 2])))));
                    arr_8 [i_2] [i_1] [6] [i_2] = (max(var_8, ((var_6 ? (arr_0 [i_2]) : (arr_3 [i_0])))));
                }
            }
        }
    }
    var_18 = var_14;
    #pragma endscop
}
