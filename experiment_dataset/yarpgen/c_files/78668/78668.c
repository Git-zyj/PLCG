/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 -= (((var_4 * ((var_10 ? var_0 : var_0)))));
    var_14 = ((((min(((max(var_9, var_11))), (min(var_2, var_4))))) ? (((1 ? 267911168 : 9462))) : ((min(140, var_3)))));
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((!((((333421231 ? -97 : var_11)) <= (!-97)))));
                var_17 |= (min((((((arr_1 [i_0] [i_0]) ? -36 : (arr_1 [4] [i_1]))))), (max((max(var_1, 1610612736)), -97))));
                var_18 &= (((((-97 - 2139739576) + 2147483647)) << ((((var_0 << (1543163320858571419 - 1543163320858571391))) % ((var_4 ? var_3 : 64512))))));
                var_19 = (min(((81 ? 1543163320858571419 : (-2139739579 * 2809191892))), 10607253634614532722));
            }
        }
    }
    #pragma endscop
}
