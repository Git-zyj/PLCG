/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((max(var_2, (((var_12 ? var_13 : 1932618098))))))));
    var_17 = max(var_0, (min(var_8, (18446744073709551615 - var_1))));
    var_18 = 3604664584;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_0 [i_0]);
                arr_8 [1] [5] [1] = ((5474994939354114233 ? 17799 : 5474994939354114241));
            }
        }
    }
    #pragma endscop
}
