/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(var_11, (var_1 % 65630091))));
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= (((((var_2 >> (var_2 - 290747933)))) ? (var_11 == var_0) : -4229337209));
                                var_19 |= 7908188230048465441;
                                var_20 = var_1;
                                var_21 += (min((((arr_0 [i_3 + 2]) | var_5)), (!var_5)));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] = (((((+(max((arr_3 [i_2]), var_5))))) ? (max(var_2, (arr_7 [0] [i_1] [i_1]))) : 4229337213));
                }
            }
        }
    }
    var_22 = ((~7908188230048465441) - var_0);
    #pragma endscop
}
