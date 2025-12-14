/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(-7091, 4461559264736727724)))) ? (max(-26, 1)) : ((min(1, ((-12019 ? 1 : 0)))))));
    var_15 ^= ((max(((4578165512815774869 ? -4 : 1)), (var_2 & var_11))) & var_12);
    var_16 = (min(var_16, (((min(1, (5 < 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 ^= (max((((!((((arr_0 [i_0]) ? 120 : (arr_3 [i_1]))))))), (max(14, (~4578165512815774869)))));
                    var_18 -= (((((4578165512815774854 / 72) == ((min((arr_5 [2] [i_1] [i_1] [i_2]), 3213753200))))) ? 13 : (((!((((arr_6 [i_0]) >> (3213753200 - 3213753199)))))))));
                }
            }
        }
    }
    #pragma endscop
}
