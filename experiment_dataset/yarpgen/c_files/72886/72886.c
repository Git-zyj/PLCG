/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(var_5, var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [1] [1] [i_0] [1] = 28;
                    var_13 = (min((((-(arr_4 [i_1 + 1] [i_0] [i_2 + 2])))), (max(3829870143343811221, (arr_4 [i_1 + 1] [i_0] [i_2 + 2])))));
                    arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, -111));
                                var_15 = (max(var_15, ((((arr_11 [i_1] [8] [i_1 - 1]) ? (((arr_3 [2] [2]) - (((max(var_6, var_4)))))) : ((((var_0 + 2147483647) << ((((var_7 >> (var_5 - 14428746954446209194))) - 10))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
