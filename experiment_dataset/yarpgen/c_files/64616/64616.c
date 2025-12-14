/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4294967295;
    var_17 = ((-22702 ? -8193952616019164467 : 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = -16384;
                    arr_9 [i_2] [i_1] [i_2 - 1] = (max(((((arr_1 [i_2 + 1]) >= (arr_6 [i_2])))), (max(-22702, -1440284706))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_0] = 238;
                        var_18 = 22702;
                        var_19 = ((+(((((var_13 ? (arr_4 [11] [i_2] [i_2] [7]) : 4053519417))) ? (~var_12) : (arr_12 [i_0] [i_1] [i_2] [i_3])))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_2] = 22702;
                        arr_19 [i_2] [i_1] = (max((max((742131777 <= -8193952616019164467), (min(var_11, -22703)))), 1440284705));
                        arr_20 [i_2] [i_2 + 1] [i_1] [i_2] = ((((min(-7196919457795781647, (arr_6 [i_2])))) - var_15));
                        var_20 = var_13;
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_4] = (((((-(arr_4 [i_2 + 1] [i_2] [i_4] [i_4])))) ? (max(7196919457795781646, (arr_10 [i_0] [i_1]))) : (arr_10 [i_0] [i_2])));
                    }

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_24 [i_0] [i_2] [i_2 + 1] [i_5] = ((~(min(((min(var_12, 32))), (arr_23 [i_2 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                        arr_25 [i_0] [i_2] [i_5 - 1] = 22702;
                        arr_26 [i_5] [i_2] [i_2] [i_0] = (max(-22702, ((1440284706 ? -22702 : 1777575505))));
                    }
                    var_21 += 0;
                }
            }
        }
    }
    #pragma endscop
}
