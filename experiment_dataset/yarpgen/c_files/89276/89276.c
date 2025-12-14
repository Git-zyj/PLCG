/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 2147483648;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = arr_1 [i_0];
                var_20 |= (min((min(var_4, var_10)), 4227858432));
                var_21 = 4227858432;
                arr_6 [6] [i_0] = var_8;
                arr_7 [i_0] [i_0] = var_6;
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
