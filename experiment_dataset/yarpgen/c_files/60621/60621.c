/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max(var_0, 17));
    var_13 = 1;
    var_14 = 1884699328;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((((((min((arr_5 [i_0]), 9593873535609957492))))) & (((arr_0 [20]) << ((((max(1, 7))) - 6))))));
                var_15 = (max(var_15, (-127 - 1)));
            }
        }
    }
    var_16 = ((var_6 >= 8239498568011018711) ? (-1 - 224) : (((max(var_4, var_2)) >> (223 - 212))));
    #pragma endscop
}
