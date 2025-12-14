/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = var_2;
                var_21 = (max(var_21, (((-2559678092839139034 ? (((~var_6) ? (min(var_19, var_12)) : var_2)) : ((((var_12 != (arr_2 [i_1 + 1]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 *= (((((((((((-32767 - 1) ? (-9223372036854775807 - 1) : 81)) + 9223372036854775807)) + 9223372036854775807)) >> (var_1 - 40))) << (-var_19 == -90)));
                            arr_10 [18] [i_0] [i_1 + 3] [i_2] [3] = ((+((((var_2 ? (arr_6 [i_0] [i_2] [19] [i_0]) : var_17))))));
                            var_23 = ((var_0 == (var_1 / 5)));
                            var_24 = (arr_2 [i_0]);
                            arr_11 [i_0] [i_0] [i_0] [i_3 - 2] = ((~(((arr_8 [i_3 - 1] [i_0] [i_2] [i_1 + 1] [i_0]) ? var_5 : ((var_13 ? 8663913399637634143 : 30897))))));
                        }
                    }
                }
                var_25 = (max(var_25, ((min((((arr_9 [i_1] [i_1] [i_1]) + (arr_9 [i_1] [i_1] [12]))), ((-(arr_9 [i_1] [i_1 + 1] [i_1]))))))));
            }
        }
    }
    var_26 = var_15;
    var_27 = (((((-(65510 / var_7)))) ? (((((var_9 ? var_6 : var_0))) ? ((var_7 ? var_12 : 65535)) : var_14)) : (((var_9 || 16776704) ? (~var_13) : var_2))));
    var_28 -= var_2;
    #pragma endscop
}
