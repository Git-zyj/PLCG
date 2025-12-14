/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? var_7 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = var_7;
                                var_18 = -1028547326;
                                var_19 ^= (((((arr_11 [i_0 - 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_2] [i_2]) ? (arr_11 [i_0 - 1] [i_1] [i_3 + 1] [i_3] [i_2] [i_3 - 1]) : (arr_0 [i_0 + 1]))) >> ((((var_10 <= 105) || ((min(-1028547326, -26613))))))));
                                var_20 = (min(var_20, ((min(22, var_6)))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((((arr_11 [i_2] [i_2] [i_0] [i_0 + 1] [i_2] [i_0]) + var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
