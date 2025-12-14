/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((max(var_5, (var_11 + var_0))), (((((max(var_7, var_10))) || ((min(var_0, var_12))))))));
                var_14 = (min(var_14, (~var_3)));
                arr_7 [i_1] = ((var_1 >> ((var_11 ? (max(-1063301129061636735, 7)) : 162))));
                arr_8 [i_0] [i_0] = (min(886595110, -14));
                var_15 = (max(-3845, -1));
            }
        }
    }
    var_16 &= (max(((max(886595133, 134217727))), var_4));
    var_17 = (min(2058389659, 2236577648));
    #pragma endscop
}
