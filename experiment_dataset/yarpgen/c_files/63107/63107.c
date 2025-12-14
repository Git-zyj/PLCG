/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 * ((var_8 >> (var_11 >= var_4))));
    var_14 = (((!-var_8) * ((min(1, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((max(-1, -69)) | -0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(-80, (31 | var_0)));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] = ((-7109814419523663611 | ((((!((min(18947, var_5)))))))));
                                var_16 = ((~((0 ? var_5 : var_3))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_17 ^= (((min((!var_7), (min(0, 3))))) | ((1 ? (arr_2 [i_6 + 1]) : ((min(var_11, 5))))));
                            var_18 ^= (1 * -5);
                            var_19 = ((~((+(((arr_23 [13] [i_1] [i_1] [i_1] [i_1]) ? 18947 : -2147483645))))));
                            var_20 = (!-var_3);
                        }
                    }
                }
            }
        }
    }
    var_21 = (((var_3 < 0) ? -1 : (max((23 && 0), (1 % 1)))));
    var_22 = (((~var_6) ? ((max((!var_6), (!var_1)))) : (var_5 + 1)));
    #pragma endscop
}
