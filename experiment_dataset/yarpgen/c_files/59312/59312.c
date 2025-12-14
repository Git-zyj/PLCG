/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((1494816742 + (arr_11 [i_0] [i_1] [i_2]))))));
                            var_17 = (((((arr_12 [i_0] [9] [i_0] [i_0]) ? var_6 : 3)) / ((((arr_13 [i_2] [i_2] [i_0] [i_0]) ? (arr_7 [i_1] [i_1] [i_1]) : ((var_8 ? var_11 : var_8)))))));
                            arr_15 [i_1] = (min((~var_3), (max((arr_7 [1] [i_1] [1]), var_5))));
                            var_18 = var_14;
                        }
                    }
                }
                var_19 = ((((((var_9 ? var_10 : 2417830751787442732)))) >= (max(-2147483645, -4642626172051093504))));
            }
        }
    }
    var_20 = var_11;
    var_21 *= ((var_9 ? var_2 : (((0 == var_4) & 46))));
    #pragma endscop
}
