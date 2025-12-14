/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((-390816025 ? 42414 : 23122))) ? 23122 : 23121))) ? -7178625072385672685 : 23122));
    var_14 = 215;
    var_15 = -6472375975794076607;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 255));
                var_17 = 8088690270177126730;
                var_18 = (max(var_18, 23114));
                var_19 = 1;
            }
        }
    }
    #pragma endscop
}
