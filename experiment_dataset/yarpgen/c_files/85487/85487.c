/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (!14497);
                    var_15 = (max(var_15, ((min(((102 ? (~37) : 51026)), 37)))));
                }
            }
        }
    }
    var_16 &= (((((min(23928, var_0)))) ? (~var_4) : (((!((max(var_10, -75))))))));
    var_17 = (max(var_17, var_5));
    #pragma endscop
}
