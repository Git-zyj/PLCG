/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_16));
    var_19 = ((var_15 ? var_17 : ((((var_5 ? -8443897010704977153 : 253))))));
    var_20 = 8443897010704977152;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (((0 - 242) * (arr_6 [i_2] [i_2] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [3] [i_0] [i_3] [9] [i_4] = (((0 ? (min(var_16, var_4) : (arr_11 [i_0] [i_0] [i_1 + 1] [2] [i_0] [1] [5])))));
                                var_21 = ((-(((((var_10 ? (arr_14 [i_4] [i_3] [i_2] [i_1] [i_0]) : 255))) ? (arr_10 [i_0] [i_0]) : (((((arr_7 [i_1] [i_2] [i_3]) >= 19))))))));
                                arr_16 [i_0] = var_7;
                                arr_17 [i_0] [i_0] [i_3] = (((((-83 ? 1 : 252)))) != -83);
                            }
                        }
                    }
                    arr_18 [i_2 - 2] [i_1 - 1] [i_0] = 8443897010704977152;
                }
            }
        }
    }
    #pragma endscop
}
