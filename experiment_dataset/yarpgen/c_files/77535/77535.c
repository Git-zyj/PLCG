/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_2 [i_0 - 3])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2 + 1] = (min((min(148901188, var_1), ((((arr_7 [i_0] [i_1] [i_2] [i_4]) >= (arr_6 [i_0] [i_2] [i_0])))))));
                                var_17 |= ((~(1049997531 & 1)));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (((arr_1 [i_0]) >= -var_0));
                var_18 = (((!var_13) ? (arr_6 [i_0] [i_0 + 1] [i_0 - 3]) : (arr_6 [i_0] [i_0 - 2] [i_0 + 1])));
                var_19 = (((((~(arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1])))) > (((((arr_9 [i_0] [i_0] [i_0] [i_1]) || (arr_1 [18]))) ? (arr_10 [i_0]) : (arr_0 [i_0 - 3])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_20 = ((((max((arr_15 [i_5 + 1]), (arr_2 [i_5])))) ? (min((max(var_13, var_11)), (var_14 || -9))) : ((((arr_1 [i_5 + 2]) - ((var_14 ? -16 : 0)))))));
                var_21 = (min(var_21, (arr_18 [i_5 - 1] [i_5 + 2] [i_6])));
            }
        }
    }
    var_22 |= var_0;
    #pragma endscop
}
