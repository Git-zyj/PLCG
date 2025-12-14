/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!1) == (max(4193280, 1))));
    var_17 = (min(var_17, -var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min((((57462 ^ var_10) ? 198 : (((arr_2 [i_0]) ? var_13 : 1)))), (max(8096, 2638867834))));
                            var_19 = (60754 | 1);
                            var_20 = (min(var_20, ((((~-118) ? 14358 : 1)))));
                            var_21 = 228729828;
                        }
                    }
                }
                var_22 = var_8;
                var_23 = (198 / 2131657353);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                var_24 = 57344;
                var_25 ^= (((arr_13 [i_4] [i_5 - 1]) / 50));
            }
        }
    }
    var_26 -= (((max((!var_12), (var_9 || 1966080))) ? (((59 && 1611971395) ? ((3938469299 ? var_10 : var_3)) : (var_2 / 10504))) : var_11));
    #pragma endscop
}
