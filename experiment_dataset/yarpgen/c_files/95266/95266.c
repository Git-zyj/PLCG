/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (4294967295 ^ 23877);
    var_18 = 3643546037583393441;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(((-(max(var_15, (arr_3 [i_0] [i_0]))))), (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] [i_0] [i_4] = var_6;
                                arr_12 [i_4] [2] [i_2] [i_0] [2] [i_0] [i_0] = (min((((((var_10 - (arr_1 [i_0])))) ? (((arr_7 [2] [2] [2] [i_0]) ? var_2 : (arr_7 [i_4] [i_2] [i_1] [i_0]))) : ((max(var_11, (arr_2 [i_0] [i_1 + 1])))))), (arr_8 [i_0 - 2] [i_0 + 1] [4] [i_0])));
                            }
                        }
                    }
                    arr_13 [i_2] [i_0] [i_0] = 22066;
                    var_20 = (max(var_20, (((((arr_4 [i_0 - 2]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
