/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(((arr_0 [i_0]) + var_11)))) / (arr_1 [i_0])));
        arr_3 [8] [i_0] = ((~(((((((arr_0 [i_0]) ? var_16 : (arr_0 [i_0])))) || (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = arr_1 [i_2];
                        var_19 = ((var_7 % ((((-(arr_5 [11] [i_0]))) | (arr_6 [17] [i_1] [i_2])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = (((~60094) ? (arr_4 [i_4] [i_4 - 3]) : var_8));
        var_20 -= (((((4294967295 ? 9223372036854775807 : -85)) | (arr_1 [12]))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_21 = (((arr_9 [8] [i_5] [i_5] [i_5]) ? (((41632 ? 41648 : 0))) : 44));
        var_22 = ((~(((arr_6 [i_5] [i_5] [i_5]) ? var_10 : (arr_17 [i_5])))));
        var_23 = (arr_5 [22] [i_5]);
        var_24 = ((~(min(var_11, (arr_17 [i_5])))));
        var_25 = (max(((var_10 ? (arr_11 [i_5] [i_5] [i_5]) : 69)), 16379));
    }
    var_26 = ((~((var_9 ? (var_12 % var_16) : var_14))));
    #pragma endscop
}
