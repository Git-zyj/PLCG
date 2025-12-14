/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-28, (max(((var_4 ? var_8 : var_1)), 251658240))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((min((max(24, 9225694756852782095)), ((min(3705107426476125607, 1568279876)))))) ? 2348041150911113303 : 22)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = 99;
                                var_16 = (min(var_16, ((1163592247 ? (~-85) : ((1568279867 ? (((min(127, -29)))) : (min(4194303, 9225694756852782095))))))));
                                arr_16 [i_0] [i_3 - 3] = 6061459344425626307;
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (max((((!(arr_4 [i_0] [i_1])))), (((arr_9 [i_1] [i_0] [i_1] [i_0] [i_0]) % ((1143914305352105984 ? (arr_4 [i_0] [i_0]) : 65409))))));
            }
        }
    }
    var_17 = (((min(29, 0))));
    var_18 = 1950982426;
    var_19 = ((~(min(var_3, var_12))));
    #pragma endscop
}
