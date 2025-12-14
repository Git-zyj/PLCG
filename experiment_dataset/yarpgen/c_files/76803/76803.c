/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_13, -var_9));
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = var_17;
                var_23 = (max(var_9, (((arr_0 [i_0]) ? (!var_8) : 60936453))));
                var_24 = ((+((min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))))));
                arr_6 [i_1] = ((~(min((arr_4 [i_0 - 2] [i_1] [i_0 - 3]), (174 | 1)))));
            }
        }
    }
    #pragma endscop
}
