/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            arr_15 [4] [i_4] [i_4] [i_4] = 72057594037927936;
                            arr_16 [i_1] [i_2] = 3100742548278678967;
                            arr_17 [i_1] [i_4] = 148;
                            arr_18 [6] [i_1] [0] [i_3] [i_3] [i_4] [i_3] = -2022694502;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_5] = 4167122127010227570;
                            arr_22 [i_5] = -2022694502;
                        }
                        arr_23 [4] [i_1] [4] [i_1] [1] = 4167122127010227577;
                        arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = 1598854077;
                    }
                    arr_25 [i_1] = 41826;
                    arr_26 [6] [6] [i_2] = -858035479719905750;
                    arr_27 [i_0] [i_1] [2] = 4167122127010227561;
                }
            }
        }
    }
    var_13 &= 4167122127010227561;
    var_14 = -6;
    #pragma endscop
}
