/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((var_1 - var_13), ((((var_10 + 30418) ? var_14 : (min(var_14, var_6))))));
    var_17 = (min(-var_5, (min(var_3, (max(11217996530562655227, 2631285143))))));
    var_18 = (min(((1663682153 ? (3285258313118191412 ^ var_7) : (var_10 >= var_3))), (((((var_10 ? var_9 : 26405))) ^ 140737488355327))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 += ((max(187241982, -3285258313118191412)));
                                var_20 = var_8;
                            }
                        }
                    }
                    var_21 = ((1663682152 ^ (max(var_15, ((3551658894295738301 << (69 - 68)))))));
                    arr_13 [i_0] [i_0] [i_2] = ((((arr_3 [i_0 + 2] [19] [i_0 + 3]) << (var_13 - 12195662901514037959))));
                }
            }
        }
    }
    #pragma endscop
}
