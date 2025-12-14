/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-366058996 == -366059010);
    var_12 |= (var_3 - 2893201754);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (((((min(var_6, 366058995))) ? (((arr_2 [i_0 - 2]) ? var_7 : 1)) : -366058996)));
                var_14 ^= (min(0, 10736));
                arr_7 [i_0] [i_0 + 2] [i_1 - 3] = (arr_1 [i_1 + 2]);
            }
        }
    }
    var_15 = (max(-var_6, (max(((2686139703 ? 366058995 : var_4)), 366059007))));
    var_16 = (((((var_2 & -366058996) ? -var_9 : (((366058985 ? var_6 : var_5))))) % ((((min(var_2, 1))) ? (min(var_4, 1)) : ((max(-366058995, 0)))))));
    #pragma endscop
}
