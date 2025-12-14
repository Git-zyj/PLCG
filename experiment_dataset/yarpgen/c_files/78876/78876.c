/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(6082258086271395987, (~var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] = -8192;
                    var_16 = var_13;
                    var_17 = (max(var_17, (((0 ? (-308131752 % 122) : 1009972480)))));
                }
            }
        }
    }
    #pragma endscop
}
