/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_9, var_2)) < -var_7)));
    var_19 = (var_16 - var_6);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (15877023353971626783 < 2569720719737924832);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_4 - 4]);
                                arr_12 [i_0 - 3] [i_1] = ((-(((((((arr_9 [i_0] [i_0 + 1]) + 9223372036854775807)) >> (var_15 + 1387314072536478018))) ^ (((arr_9 [i_4] [i_1 + 2]) / var_7))))));
                                var_21 = ((((!(arr_0 [i_1 + 2])))));
                                arr_13 [i_4 + 1] [i_3] [i_2] [i_1 + 1] [i_0 + 1] [i_0 - 2] = ((-(((!(~0))))));
                                arr_14 [i_0 - 4] [i_0] = 62640;
                            }
                        }
                    }
                    var_22 = (min(var_22, (max(((-(arr_10 [i_0] [i_0] [i_1] [i_1] [i_1 - 2] [i_2] [i_2]))), ((((var_13 / (arr_0 [i_0])))))))));
                    var_23 = max((((-(((-9223372036854775807 - 1) ? 511 : 3204554926))))), (arr_3 [i_0 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
