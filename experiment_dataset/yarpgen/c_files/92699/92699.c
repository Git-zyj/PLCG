/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 274875809792;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_8 [i_0] [i_0 + 1] [i_2 - 2])));
                    var_22 = 225608028;
                    var_23 = (max(var_23, (~var_5)));
                }
            }
        }
    }
    var_24 = (min(0, var_3));
    var_25 = (62923 >= 18446744073709551593);
    #pragma endscop
}
