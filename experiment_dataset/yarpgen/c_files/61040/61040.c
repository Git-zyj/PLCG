/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_7 < (!4294967295))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (~var_8);
                var_18 -= -685311843;
                arr_5 [i_1] [0] = (-4230196397927513745 / 56);
            }
        }
    }
    var_19 = ((var_5 ? (max(var_1, (max(var_12, var_8)))) : var_0));
    var_20 &= (((var_13 / 161) != (!4001)));
    #pragma endscop
}
