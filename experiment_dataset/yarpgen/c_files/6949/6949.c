/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((var_13 > var_7) - (min((149 + 1), (min(3815398748269455143, var_4)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (((((max(1, (arr_6 [i_0] [i_0] [i_0] [i_0])))) ^ var_1)));
                                var_18 = (max(var_18, (((((var_7 ^ ((max(var_15, (arr_0 [i_0])))))) & ((-27410 ? (arr_4 [i_0] [i_1]) : (arr_0 [i_0]))))))));
                                var_19 = (min(var_19, (((-97 ? ((min(var_8, (var_12 / 3576218571)))) : (((var_7 + -32760) * (max(var_0, var_13)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (((~(!-4))))));
    #pragma endscop
}
