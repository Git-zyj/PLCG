/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 7445254785754710873;
    var_13 = var_5;
    var_14 = (min(var_14, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 &= ((((var_2 ^ (var_11 - var_0))) <= 9));
                                var_16 = (min(var_16, ((min(((((min(4353298837252725783, var_9)) != var_3))), (var_3 % 5))))));
                                var_17 = (max(var_17, (((((var_4 - (arr_0 [i_2] [7]))) / (arr_14 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [6]))))));
                                arr_18 [i_0] [i_0] [i_1] [7] [4] [i_3 + 1] [i_4] = var_9;
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] = (~11758);
                var_18 = 53778;

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_19 = (min((min(((max((arr_12 [4] [i_1] [4] [4] [i_1]), var_1))), ((var_4 ? (arr_16 [i_0] [i_1] [i_1] [i_5] [i_5]) : 38300)))), (arr_4 [i_5] [i_1])));
                    arr_22 [i_0] [8] [i_5] [i_0] = (var_10 * var_3);
                }
            }
        }
    }
    #pragma endscop
}
