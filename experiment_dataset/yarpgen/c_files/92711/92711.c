/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (!4095);
                arr_7 [i_0] [0] [i_1] = ((~(min(var_5, ((~(arr_5 [i_1])))))));
                var_14 = (max(var_14, 127));
                var_15 = 65535;
            }
        }
    }
    var_16 = ((~((max(var_3, var_6)))));
    var_17 += -1;
    var_18 = (!var_12);
    var_19 = (~var_12);
    #pragma endscop
}
