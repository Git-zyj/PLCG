/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(-110, ((-87 ? 2 : 3710)))));
    var_14 = (!-9184657923680249661);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = var_8;
                    var_16 = -19127;
                    var_17 = ((-(((~-7846630877555784900) + (((min(-7464, (arr_5 [i_0] [i_0] [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
