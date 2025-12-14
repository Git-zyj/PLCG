/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (((((-24208 ? var_1 : 0))) ? -15 : (min(1, ((12655480841797878258 ? var_2 : (arr_1 [i_0] [i_1])))))));
                arr_6 [i_0] = 183;
                arr_7 [6] = ((0 | (((5791263231911673358 ? (arr_0 [i_1]) : var_19)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = 9280;
                    arr_15 [i_2] [i_3] [i_2] = max((((1 ? 5791263231911673358 : var_13))), 12655480841797878249);
                    arr_16 [i_2 - 2] [i_3] [i_4] [i_4] = min(((((1 ? 0 : 0)) * var_1)), 5791263231911673370);
                }
            }
        }
    }
    var_22 = var_1;
    var_23 = (min((((((32767 ? 1 : 5791263231911673383))) ? 3340273997133818366 : -1)), (~var_17)));
    #pragma endscop
}
