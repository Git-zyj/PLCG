/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [8] [8] [i_3] [i_3] [8] = (((2111122540 || var_1) > (arr_8 [i_3] [i_3 + 1] [1] [2] [0] [2])));
                            arr_11 [i_3] [i_3] [i_3] = var_5;
                        }
                    }
                }
                arr_12 [i_1] = ((((-(arr_4 [i_0]))) <= ((var_11 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_2 [i_0])))));
                arr_13 [6] = ((2183844760 ? ((var_13 ? ((2111122540 ? -916501179 : (arr_0 [i_0]))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((-29363 & ((((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) != (arr_7 [i_0]))))))));
                arr_14 [4] [4] = ((153 ? 2111122538 : 916501196));
            }
        }
    }
    #pragma endscop
}
