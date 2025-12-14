/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((!-var_9), 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_0 [i_0 - 2] [i_0 - 1]);
                    arr_10 [i_0] [i_1] [i_2] = (min((((!(arr_7 [4] [i_1 + 1] [i_2])))), (((min(22780, -22799))))));
                    var_19 = (arr_8 [i_0]);
                    var_20 = (~22798);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_21 = (--1291050826);
                        var_22 = ((((!(arr_11 [i_0 - 2] [i_1])))));
                        var_23 = 22;
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((~(arr_8 [i_0])));
                        arr_16 [i_0] [i_0] = 1099511627775;
                    }
                }
            }
        }
    }
    var_24 = (max(2418417394, -22800));
    #pragma endscop
}
