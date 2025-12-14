/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((~((((min(var_9, var_4))) | ((-15 ? var_4 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2] [i_2] [i_0] = (min(8, 47));
                    arr_9 [i_2] = (~18446744073709551606);
                    var_21 = (max(var_21, ((max(20, (min(-58, (-9223372036854775807 - 1))))))));
                }
            }
        }
    }
    var_22 = var_0;
    var_23 = ((((((min(var_17, var_15))) ? -1566858679930878618 : (((max(0, var_7)))))) + ((max(var_7, 7)))));
    #pragma endscop
}
