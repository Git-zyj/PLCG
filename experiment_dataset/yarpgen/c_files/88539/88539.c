/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_15 = ((!(0 % 14)));
                                var_16 = (min(var_16, (((min(1, -1299947473))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_17 = ((((-1226184117 % (arr_13 [i_0 + 1] [i_0 + 3] [i_1 + 1])))) ? -358817905 : 1);
                                var_18 *= arr_1 [i_2];
                                arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = -1226184118;
                                var_19 = ((((((arr_7 [i_0] [i_1] [i_2] [i_0 + 2] [18] [1]) != 6))) * (((!(arr_8 [i_0] [i_1] [3] [i_3] [i_5]))))));
                            }
                            var_20 = (((!(((-15 ? 1 : (arr_8 [i_0] [4] [i_1] [4] [i_3])))))));
                            var_21 = (!358817905);
                            var_22 *= (max(((((arr_4 [i_0 + 4]) * 1))), (min(225, (4294967272 * 0)))));
                        }
                    }
                }
                var_23 *= (min((((!(arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_1] [i_1])))), ((-((-10849 ? 2 : -16113))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1 - 1] [i_1 - 1] [i_7] [i_8] [i_8] = (max(((3609 * (arr_24 [i_0]))), -1188038647));
                                var_24 = ((!(((arr_17 [i_6] [i_1]) != -15))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= -8;
    #pragma endscop
}
