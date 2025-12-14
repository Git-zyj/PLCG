/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1 + 1] [i_1] [i_0] = (((((arr_0 [i_1 - 1]) < (arr_0 [i_1 - 2]))) ? (((arr_3 [i_0] [i_1 - 2]) + (~252))) : (((((arr_1 [i_0]) < -504152851))))));
                var_15 -= (min(var_8, -8070453358177141071));
            }
        }
    }
    var_16 = (((!var_7) * var_14));
    var_17 = 249;
    #pragma endscop
}
