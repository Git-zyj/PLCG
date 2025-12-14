/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((var_5 ? (min(var_8, (min(var_1, 2838514454)))) : (max(var_9, ((var_6 ? 198 : var_9))))));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(1, (max(((max(var_10, var_0))), var_15))));
                var_18 += ((((((198 ? 781610026 : 226)))) ? (min(-5554373823706743190, 236)) : 193));
            }
        }
    }
    #pragma endscop
}
