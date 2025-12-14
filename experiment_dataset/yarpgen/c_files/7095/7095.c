/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 -= (max(((min(6032962283110968537, 9672))), 3062227182));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_2] = (((max((~20757), (56231 != 7469370820156824279)))) ? (((1 >> (var_3 - 104)))) : (max((var_13 << 14), (max(7469370820156824289, 30)))));
                                var_17 = (min((min(7469370820156824279, ((min(var_0, var_8))))), ((((min(-7469370820156824280, var_10))) ? var_4 : (max(7469370820156824284, -6918210688688092737))))));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (((((1232740113 ? 1 : 56231)) >= (1 && var_8))))));
            }
        }
    }
    var_19 |= var_4;
    #pragma endscop
}
