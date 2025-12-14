/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(var_5, (~84))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = -var_6;
                arr_6 [i_0] [i_0] [i_1] = max((arr_0 [4] [6]), (max(-21172, (var_1 * 14945837131567440588))));
            }
        }
    }
    var_13 = ((((min(1368159889232590212, (var_8 / var_7)))) ? ((((min(70, -61))) / var_9)) : (max((!17680221674547103082), (~var_8)))));
    #pragma endscop
}
