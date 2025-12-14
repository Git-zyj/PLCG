/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_4));
    var_13 = ((((((((1 << (((-32767 - 1) + 32775))))) ? 1 : var_8))) ? (var_3 ^ -7019418752010235031) : ((min(3687944072, 32767)))));
    var_14 = (((((1590146799371403812 ? var_6 : var_6))) == var_1));
    var_15 *= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (~-53);
                    var_16 = ((arr_7 [i_1] [i_1] [i_2] [i_1]) + var_4);
                }
            }
        }
    }
    #pragma endscop
}
