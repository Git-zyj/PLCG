/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-((var_9 << (var_9 - 14667)))))) ? (var_4 + var_5) : (var_10 > 1)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = -0;
                arr_5 [i_0] [i_0] [i_0 - 2] = ((((arr_1 [22]) & ((var_12 ? (arr_3 [i_0]) : (arr_1 [i_1]))))));
                arr_6 [i_0] [i_1] [i_1] = 3613717247575689905;
            }
        }
    }
    var_16 = (~var_8);
    var_17 = var_4;
    #pragma endscop
}
