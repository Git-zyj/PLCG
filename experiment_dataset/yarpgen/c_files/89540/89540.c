/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_2 && ((((239 + var_12) ? (65535 - var_13) : (997840426271197201 / 12166))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = 100;
                arr_7 [i_0] = ((((arr_5 [i_1] [i_0] [i_0]) < ((((arr_4 [i_0] [1] [1]) * 0))))));
            }
        }
    }
    var_21 = var_13;
    var_22 = 1;
    #pragma endscop
}
