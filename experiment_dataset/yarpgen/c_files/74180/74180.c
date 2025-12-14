/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, -247756326));
                            var_13 = 247756332;
                            var_14 = ((!(((1601836212 ? 1 : -12095)))));
                            var_15 *= ((14 ? -247756326 : ((240 ? -247756332 : 18))));
                        }
                    }
                }
                var_16 = -247756333;
            }
        }
    }
    #pragma endscop
}
