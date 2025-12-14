/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((-9223372036854775807 - 1), (var_1 / 2210387044)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((((max((-9223372036854775807 - 1), var_7))) ? (-var_9 - 9223372036854775807) : (((-9223372036854775807 - 1) ^ 55))));
                    arr_7 [i_0] [i_0] = ((-((18446744073709551605 ? 255 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
