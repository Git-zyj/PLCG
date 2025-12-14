/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(1, var_7);
    var_11 = var_5;
    var_12 &= (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 18446744073709551615;
                var_14 &= (max(0, ((!((max(var_5, var_7)))))));
            }
        }
    }
    var_15 = (max(var_2, ((((1 ? 1 : 1))))));
    #pragma endscop
}
