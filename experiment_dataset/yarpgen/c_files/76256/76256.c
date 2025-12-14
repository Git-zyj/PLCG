/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = ((~(((var_2 > ((var_7 ? 250 : 53)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = (max(((~(((2147483631 && (arr_3 [i_0])))))), (arr_0 [i_0])));
                var_23 = (arr_2 [i_0 - 4]);
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
