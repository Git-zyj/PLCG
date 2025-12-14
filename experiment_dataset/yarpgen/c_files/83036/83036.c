/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7;
    var_16 = (-983372225 / 261735666937980006);
    var_17 += ((~(max(var_5, 4876743376423113701))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_18 -= ((((~(((arr_2 [i_0] [i_0]) ? (arr_0 [i_1]) : 0)))) & ((((((arr_2 [3] [3]) >= (arr_2 [i_0] [i_0]))) ? (arr_0 [i_1 - 1]) : 1128059244)))));
                var_19 = ((var_3 ? (max((arr_2 [i_1 - 1] [i_1 + 2]), (arr_2 [i_1 + 1] [i_1 + 2]))) : var_14));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1 + 1] [i_3] [i_3] [i_4] = (arr_4 [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 3]);
                                var_20 -= ((+(max((4294967289 <= -1), (~-1152921504606846976)))));
                                var_21 *= ((((144 ? 177 : (arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_3 + 2] [1]))) & (arr_12 [i_1 - 1] [i_1 + 1] [9] [0] [i_3] [i_3 + 2] [i_3])));
                                arr_16 [i_3] [i_3] [i_2] [i_3] = ((!254) ? ((((arr_1 [i_0]) == (arr_1 [i_2])))) : (arr_7 [i_0]));
                            }
                            arr_17 [i_3 + 1] [i_3] [i_3] [i_0] = ((!(((1152921504606846975 ? 0 : -8538)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_24 [6] [i_5] [5] [i_0] = (0 / 1152921504606846960);

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_22 = (((arr_7 [i_1 - 1]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 + 1])));
                                var_23 ^= 7;
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [i_7] |= ((8792763198701682660 & (arr_4 [i_1] [i_1 + 2] [i_1] [6])));
                                arr_28 [i_5] [i_1] [i_5] [i_5] [i_7] = 0;
                                var_24 = ((!(3157461008 ^ var_0)));
                            }
                            var_25 = (max((max(((max((arr_11 [i_0] [i_5]), 8538))), (arr_5 [i_0] [i_1 - 1] [i_5]))), (-146314577 ^ 3613595351)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            {
                var_26 -= (min(0, 8792763198701682648));
                var_27 -= (min((min(((var_11 ? var_14 : 5972849662048103569)), ((((arr_30 [i_9]) ? -17575 : (arr_29 [i_8 - 2] [i_8])))))), (((((var_14 ? var_11 : var_8)) >= var_1)))));
            }
        }
    }
    #pragma endscop
}
