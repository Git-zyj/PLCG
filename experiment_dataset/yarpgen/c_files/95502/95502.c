/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = (((var_11 + var_6) || 384965655));
            }
        }
    }
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_16 ^= var_5;
                        arr_17 [i_2 - 2] [14] [i_4] [i_5] |= (((1555 / ((min(-61, 1570))))));
                    }
                    arr_18 [i_2] = ((((-3 ? var_1 : -1555)) - -0));

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_17 = (arr_14 [i_2 - 1] [7] [i_2 - 1] [i_2 - 1]);
                        var_18 = (((((arr_12 [i_2]) ? -1552 : 1552)) | ((1567 ? (-32767 - 1) : -1528))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_19 ^= (127 < 674290443);
                        arr_24 [i_2] [13] [i_2] [i_2] = (((((1 - 11311198198933472074) ? ((var_4 ? var_8 : var_11)) : (-1561 && 35732))) - ((var_10 ? -127 : (arr_0 [i_3])))));
                        var_20 = (arr_6 [i_2 + 4] [i_2]);
                    }
                }
            }
        }
    }
    var_21 ^= (((((14 ? 3933509546 : 1318179744))) || var_1));
    #pragma endscop
}
