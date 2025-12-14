/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 = ((-((5708936137351011654 - (arr_9 [i_1] [i_1] [i_3] [i_4 + 1])))));
                                var_11 = (((((-5708936137351011655 - ((((arr_7 [i_1]) ? 66 : (arr_10 [i_0] [i_1] [i_2] [i_1] [1]))))))) ? ((-(arr_12 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]))) : (min((min((arr_11 [3] [i_1] [i_1] [i_1] [i_1]), (arr_2 [i_0]))), ((((arr_6 [i_0] [i_0] [i_1]) ? var_0 : 1087501774)))))));
                            }
                        }
                    }
                }
                var_12 = (max(var_12, (((((((arr_6 [4] [i_1] [2]) + (arr_8 [i_0] [i_1])))) ? (arr_2 [i_1]) : (arr_2 [i_1]))))));
            }
        }
    }
    var_13 = (!(18163932773326037480 < -1));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                var_14 = -1287253079;
                var_15 = (((arr_13 [i_5] [i_6 + 1]) ? (((arr_13 [i_6] [i_6 + 1]) ? (arr_13 [i_6] [i_6 - 1]) : (arr_13 [i_5] [i_6 - 1]))) : 268435455));

                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    var_16 = ((1 ? ((-10 / (min((arr_9 [i_5] [21] [i_7 + 1] [i_7 + 1]), var_8)))) : -55));
                    var_17 += (min(((min(0, 3007714200))), (1 ^ 2512160932)));
                    var_18 = (min(-1287253079, (+-1)));
                }
            }
        }
    }
    #pragma endscop
}
