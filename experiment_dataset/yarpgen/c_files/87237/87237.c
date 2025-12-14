/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_2 / var_19) ? ((var_9 ? 214 : var_3)) : (var_14 && var_14)))) ? var_16 : (max((var_7 & var_17), (var_10 < 206)))));
    var_21 = ((var_3 ? ((((max(var_16, var_8))) ? (!38082) : (max(var_19, 2020445476002929640)))) : ((((((-6877902921114207103 ? -1080806892611621003 : var_2)) == (!var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = (max((((~var_10) ? 42 : (arr_3 [i_0 - 3] [i_0 - 1] [i_0]))), (~1)));
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((((((max(-20450, (arr_8 [i_0 - 3] [1])))))) * 9007198180999168));
                        }
                    }
                }
                arr_10 [i_0] [i_1 - 1] = ((((((arr_8 [i_0 - 1] [i_0 - 1]) - (arr_8 [i_0 + 1] [i_0 - 3])))) | (((arr_0 [i_1 - 1] [i_0 - 1]) / ((-(arr_3 [i_0] [i_1 + 1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
