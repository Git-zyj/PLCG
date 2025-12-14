/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((arr_1 [i_1 - 2]) ? 20 : (arr_5 [i_1 + 1])))) ? (((max(20, 20)))) : (max((arr_3 [i_1] [i_1 - 2] [i_1 - 2]), -7876109392116393296))));
                var_17 *= 32768;
            }
        }
    }
    var_18 *= (max(var_7, ((var_0 ? (min(var_12, 0)) : (!2)))));
    var_19 = ((var_8 ? ((max(((-21 ? 4294967295 : var_11)), 32767))) : (((((-32767 ? 0 : var_12))) ? 4294967295 : (max(1, var_15))))));
    #pragma endscop
}
