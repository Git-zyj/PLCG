/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_10 >> ((((var_10 != var_5) == var_16)))));
    var_19 = ((171 ? (108 || var_0) : (((var_3 >= (var_14 != 761904933))))));
    var_20 = 3576883093;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = 718084202;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [i_0] = 2495868460;
                            var_23 = max(((((var_15 * 8) ? (arr_10 [19] [i_2] [19]) : 718084203))), ((((var_10 / (arr_7 [i_0] [i_2]))) * (((arr_8 [i_3] [i_2]) / var_7)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
