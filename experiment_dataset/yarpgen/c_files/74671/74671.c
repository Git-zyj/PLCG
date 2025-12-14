/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? var_5 : ((18164 ? var_7 : -18167))));
    var_11 = (min(var_11, var_5));
    var_12 &= (max((794205597 + 281200098803712), (min((794205591 < var_5), (((-127 - 1) ? var_1 : -2338387366300399434))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_0] = (((-2064497156 || 2963911558) * (((arr_2 [i_1]) | (arr_3 [i_0] [i_2])))));
                    var_13 = (min(var_13, (((((((max(1, 281200098803712)) + (-9223372036854775807 - 1)))) ? (max((arr_7 [i_0] [i_1] [i_2]), 3500761716)) : (min(8615312172406762341, -433211755)))))));
                    arr_11 [i_0] [i_1] = ((((((((3370844595 ? -26760 : 4181702416))) ? ((max((arr_0 [i_0] [i_1]), 27))) : ((~(arr_4 [i_0] [i_0] [i_2])))))) ^ 0));
                }
            }
        }
    }
    #pragma endscop
}
