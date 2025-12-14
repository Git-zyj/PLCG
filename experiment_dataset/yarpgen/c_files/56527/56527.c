/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_9);
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (((((383320628 % (arr_2 [i_2])))) ? -7357472077272957647 : 7357472077272957648));
                    var_14 = arr_1 [i_0] [i_2];
                }
            }
        }
    }
    var_15 = var_8;
    var_16 &= ((-((((((min(var_1, -20609))) + 2147483647)) >> ((((32748 << (var_4 - 1351800698))) - 8383457))))));
    #pragma endscop
}
