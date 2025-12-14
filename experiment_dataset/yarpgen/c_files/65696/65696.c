/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (max((1 >= 1), (1 < 29219)));
                arr_6 [i_1] = (((((min(139, 127)))) / (max(25099, 288230341791973376))));
                var_12 = (((((min(-1, -1)) + 2147483647)) << ((((max(255, 0))) - 255))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 -= (((min(2584, 5484512135612815698)) < -123));
                                var_14 = 29215;
                                var_15 ^= (max((((-530295097 + 2147483647) << (1687 - 1687))), -15));
                                var_16 = (max((16 & 99), 1));
                            }
                        }
                    }
                }
                var_17 = (max((max(-46, 1)), (2093056 >= 139)));
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
