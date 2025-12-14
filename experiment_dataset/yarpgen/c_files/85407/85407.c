/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-5117098981912379536 | ((((((~964712863) + 2147483647)) >> (1267449567 - 1267449541))))));
    var_17 = (min((!0), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((-(arr_2 [i_0]))));
                arr_8 [i_0] = (((+(min((-9223372036854775807 - 1), var_2)))));
                var_19 += (arr_7 [i_0] [i_1]);
            }
        }
    }
    var_20 = (max(var_20, -8615040612372626414));
    #pragma endscop
}
