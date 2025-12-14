/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_4 & ((var_16 + (var_13 && var_17))));
    var_20 = (max(((((var_4 + 2147483647) >> ((3696010632 ? var_0 : var_5))))), (((~var_15) + 201))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_21 = (min(((((8896965970614540512 ? var_10 : 0)))), (((((3952194150826017255 ? 0 : 2212557513))) ? (~var_5) : ((5 ? (arr_6 [i_2]) : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = ((((((0 < var_16) ? 1 : (var_1 && var_8)))) && ((min((min(-4732219214449930713, var_8)), ((-71 ? 255 : -4732219214449930702)))))));
                                var_23 = ((55 ? -2836834173598466114 : -2377));
                                var_24 = -1;
                                var_25 = ((((min((arr_3 [i_3 - 1] [i_2 + 1]), -2383))) ? ((var_3 + (arr_3 [i_4] [i_1]))) : (~-2377)));
                                var_26 ^= 3;
                            }
                        }
                    }
                    var_27 = ((((((((var_14 ? -80 : var_11))) % -95))) ? (min(var_17, var_5)) : (((((((var_7 ? var_3 : (arr_10 [i_0] [i_0] [i_1] [i_2])))) || (((var_5 ? 1727 : 32349)))))))));
                }
            }
        }
    }
    #pragma endscop
}
