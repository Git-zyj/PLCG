/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 += (arr_4 [i_0] [20]);
                var_19 = -913850515;
            }
        }
    }
    var_20 = -6636315572028074784;
    #pragma endscop
}
