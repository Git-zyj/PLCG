/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1 - 1] [i_0] [i_0] |= var_7;
                    var_11 += ((max(1957011169, (arr_6 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                    arr_11 [i_0] = (max((5 & 0), -1073734656));
                    arr_12 [i_0] [8] [i_0] [i_2] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
