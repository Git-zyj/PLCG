/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 * 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (((arr_6 [i_1] [i_1]) && -8920));
                    var_19 = max(((min(0, ((2 ? (-9223372036854775807 - 1) : 2))))), (max(2, 14995358201707694694)));
                }
            }
        }
    }
    #pragma endscop
}
