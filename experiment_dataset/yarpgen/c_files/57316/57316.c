/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((min(((var_1 ? 4294967295 : var_9)), var_6)), (var_12 <= 22343));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = (max(var_5, (min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))));
                arr_8 [i_0] [i_1] &= 5176;
                arr_9 [i_0] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (min((((arr_1 [i_0] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1]) : (((var_10 / (arr_14 [i_0] [i_0])))))), ((max((-10154 / 10154), (arr_6 [i_3 - 1]))))));
                            arr_16 [i_0] [i_0] [i_2 + 1] [i_3 + 2] = -10155;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
