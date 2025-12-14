/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? var_13 : (((var_1 & var_10) ? var_11 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    var_19 = (((((~-1) && -var_12)) ? ((min((arr_3 [i_2 - 3]), ((-1 ? 1 : (arr_5 [i_2 - 1] [i_1])))))) : (arr_0 [i_2 - 4] [i_1])));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = 1;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [i_4] [i_0] = ((((min(2531621979861047630, 1))) && (2147483647 - 2147483647)));
                                arr_19 [i_0] [i_4] [i_1] [i_3] [i_4] [i_5] = (13178938763941541469 < var_0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_3] [i_6] [i_7] = (((arr_23 [i_0] [i_0] [i_3] [i_6] [i_7]) << (((((min(-2147483647, 1)) - -2147483638)) + 24))));
                                arr_25 [i_0] [i_0] [i_0] [10] [i_0] = (((((2147483647 ? 3898549310 : -1450092011))) ? (((arr_23 [i_0] [i_6 - 2] [i_6 - 2] [i_0] [i_7]) | (arr_23 [i_3] [i_6 - 1] [i_6] [i_7 - 1] [i_7]))) : ((~(arr_23 [8] [i_6 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3])))));
                            }
                        }
                    }
                }
                var_20 = (((min(var_9, (!200920154)))) >> (((((((var_10 ? (arr_2 [i_0]) : (arr_10 [i_0])))) ? var_17 : var_10)) + 1054217047)));
                var_21 -= (((var_6 - var_3) || (((-2147483647 ? 3898549310 : -269326320)))));
            }
        }
    }
    var_22 = (min(var_14, ((var_17 ? 3898549334 : var_4))));
    #pragma endscop
}
