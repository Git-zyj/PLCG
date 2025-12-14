/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-var_6, (((((var_16 ? var_1 : 2117265123))) ? var_4 : var_18))));
    var_20 &= 511;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 -= 22;
                arr_5 [i_1] [i_0 - 1] = (min((max((arr_4 [i_1 + 2]), 87)), (((!(arr_0 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
