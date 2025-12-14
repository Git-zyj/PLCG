/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_9));
    var_21 ^= (var_9 != var_15);
    var_22 = 4230646244;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, (((4230646244 / 30) >= 4230646244))));
                    arr_8 [i_2] [14] [14] [i_2] = (1 & 0);
                    var_24 |= (((18446744073709551608 & 0) / (1 % var_6)));
                }
            }
        }
    }
    #pragma endscop
}
