/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((29850 ? 3381496131604393488 : 228));
                arr_7 [i_0 - 2] |= (max(((67043328 ? -64 : 75)), ((min(-60, 44)))));
            }
        }
    }
    var_14 |= (max(59, 255));
    var_15 = ((var_6 ? (max(var_5, (16604468874152963145 || 1))) : (((64 ? 1812654574 : 1440475221)))));
    #pragma endscop
}
