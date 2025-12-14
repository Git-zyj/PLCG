/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((35491 >> (12141153378732698425 - 12141153378732698396)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = 4058599212;
                var_13 = ((!((max((((1 ? -116 : 3))), ((var_7 ? 2047 : 4058599197)))))));
            }
        }
    }
    var_14 = 4294967282;
    var_15 = ((236368080 ? 1332631892 : 6879184952255754989));
    #pragma endscop
}
