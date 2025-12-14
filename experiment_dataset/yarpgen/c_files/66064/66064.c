/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1 + 3] = (min(15, -15));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_13 [i_2] = (((((((var_2 ? (arr_7 [i_2] [i_3]) : 15))) ? var_14 : (-7 / -10))) ^ ((max(-30, 15)))));
                var_16 ^= (((((min(29, 7)))) ^ 30));
            }
        }
    }
    var_17 = (max(29, var_2));
    var_18 = (((((((min(-16, var_3)) <= -10)))) >= (min(var_0, var_8))));
    #pragma endscop
}
