/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (max(1981664871, -107008801));
                var_20 = (min(((((1981664879 * var_4) || (var_16 + var_4)))), (~var_14)));
                arr_5 [i_0] = (max(17324591192172338313, 13775047835395141348));
            }
        }
    }
    var_21 = 28251;
    #pragma endscop
}
