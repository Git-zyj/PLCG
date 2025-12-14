/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    var_18 -= (max(893662025, ((((min(804487758, var_6))) ? (~4223803774) : (((237 ? var_13 : 190)))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 &= (min(((max(835887556, 6))), ((((((min(var_14, var_7)))) == (min(var_15, var_6)))))));
                arr_4 [i_0] [i_1] [i_1] = 3120111049;
                var_21 = (((arr_0 [i_0]) * var_15));
                var_22 *= ((var_11 ^ (arr_2 [4] [i_1 - 1] [4])));
                var_23 |= (max((arr_2 [8] [i_1 + 1] [i_1 + 3]), ((1023 ? 4 : ((min(244, var_13)))))));
            }
        }
    }
    #pragma endscop
}
