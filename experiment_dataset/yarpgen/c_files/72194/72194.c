/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= max(((max(var_3, 702738666253491378))), ((((max(var_6, var_8)) < (max(var_9, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((((((!(arr_2 [i_0] [i_1 + 1] [i_1 - 1]))))) > 2047));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (-1 ? ((min(33554431, 1150669704793161728))) : -702738666253491373);
                    var_18 = (((min((arr_2 [i_0] [1] [i_2]), ((805306368 ? 7637451217960433307 : -2655490881034813888))))) ? (min(3987969273923658472, (arr_1 [i_0]))) : (((arr_5 [i_0] [5] [i_2] [i_2]) + (arr_6 [i_1] [i_2] [i_2] [i_2]))));
                }
                var_19 ^= min((arr_4 [i_0] [i_0]), ((17179869183 ? 0 : 13)));
                var_20 = max((min((arr_2 [i_0] [i_1 - 1] [i_1 - 1]), (arr_4 [8] [i_1 - 1]))), ((((max(var_4, (arr_0 [9])))) ? ((6163076563034554212 ? var_7 : var_12)) : ((-(arr_2 [i_0] [i_0] [13]))))));
                arr_7 [15] [i_0] = max(16777200, (min((arr_6 [3] [i_1 - 1] [i_1] [i_0]), 4508045949354701706)));
            }
        }
    }
    #pragma endscop
}
