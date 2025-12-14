/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(18260, var_4));
                var_14 = (var_9 ? ((((var_4 * var_9) >= 18400))) : (max(-var_8, ((var_1 ? var_5 : 18270)))));
            }
        }
    }
    var_15 -= ((18400 ? var_2 : ((var_10 ^ ((7 ? var_8 : var_4))))));
    var_16 = (min((min(35203, ((var_9 ? var_0 : 18260)))), -1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = (!27);
                                var_18 = (max(var_18, (((~((428103008647232104 >> (47136 - 47136))))))));
                            }
                        }
                    }
                    var_19 = ((var_1 ? -18261 : (((((var_13 ? var_10 : var_2))) ? -1618770663 : -var_5))));
                }
                arr_19 [i_2] [2] = (11042 * -14163);
                var_20 = ((8 % (((max((arr_15 [i_2] [i_2] [i_2] [i_2]), 16150))))));
            }
        }
    }
    var_21 = 177;
    #pragma endscop
}
