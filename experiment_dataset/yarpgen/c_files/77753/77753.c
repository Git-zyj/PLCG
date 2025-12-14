/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 ^= var_9;
                arr_4 [i_1] = ((var_15 | (2147483648 + 19451)));
                arr_5 [i_0] = (((~(arr_3 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3] = 69;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 += ((((max((min((arr_6 [i_2]), (arr_0 [i_3 + 1] [i_5]))), (arr_19 [i_2] [i_2 - 2] [i_2 + 1] [i_3] [i_3 - 1] [i_5])))) ? 16213846 : 199));
                                arr_21 [i_2] [i_2] [i_4] = 56;
                            }
                        }
                    }
                    arr_22 [i_4] = ((-(((arr_9 [i_2] [i_3 - 1]) ? var_4 : (arr_6 [i_2 - 1])))));
                    var_20 = (arr_18 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_3 + 1]);
                    arr_23 [i_2] [i_2] [i_3] [i_4] = (((((71 + var_15) - (max(var_0, var_8)))) + ((((arr_12 [i_2 + 1] [i_3 - 1]) ? (((arr_6 [i_4]) ? 14852 : var_11)) : ((187 ? 34 : 71)))))));
                }
            }
        }
    }
    var_21 = (var_0 - var_10);
    #pragma endscop
}
