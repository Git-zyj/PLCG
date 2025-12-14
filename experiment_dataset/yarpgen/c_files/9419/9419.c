/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((2503580961080355271 ? 3216292537 : 11079836357055538606));
                            var_16 *= -1;
                        }
                    }
                }
                var_17 *= 2751487769;
            }
        }
    }
    var_18 = (var_12 & var_7);
    var_19 = var_5;
    var_20 = var_4;
    var_21 = (max(var_1, 29704));
    #pragma endscop
}
