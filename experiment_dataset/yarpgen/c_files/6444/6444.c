/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (max((((var_9 ? ((((9 || (arr_2 [i_0] [i_1 + 1] [i_0]))))) : 7793073767436496807))), var_0));
                    var_13 = (((arr_5 [i_1 - 3] [i_1 - 3] [0] [i_1 - 3]) ? ((max((arr_5 [i_1 - 3] [10] [i_1 - 3] [i_1]), var_1))) : (((arr_0 [i_1 - 2]) ? 117 : (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2])))));
                    arr_6 [i_2] [i_1] [12] = ((((min((arr_4 [i_1 - 3] [i_1]), (arr_2 [i_1 - 3] [i_1] [i_1 - 1])))) != (((arr_4 [i_1 - 1] [11]) >> (((arr_2 [i_1 - 3] [i_1] [i_1 - 2]) - 45))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_14 = var_3;
                        arr_21 [i_4] [i_4] [i_3] [i_6 + 1] [i_5] [i_3] = ((-((((arr_11 [i_3] [i_3] [i_3]) <= (arr_10 [i_6 - 1]))))));
                        var_15 = (-9223372036854775807 - 1);
                    }
                    arr_22 [i_3] [i_4] [3] = (((((7793073767436496807 ? (((0 ? -9311 : -2222682312609885548))) : 9))) ? 7 : 1));
                }
                var_16 -= (((~4198930828) == var_7));
            }
        }
    }
    var_17 = (max((-2017748848 | -44), var_0));
    var_18 = (max((((var_9 || (173 + var_4)))), ((var_0 ? var_8 : 65))));
    #pragma endscop
}
