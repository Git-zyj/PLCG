/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(!-405253634)))) != (((var_6 && var_13) ? (min(var_13, var_13)) : ((var_12 ? var_3 : 3121915286))))));
    var_16 = min((--23966), var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (((((-(min(var_7, 25658))))) ? ((var_14 ? 29513 : (arr_1 [i_3]))) : var_6));
                            var_19 ^= -79254903;
                        }
                    }
                }
            }
        }
    }
    var_20 &= (min(79254902, ((((((21918 ? 3121915286 : 79254903))) && ((min(var_4, var_14))))))));
    #pragma endscop
}
