/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max(((min(3407890924, ((max(908, 0)))))), ((12037 + (min(18014398509481983, -133932615850494083))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 ^= 18428729675200069632;
                var_16 = (min((0 | 16506), (~0)));
            }
        }
    }
    var_17 = 1269109830;
    #pragma endscop
}
