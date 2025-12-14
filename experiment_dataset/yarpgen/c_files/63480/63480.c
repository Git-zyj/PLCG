/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 > -8493671482164841487);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_15;
                var_20 = (~((((((~(arr_3 [i_0] [i_0])))) < ((-(arr_1 [i_1 + 2])))))));
                var_21 = ((((arr_4 [i_0]) ? 8493671482164841487 : -8493671482164841479)));
            }
        }
    }
    var_22 = var_7;
    var_23 = (~3323851739);
    #pragma endscop
}
