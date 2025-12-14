/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 -= ((!((max(2329324180839821778, (~16723392386717255088))))));
                    var_16 -= (min(((2329324180839821778 ? 104 : var_0)), (((2779724780957165867 ? 43 : 1)))));
                    var_17 = ((!(~1064366045)));
                    var_18 = ((arr_3 [i_1] [i_1] [i_1 + 3]) <= (((~((1338293876373539062 ? 2712935463 : 29037))))));
                }
            }
        }
    }
    var_19 |= var_12;
    var_20 += var_4;
    #pragma endscop
}
