/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((-((var_8 ? var_4 : var_6))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = ((((((var_12 || 295367464) ? var_13 : -1006632960))) ? 92 : ((var_7 ? var_2 : 1686119746))));
                            var_19 = ((max(var_15, 1686119746)));
                            arr_11 [i_1] = -1984168595;
                            var_20 = ((((max((~var_8), var_13))) ? (((!(((4191890310 ? var_15 : var_12)))))) : ((((max(60, -84))) ? ((-105 ? -1686119746 : 2)) : ((3104614867 ? 41802 : var_15))))));
                            var_21 = max((((((var_2 ? 1006632962 : var_4))) ? 22 : ((var_10 ? var_14 : 1006632962)))), (var_13 | var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 *= max(1, 2537359965545911442);
                                arr_20 [i_1] = var_11;
                            }
                        }
                    }
                }
                arr_21 [i_1] [i_1] [i_1] = max(-1686119743, 1686119746);
            }
        }
    }
    var_23 = (max((min((4064964652 ^ 4644291091267409654), ((min(209, 3779526380))))), ((min(22, 94)))));
    var_24 = ((((min((max(-462382679, 152)), 1))) ? 15909384108163640188 : (((var_2 ? var_15 : (min(-850879894, var_13)))))));
    var_25 |= (~15909384108163640178);
    #pragma endscop
}
