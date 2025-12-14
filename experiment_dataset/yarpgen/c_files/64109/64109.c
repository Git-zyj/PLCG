/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 + -var_11);
    var_16 = (~var_8);
    var_17 = 233;
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((max(-76, var_1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 *= ((((min(-62, (arr_13 [i_0] [i_3 + 1] [i_2] [i_3] [i_1])))) ? var_12 : 91));
                            var_20 = (min(var_20, (((!(9223372036854775807 && 2250955681495847756))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] = (arr_4 [i_5] [i_5] [i_5]);
                            var_21 = var_5;
                            var_22 = (2032 ? 67 : 17605688169094535452);
                        }
                    }
                }
                var_23 = ((-3307158991865838158 ? 16195788392213703859 : -20576));
            }
        }
    }
    #pragma endscop
}
