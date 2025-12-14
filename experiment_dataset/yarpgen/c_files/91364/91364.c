/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((((-14 ? var_5 : ((var_9 ? 10642895725757505528 : var_19))))) ? ((var_2 ? var_9 : 17922989746376459452)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((arr_2 [i_0 + 4]) <= (arr_2 [i_0 + 2]))) ? ((-(arr_2 [i_0 + 1]))) : (min((arr_2 [i_0 + 4]), (arr_2 [i_0 - 1]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] = 2901618572;
                                var_21 = ((((max((arr_9 [i_3 - 1] [i_0 + 1]), 523754327333092160))) && ((((max((arr_15 [9] [10] [i_2] [4] [16]), (arr_0 [i_1])))) && 63))));
                                arr_17 [i_0 + 1] [i_4] = (arr_11 [i_0 + 2] [i_2 - 1] [i_3 + 2] [i_4 + 1]);
                            }
                        }
                    }
                }
                var_22 = (((arr_2 [i_1]) ? (((((var_5 * 17922989746376459455) == ((var_12 ? var_19 : (arr_10 [i_0] [3] [i_1] [i_1]))))))) : (((~17922989746376459454) ^ (523754327333092160 && 17922989746376459452)))));
            }
        }
    }
    var_23 = ((var_19 && ((min(((var_3 ? 1485146139 : var_11)), (!20))))));
    #pragma endscop
}
