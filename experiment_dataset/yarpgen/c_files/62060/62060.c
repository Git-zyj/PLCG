/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((2281562127 ? (~2281562139) : var_1)) << (((arr_0 [i_1] [i_1]) + 56))));
                var_14 = ((((var_2 ? (((max(var_12, 67)))) : (min(-781328657, (arr_5 [i_0] [i_0]))))) * var_9));
            }
        }
    }
    var_15 = 1774417704;
    #pragma endscop
}
