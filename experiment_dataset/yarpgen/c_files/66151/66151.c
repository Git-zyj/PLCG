/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (((var_14 ? (max(14923964775742175218, -6466990533717450328) : var_7))));
                            var_17 = ((max(var_15, var_4)));
                            var_18 = (min(4294967295, 9223372036854775807));
                            var_19 = var_3;
                        }
                    }
                }
                var_20 = var_10;
            }
        }
    }
    var_21 = ((~(min(var_0, var_12))));
    #pragma endscop
}
