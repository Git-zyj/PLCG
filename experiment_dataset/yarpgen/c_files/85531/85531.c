/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~9223372036854775802) ? var_7 : 6316704813695973881);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [7] [7] [i_1] [i_0 - 3] = var_10;
                                var_13 = ((-86830892 ? ((((!((min(-2801437397901225856, -9223372036854775802))))))) : var_2));
                                arr_13 [i_3] [i_3] [i_3] [i_1] [i_3] = (max((max(13817874135541465100, var_2)), (((var_1 - 13817874135541465099) * (-13277 >= 1)))));
                            }
                        }
                    }
                }
                var_14 |= (max((arr_7 [i_1 + 1] [12] [12] [i_0 + 3]), ((((((arr_3 [i_1 - 1]) | 2468477457923514363))) ? (var_11 | var_4) : var_5))));
            }
        }
    }
    var_15 = 603956415;
    #pragma endscop
}
